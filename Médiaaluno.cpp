#include <stdio.h>
/*Programa que avalia alunos Médias*/
int main (){
	//Declaração de variáveis
	int media;
	//Entrada de dados 
	printf("Digite a média final do aluno de 0 a 1000:");
	scanf("&d", &media);
	//Processamento e Saída com condicional
	if(media >=50)
	    printf("Aprovado");
	else 
	    printf("Reprovado");
	//Fim
	return 0;
}
