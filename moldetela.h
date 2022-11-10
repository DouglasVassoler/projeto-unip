#ifndef MOLDETELA_H_INCLUDED
#define MOLDETELA_H_INCLUDED
#include "stdio.h"
#include "windows.h"
#include "conio.h"

void gotoxy(int n, int l)
{
  COORD c;
  c.X = n;
  c.Y = l;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int molde();

int molde()
{
system("Color 3f");
 //25 linhas (0-24) / 80 colunas (0-79)
 //gotoxy(coluna,linha);
 int l,c;
 gotoxy(0,0);
 putchar(201);
 gotoxy(79,0);
 putchar(187);
 gotoxy(79,24);
 putchar(188);
 gotoxy(0,24);
 putchar(200);

 for(c=1;c<=78;c++)
 {
   gotoxy(c,0);
   putchar(205);
   gotoxy(c,24);
   putchar(205);
   gotoxy(c,22);
   putchar(205);
   gotoxy(c,2);
   putchar(205);
 }
 for(l=1;l<=23;l++)
 {
   gotoxy(79,l);
   putchar(186);
   gotoxy(0,l);
   putchar(186);
 }
 gotoxy(0,22);
 putchar(204);
 gotoxy(0,2);
 putchar(204);
 gotoxy(79,22);
 putchar(185);
 gotoxy(79,2);
 putchar(185);

 gotoxy(22,23);
 printf("Sistema de controle contabil- V.1.0\n\n");

 //getch(); retirado
}

#endif // MOLDETELA_H_INCLUDED
