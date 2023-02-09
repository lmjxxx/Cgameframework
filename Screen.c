
#include "Screen.h"
#include <ncurses.h>

/*
void ScreenInit();
void ScreenFlipping();
void ScreenClear();
void ScreenRelease();
void ScreenPrint(int x, int y, char * string);
void SetColor(unsigned short color);
https://m.cafe.daum.net/nowcampus/dZlN/5?listURI=%2Fnowcampus%2FdZlN
https://huiyu.tistory.com/entry/C언어로-게임만들기-3-렌더링-기능-구현
https://github.com/brenns10/tetris/blob/master/src/main.c
https://m.blog.naver.com/guile21c/52637374

*/

/*
화면 버퍼 초기화
전위 버퍼와 백 버퍼롤 사용할 화면 버퍼를 두 개 생성한다.
windows.h 를 못쓰니 ncurses를 사용해서 구현해야한다.
*/
void ScreenInit()
{
    initscr(); // 커스 터미널 초기화 코드, 화면을 지우고 공백 상태로 만든다.
    keypad();
}
/*
화면 버퍼 지우기
하나의 화면 버퍼가 활성화되어 출력되고 있는 동안에 다음 장면을 위한 화면 버퍼는 지워야 한다.
대기하고 있는 화면 버퍼를 지우는 역할을 한다.
*/
void ScreenClear()
{
}

/*
화면 버퍼 전환
화면 버퍼 전환은 활성화된 화면 버퍼와 비활성화된 화면 버퍼의 상태를 바꾸는 것을 말한다.
페이지 플리핑과 같다.
*/
void ScreenFlipping()
{
    refresh(); // 가상의 윈도우 버퍼상에 문자열을 출력하여 refresh() 함수가 실행 되었을 때 그 내용이 화면상에 출력하게 된다. 
}

/*
화면 버퍼 해제
화면 버퍼 초기화 함수에서 생성한 두 개의 화면 버퍼를 모두 해제하는 부분
*/
void ScreenRelease()
{
    endwin(); //ncurse 사용 동적메모리를 반납하고 터미널을 다시 일반 모드로 전환시킨다. 
}

/*
출력 함수
대기 화면 버퍼의 x, y 좌표에 문자열을 출력해준다.
*/
void ScreenPrint(int x, int y, char *string)
{
    //printw("ㅁ"); // printf와 동일한 기능, 현재의 커서 위치(x,y) 좌표상에 문자열을 출력해준다. 문자열 출력 버퍼상에 해당 문자들이 채워지고 이후의 refresh() 함수에 의해 실제 화면상에 표시하게 된다.
    //mvprintw(y,x,"a"); // printw에 좌표지정 기능이 표함된 함수
    //move(y, x); //현재으 ㅣ커서 위치를 내가 원하는 행(ROW, y)과 열(COL,x) 위치로 이동시키낟. addstr mvaddstr
    //getmaxyx() 현재 터미널의 가로, 세로 크기를 얻어온다. 
}

/*
출력 문자의 색상을 설정하는 함수
출력 문자의 색상값은 0에서부터 7까지 설정할 수 있으며 다음 SecColor() 함수가 사용될 때까지 이전에 사용한 SetColor()의 색상이 모든 문자에 적용된다.
이 색상은 대기 화면 버퍼에 적용된다.
#define COLOR_BLACK	0
#define COLOR_RED	1
#define COLOR_GREEN	2
#define COLOR_YELLOW	3
#define COLOR_BLUE	4
#define COLOR_MAGENTA	5
#define COLOR_CYAN	6
#define COLOR_WHITE	7
*/
void SecColor(unsigned short color)
{
    if (has_colors() == FALSE) // has_colors 현재의 단말기가 컬러를 지원하는지 유무 확인,
    {
        endwin();
        printf("Your terminal does not support color \n");
        exit(1);
    }
    start_color();                           // 컬러 폰트를 사용 하기에 앞서 항상 해줘야 하는 초기화 함수
    init_pair(1, COLOR_BLACK, COLOR_YELLOW); // init_pair(팔래트 넘버, 폰트 전경색, 배경색);
}
