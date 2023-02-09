/*
    NAME: Screen.h
    DESCRIPTION: 화면출력과 관련된 것들
    AUTHOR: lmxx
*/

#ifndef SCREEN_H
#define SCREEN_H

static int nScreenIndex; //버퍼의 Index를 나타낼 변수
static char * hScreen[2]; //전위버퍼와 후위버퍼
static int HEIGHT, WIDTH; // 그릴 화면의 사이즈

void ScreenInit(); 
void ScreenFlipping();
void ScreenClear();
void ScreenRelease();
void ScreenPrint(int x, int y, char * string);
void SetColor(unsigned short color);


#endif //SCREEN_H