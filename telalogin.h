#ifndef TELALOGIN_H_INCLUDED
#define TELALOGIN_H_INCLUDED
#define ENTER 13    // CÓDIGO ASCII DA TECLA ENTER
#define BACKSPACE 8 // CÓDIGO ASCII DA TECLA BACKSPACE
#define SPACE 32    // CÓDIGO ASCII DA TECLA BARRA DE ESPACO
#define TAB 9       // CÓDIGO ASCII DA TECLA BACKSPACE
#define ESC 27      // CÓDIGO ASCII DA TECLA ESC
#include "stdio.h"
#include "string.h"
#include "windows.h"
#include "conio.h"
#include "telainicial.h"
#include "moldetela.h"

int telalogin();
int op, logvalidado = 0, cadvalidado = 0;

int telalogin()
{
 char user[20], pass[20], acesso[10], vuser[20], vpass[20], cduser[20], cdpass[20], concdpass[20];
 char ch = '\0';
 int ctecla = 0;
 int comparacao;

 memset(vuser, '\0', sizeof(vuser));
 memset(vpass, '\0', sizeof(vpass));

while(logvalidado == 0)
{
 system("cls");

 molde();
 gotoxy(33,1);
 printf("Tela de login");
 gotoxy(1,3);
 printf("1 - Acessar o sistema");
 gotoxy(1,4);
 printf("2 - Cadastrar usuario");
 gotoxy(1,5);
 printf("Selecione uma opcao: ");
 scanf("%d", &op);

 FILE * arquivo;
 if((arquivo=fopen("login.txt", "r"))==NULL)
 {
   printf("Falha na abertura do arquivo!");
   getch();
 }
 else
 {
     fscanf(arquivo,"%s %s",user,pass);
 }

switch(op)
 {

     molde();
     gotoxy(33,1);
     printf("Tela de login");

  //abertura do arquivo.

    case 1:
     system("cls");
     molde();
     gotoxy(33,1);
     printf("Tela de login");
     gotoxy(1,3);
     printf("Usuario: ");
     gotoxy(10,3);
     scanf("%s", vuser);
     gotoxy(1,5);
     printf("Senha: ");

     while(ctecla<8)
     {
       ch = getch();

       switch(ch)
       {
        case BACKSPACE:
         if(ctecla>0)
         {
          fflush(stdin);
          putch(BACKSPACE);
          ch = '\0';
          vpass[ctecla] = ch;
          ctecla--;
          putch(SPACE);
          putch(BACKSPACE);
         }
          break;
        case TAB:
         putch(TAB);
         ctecla = 8;
         break;
        case ENTER:
         putch(ENTER);
         ctecla = 8;
         break;
        default:
         vpass[ctecla] = ch;
         putch('*');
         ctecla++;
         break;
       }
     }

   while(( strcmp( user, vuser)!= 0) && ( strcmp( pass, vpass) != 0))
    {
      do
      {
        fscanf(arquivo,"\n%s %s",user,pass);
      }while(( strcmp( user, vuser)== 1) && ( strcmp( pass, vpass) == 1));

    }

  if(( strcmp( user, vuser)== 0) && ( strcmp( pass, vpass) == 0))
  {
    gotoxy(1,7);
    printf("Acesso permitido!");
    logvalidado = 1;
  }
  else
  {
    gotoxy(1,7);
    printf("Acesso negado!");
    printf("Tente novamente. ");
    getch();
    system("cls");
  }

  fclose(arquivo);
 break;

 case 2:
     system("cls");
     molde();

     FILE * arquivo;
     if((arquivo=fopen("login.txt", "a"))==NULL)
     {
       printf("Falha na abertura do arquivo!");
       getch();
     }
    while(cadvalidado == 0)
     {
         system("cls");
         molde();
         gotoxy(33,1);
         printf("Tela de cadastro");

         gotoxy(1,3);
         printf("Digite o usuario: ");
         scanf("%s", cduser);
         gotoxy(1,4);
         printf("Digite a senha: ");
         scanf("%s", cdpass);
         gotoxy(1,5);
         printf("Confirmar a senha: ");
         scanf("%s", concdpass);

         if(strcmp( cdpass, concdpass)== 0)
            {
               gotoxy(1,6);
               printf("Usuario cadastrado com sucesso!");
               gotoxy(18,21);
               printf("Pressione qualquer tecla para voltar ao menu de opcoes. ");
               getch();
               fprintf(arquivo, "%s", cduser);
               fprintf(arquivo, " %s", cdpass);
               cadvalidado = 1;

            }
            else
            {
                gotoxy(1,6);
                printf("Senhas nao conferem, favor tentar novamente.");

                getch();
            }
    }
    fclose(arquivo);

 break;
    default:
     gotoxy(1,8);
     printf("Opcao invalida, precione qualque tecla para retornar ao menu de opcoes. ");
     getch();
        break;
 }
}
 getch();
}



#endif // TELALOGIN_H_INCLUDED
