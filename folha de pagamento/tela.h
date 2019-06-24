#ifndef TELA_H_INCLUDED
#define TELA_H_INCLUDED
#include "cursor.h"

void telaBaseLinhaDupla(short ci, short li, short largura, short altura) {
    gotoxy(ci, li);
    printf("%c", 201);
    gotoxy(ci + largura, li);
    printf("%c", 187);
    gotoxy(ci, li + altura);
    printf("%c", 200);
    gotoxy(ci + largura, li + altura);
    printf("%c", 188);
    int linhaVertical;
    for (linhaVertical = li + 1; linhaVertical < altura + li; linhaVertical++) {
        gotoxy(ci, linhaVertical);
        printf("%c", 186);
        gotoxy(largura + ci, linhaVertical);
        printf("%c", 186);
    }
}

void linhaDivisoria(short ci, short li, short largura) {
    gotoxy(ci, li);
    printf("%c", 204);
    gotoxy(ci + largura, li);
    printf("%c", 185);
}

void linhaHorizontal(short ci, short li, short largura) {
    gotoxy(ci, li);
    for (ci+1;ci+1<largura-1;ci++){
    printf("%c", 205);
    }
}


#endif // TELA_H_INCLUDED
