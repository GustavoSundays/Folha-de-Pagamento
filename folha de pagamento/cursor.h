#ifndef CURSOR_H_INCLUDED
#define CURSOR_H_INCLUDED

#include <windows.h>

void gotoxy(short col, short row)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position={col,row};
    SetConsoleCursorPosition(h, position);
}

#endif // CURSOR_H_INCLUDED
