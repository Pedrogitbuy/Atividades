#include <stdio.h>
/*Porgrama que avalia a m�dia com crit�rios*/
/*Aprovado" >= 50 e Frequ�ncia >= 75%*/

int main(){
	
	//Declara��o de vari�veis
	int media, frequencia;
	
	//Etrada de dados
	printf("Nota final do aluno:");
	scanf("%d", &media);
	printf("Porcentagem da frequencia:");
	scanf("%d", &frequencia);
	
	//Verifica��o da situa��o do aluno
	if(media >= 50 && frequencia >= 75)
		printf("Aprovado");
	else
		printf("Reprovado");
	//Fim
	return 0;
}
