#ifndef TELAINICIAL_H_INCLUDED
#define TELAINICIAL_H_INCLUDED
#include "stdio.h"
#include "string.h"
#include "windows.h"
#include "conio.h"


void gotoxy(int n, int l)
{
  COORD c;
  c.X = n;
  c.Y = l;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int telainicial();

int telainicial()
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
 gotoxy(79,22);
 putchar(185);

 gotoxy(12,1);
 printf("Bem vindos ao");
 gotoxy(27,1);
 printf("SCI - Sistema de contabilidade integrado");

 gotoxy(18, 21);
 printf("Precione qualquer tecla para iniciar o sistema");

 gotoxy(22,23);
 printf("Sistema de controle contabil- V.1.0\n\n");


 getch();

 system("cls");
}
#endif // TELAINICIAL_H_INCLUDED
