#ifndef MENUOP_H_INCLUDED
#define MENUOP_H_INCLUDED


int menuopcoes();

int menuopcoes()
{
int e;
op = 0;
while(op<1 || op>5)
{

system("cls");
molde();
gotoxy(33,1);
printf("Menu de opcoes ");

gotoxy(1,3);
printf("1 - Consulta cliente");
gotoxy(1,4);
printf("2 - Cadastro cliente");
gotoxy(1,5);
printf("3 - Consulta fornecedores");
gotoxy(1,6);
printf("4 - Cadastro fornecedores");
gotoxy(1,7);
printf("5 - Relatorio de acesso diario");
gotoxy(1,8);
printf("Selecione uma opcao: ");
e = scanf("%d", &op);

if(e==0);
{
    gotoxy(1,9);
    printf("Valor incorreto. Digite apenas numeros!");

}
fflush(stdin);

switch(op)
{
 case 1:
    break;

 case 2:
    break;

 case 3:
    break;

 case 4:
    break;

 case 5:
    break;

}


getch();




}
}
#endif // MENUOP_H_INCLUDED
