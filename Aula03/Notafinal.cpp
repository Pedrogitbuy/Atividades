#include <stdio.h>
int main(){
	//Declara��o de vari�veis
	int nota;
	//Etrada de dados
	printf("Nota final do aluno:");
	scanf("%d", &nota);
	//Processamento e sa�da com condicional
	if(nota >= 50)
		printf("Aprovado");
	else if(nota < 20)
		printf("Reprovado");
	else
		printf("Recuperacao");	
	//Fim
	return 0;
}
