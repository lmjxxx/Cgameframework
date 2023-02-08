/*
    NAME: key.h
    DESCRIPTION: key 입력과 관련된 헤더
    AUTHOR: lmxx
*/
#ifndef KEY_H
#define KEY_H

#include <stdio.h>
#include <unistd.h>
#include <ncurses.h> // 방향키도 댐 termios 보다 좋음

int get_key();

#endif // KEY_H
