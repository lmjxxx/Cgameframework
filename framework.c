#include "framework.h"

/*
savetty: 현재의 터미널 상태 정보를 저장(backup)한다.
resetty: 현재의 터미널 상태 정보를 복원(restore)한다.
*/
void termInit()
{
    savetty();
}
/*
initscr: 커스 터미널을 초기화하는 함수.
keypad: 방향키, f1 f2 등 특수키를 사용할 수 있도록 초기화 하는 함수
*/
void Init()
{
    initscr(); // curse terminal initializing
    keypad(stdscr, TRUE);
}

void Render()
{
}

void Update()
{
}

/*
터미널 상태 정보를 복원한다.
*/
void Release()
{
    resetty();
}

void PrintScreen(int x, int y, char *string)
{
    mvprinttw(y, x, string);
}