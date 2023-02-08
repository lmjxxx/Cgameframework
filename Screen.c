
#include "Screen.h"

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

*/

/*
화면 버퍼 초기화
전위 버퍼와 백 버퍼롤 사용할 화면 버퍼를 두 개 생성한다.
windows.h 를 못쓰니 ncurses를 사용해서 구현해야한다.
*/
void ScreenInit()
{
    
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
}

/*
화면 버퍼 해제
화면 버퍼 초기화 함수에서 생성한 두 개의 화면 버퍼를 모두 해제하는 부분
*/
void ScreenRelease()
{
}

/*
출력 함수
대기 화면 버퍼의 x, y 좌표에 문자열을 출력해준다.
*/
void ScreenPrint(int x, int y, char *string)
{
}

/*
출력 문자의 색상을 설정하는 함수
출력 문자의 색상값은 1에서부터 15까지 설정할 수 있으며 다음 SecColor() 함수가 사용될 때까지 이전에 사용한 SetColor()의 색상이 모든 문자에 적용된다.
이 색상은 대기 화면 버퍼에 적용된다.
*/
void SecColor(unsigned short color)
{
}
