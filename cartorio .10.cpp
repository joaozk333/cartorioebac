#include <stdio.h> // biblioteca de comunica��o com o usuario
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca responsavel por cuidar das strings

int registro() // fun��o responsavel por cadastrar os usuarios no sistema
{
	// Inicio cria��o de variavel
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    // final da cria��o de variavel
    
   printf("Digiteo cpf a ser cadastrado: "); // colentando informa��o do usuario
   scanf("%s", cpf); // %s refere-se a strings
   
   strcpy(arquivo,cpf); //responsavel por copiar valores das string
   
   FILE *file; // cria o arquivo
   file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
   fprintf(file,cpf); // salvo o valor da variavel
   fclose(file); //fecha  arquivo
   
   printf("Digite o nome a ser cadastrado: ");
   scanf("%s",nome);
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);
   
   printf("digite o sobrenome a ser cadastrado: ");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);

   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);
	
   printf("Digite o cargo a ser cadrastrado: ");
   scanf("%s",cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
	
   system("pause");	
 	
	
	
	
	
	
}

int consultar()
{

	setlocale(LC_ALL, "portuguese"); // definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
{
	printf("N�o foi possivel abrir  arquivo, n�o localizado!.\n");
}

    while(fgets(conteudo, 100, file) != NULL)
	
{
    printf("\nEssas s�o asa informa��es do usu�rio: ");	
    printf("%s", conteudo);
    printf("\n\n");
}

system("Pause");








}

int deletar()
{

   char cpf[40];
   
   printf("Digite o CPF do usuario a ser deletado: ");
   scanf("%s",cpf);
   
   remove(cpf);
   
   FILE *file;
   file = fopen(cpf, "r");
   if(file == NULL)
{
  
   printf("O usuario n�o se encontra no sistema!. \n");
   system("pause");
   	
}




}



int main()
    {
	int opcao=0; // definindo variaveis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
		
	
	  system("cls"); // responsavel por limpar a tela

	
	setlocale(LC_ALL, "portuguese"); // definindo a linguagem
	
	printf("### cart�tio da EBAC ###\n\n");
	printf("Escolha a op��o desejada do menu:\n\n");
	printf("\t1 - registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - Sair do sistema\n");
	printf("opcao: "); //fim do menu
	
	scanf("%d", &opcao); // armazenamento a escolha do usuario
	
	system("cls");
	
	
	switch(opcao)
	{
		case 1:
	    registro(); // chamada de fun��es
		break;
		
		case 2:
		consultar();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema!");
		return 0;
		break;
		
		
		default:
		printf("Essa op��o n�o est� disponivel!\n");
		system("pause");
		break;
	}
	
	
	


	
   }
}
