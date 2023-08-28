#include <stdio.h>
/*Porgrama que avalia a média com critérios*/
/*Aprovado" >= 50 e Frequência >= 75%*/

int main(){
	
	//Declaração de variáveis
	int media, frequencia;
	
	//Etrada de dados
	printf("Nota final do aluno:");
	scanf("%d", &media);
	printf("Porcentagem da frequencia:");
	scanf("%d", &frequencia);
	
	//Verificação da situação do aluno
	if(media >= 50 && frequencia >= 75)
		printf("Aprovado");
	else
		printf("Reprovado");
	//Fim
	return 0;
}
