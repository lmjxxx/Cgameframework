/*
    NAME: framework.h
    DESCRIPTION: 게임 제작에 필요한 기능들을 다 모아놓음.
    AUTHOR: lmxx
    https://m.cafe.daum.net/nowcampus/dZlN/5?listURI=%2Fnowcampus%2FdZlN
    https://huiyu.tistory.com/entry/C언어로-게임만들기-3-렌더링-기능-구현
    https://github.com/brenns10/tetris/blob/master/src/main.c
    https://m.blog.naver.com/guile21c/52637374
*/

#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdarg.h>


typedef struct Character
{
    char *sprite;
    int char_x_size;
    int char_y_size;
    short x;
    bool collider;
} character;

void Init();     // 초기화
void termInit(); // 터미널 초기화
void Render();   // 화면 출력
void Update();   // 데이터 갱신
void Release();  // 해제

void PrintScreen(int x, int y, char *string, ...);
void SetColor(int palet, unsigned short color, unsigned short background);
void moving(int x, int y);
void drawing_box(int x, int y, unsigned short color);

#endif // FRAMEWORK_H
