#include <stdio.h> //biblioteca de comunição com o usuraio
#include <stdlib.h> //biblioteca de variaveis, para alocação de espaço na memoria
#include <locale.h> //biblioteca de texto por região
#include <string.h> //biblioteca responsavél pela strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF para ser cadastrado no sistema: \n");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);//responsavel por copiar os valores da strings
	
	FILE * file; //Ele cria o arquivo
	file = fopen(arquivo, "w"); //Ele cria o arquivo
	fprintf(file, cpf);// Salvo o valor da variavel
	fclose(file);// Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);// Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado no sistema: \n");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);// Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);// Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado no sistema: \n");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);// Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);// Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado no sistema: \n");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);// Fecha o arquivo
	
	system ("pause");
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	char cpf[40];
	char conteudo [200];	
	
	printf("Digite o CPF para ser realizado a busca: \n");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if(file == NULL )
	 {
	 	printf(" Não foi possivel abrir o arquivo, tente novamente!\n");
	 }
	 
	 while(fgets(conteudo, 200, file)!= NULL)
	 {
	 	printf("\nEssas são as informçãos do usuario:");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 }
	 
	 system ("pause");
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese");
	char cpf[40];
	
	printf("Digite o CPF do usuario para ser deletado no sistema:");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file == fopen(cpf, "r");
	
	if (file == NULL)
	{
		printf("Não foi localizado o usuario no sistema, tente novamente!\n");
		system ("pause");
		
	}
	
	//while (fgets(cpf, 40, file)!=NULL)
	//{
		//printf("O usuário foi deletado com sucesso!\n");
		//printf("%s", cpf);
		//printf("\n\n");
	//}
	//printf("O usuário foi deletado com sucesso!\n");
	//
}

int main()
{
	int opcao=0;//definindo variaveis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");//definindo a linguagem
	
	printf("Óla, bem vindo ao\n");//inicio do codigo do menu
	printf("Escolha a opção desejada no menu:\n\n");
	printf("\t1 - Registrar nomes\n\n");
	printf("\t2 - Consultar nomes\n\n");
	printf("\t3 - Deletar nomes\n\n\n");
	printf("Opção: ");//fim do menu
	
	scanf("%d", &opcao);//armazenamento 
	
	system("cls");
	
		switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2: 
		consulta();
		break;
		
		case 3:
		deletar();
		break;

		default:
		printf("Opção incorreta! Tente novamente\n");
 		system ("pause");
		break;
}
}
}
