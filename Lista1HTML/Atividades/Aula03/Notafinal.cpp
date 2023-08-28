#include <stdio.h>
int main(){
	//Declaração de variáveis
	int nota;
	//Etrada de dados
	printf("Nota final do aluno:");
	scanf("%d", &nota);
	//Processamento e saída com condicional
	if(nota >= 50)
		printf("Aprovado");
	else if(nota < 20)
		printf("Reprovado");
	else
		printf("Recuperacao");	
	//Fim
	return 0;
}
