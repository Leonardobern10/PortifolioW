#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char comecar, operando;
	float primeiro_valor, segundo_valor, resultado;
	
	printf("Gostaria de iniciar o programa? s/n\n");
	scanf("%c", &comecar);
	
	printf("Digite o primeiro valor... ");
	scanf("%f", &primeiro_valor);
	
	printf("Digite o operando: \n[+] - Soma\n[-] - Subtração\n[*] - Multiplicação\n[/] - Divisão\n");
	scanf("%c", &operando);
	
	printf("Digite o segundo valor... ");
	scanf("%f", &segundo_valor);
	
	switch(operando){
		case '+':
			resultado = primeiro_valor + segundo_valor;
			break;
		case '-':
			resultado = primeiro_valor - segundo_valor;
			break;
		case '*':
			resultado = primeiro_valor * segundo_valor;
			break;
		case '/':
			resultado = primeiro_valor / segundo_valor;
			break;
	}
	
	return resultado;
	
}
