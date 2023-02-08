/*
    NAME: Screen.h
    DESCRIPTION: 화면출력과 관련된 것들
    AUTHOR: lmxx
*/

#ifndef SCREEN_H
#define SCREEN_H

void ScreenInit(); 
void ScreenFlipping();
void ScreenClear();
void ScreenRelease();
void ScreenPrint(int x, int y, char * string);
void SetColor(unsigned short color);



#endif //SCREEN_H