#include <stdio.h>
/*Programa que avalia alunos M�dias*/
int main (){
	//Declara��o de vari�veis
	int media;
	//Entrada de dados 
	printf("Digite a m�dia final do aluno de 0 a 1000:");
	scanf("&d", &media);
	//Processamento e Sa�da com condicional
	if(media >=50)
	    printf("Aprovado");
	else 
	    printf("Reprovado");
	//Fim
	return 0;
}
