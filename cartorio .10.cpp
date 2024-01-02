#include <stdio.h> // biblioteca de comunicação com o usuario
#include <stdlib.h> // biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsavel por cuidar das strings

int registro() // função responsavel por cadastrar os usuarios no sistema
{
	// Inicio criação de variavel
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    // final da criação de variavel
    
   printf("Digiteo cpf a ser cadastrado: "); // colentando informação do usuario
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
	printf("Não foi possivel abrir  arquivo, não localizado!.\n");
}

    while(fgets(conteudo, 100, file) != NULL)
	
{
    printf("\nEssas são asa informações do usuário: ");	
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
  
   printf("O usuario não se encontra no sistema!. \n");
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
	
	printf("### cartótio da EBAC ###\n\n");
	printf("Escolha a opção desejada do menu:\n\n");
	printf("\t1 - registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("opcao: "); //fim do menu
	
	scanf("%d", &opcao); // armazenamento a escolha do usuario
	
	system("cls");
	
	
	switch(opcao)
	{
		case 1:
	    registro(); // chamada de funções
		break;
		
		case 2:
		consultar();
		break;
		
		case 3:
		deletar();
		break;
		
		
		default:
		printf("Essa opção não está disponivel!\n");
		system("pause");
		break;
	}
	
	
	


	
   }
}
