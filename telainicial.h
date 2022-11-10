#ifndef TELAINICIAL_H_INCLUDED
#define TELAINICIAL_H_INCLUDED
#include "stdio.h"
#include "string.h"
#include "windows.h"
#include "conio.h"
#include "moldetela.h"

int telainicial();

int telainicial()
{
 molde();
 gotoxy(27,6);
 printf("Sejam bem vindos ao SCA");
 gotoxy(23,1);
 printf("SCA - Sistema de controle de acesso");

 gotoxy(22,23);
 printf("Sistema de controle de acesso- V.1.0\n\n");

 gotoxy(18,21);
 system("pause");

// foi retirado o getch(); por conta do system(pause)

system("cls");
}

#endif // TELAINICIAL_H_INCLUDED
