#include <stdio.h>
#include <stdio.h>  
#include <locale>.h>
#include <string.h>

int registro()
{
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome[40];
	char cargo [40];
	
	printf ("digite o cpf a ser cadastrado: ");
	scanf ("%s",cpf);
	
	strcpy(arquivo, cpf);
	
	FILE*file;
	file= fopen (arquivo,"W");	
	fprintf (file,cpf);
	fclose(file);
	
	file= fopen (arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("digite o nome a ser cadastrado:");
	scanf ("%s, nome");
	
	file= fopen (arquivo, "a");
	fprintf(file,",");
	fclose (file);
	
	printf("digite o sobrenome a ser cadastrado: ");
	scanf ("%s",sobrenome);
	
	file=fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file=fopen (arquivo,"a");
	fprintf (file,cargo);
	fclose(file);
	
	system ("pause");
		
printf("Voc� escolheu o registro de nomes!\n");
system ("pause");
	
}

int consulta() 

{
printf(" Voc� escolheu consultar nomes");
system ("pause");
}

int deletar()

{

char cpf [40];
char conteudo[200];

printf ("digite o CPF a ser consultado: ");
scanf ("%,s");

FILE*file;
file=fopen (cpf,"r");
if (file==NULL);
{
	printf(" N�o foi possivel abrir o arquivo, n�o localizado!");
	
}

while (fgets(conteudo,200,file)!= NULL);

{
printf ("\n essas informa��es s�o do usuario:  ");
printf("%s,conteudo");
printf ("\n\n");
}

system ("pause");

printf(" Voc� escolheu deletar nomes");
system ("pause");
}
int main()
{
int opcao=0;
int continuar = 1; 

setlocale(LC_ALL,"Portuguese");

while(continuar){ 

system("cls");


printf("###CART�RIA DA EBAC ### \n\n");
printf(" Escolha a op��o desejada no menu: \n\n");
printf("\t1 - Registrar Nomes:\n");
printf("\t2 - Consultar Nomes:\n");
printf("\t3 - Deletar Nomes:\n\n");
printf("Op�oes:"); 

scanf("%d", &opcao);

system("cls");


switch (opcao)	
{	
case 1:
registro();
break;
	
case 2:
consulta();
break;


case 3:
deletar ();
break;



default:
printf("Essa op��o n�o est� disponivel \n");
system("pause");
break;
}

 if (continuar) { 
            printf("\nPressione qualquer tecla para voltar ao menu...\n");
            system("pause");
        }
    }

    return 0;
}




