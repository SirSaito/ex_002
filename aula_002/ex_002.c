//Considere os seguintes protótipos de funções e a implementação do main():
//void bom_dia();
//int aleat();
//int dobro(int);
//void mostra_dobro(int);

//int main(){
//	int x, num;
// 
//	bom_dia();
//	printf("%d", aleat());
//	x = aleat(); 	 
//	num += dobro(x);
//	if (dobro(x) > dobro(aleat())){
//    		mostra_dobro(x);
//	}
//	return 0;
//}
//Como é possível diferenciar as funções que têm retorno ou não? Como esses retornos estão sendo usados nessa 
//implementação? E quanto aos parâmetros? Implemente as funções, conforme os protótipos, e teste a função principal.
//Resposta: As funções com retorno são aquelas que são consideradas como procedimentos, e não são void,
//as que não tem retorno são as funções void, os retornos estão sendo usados para guardar o valor de aleat e 
//retornar esse valor, e o procedimento dobro está sendo usado para reaizar a conta e retornar o valor final
//

#include <stdio.h>;

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int aleat(int x){
	scanf()
}

void bom_dia(){
	printf("\t\tBom dia!\n");
}
int main(){
	int x, num;
 
	bom_dia();
	printf("%d", aleat());
	x = aleat(); 	 
	num += dobro(x);
	if (dobro(x) > dobro(aleat())){
    		mostra_dobro(x);
	}
	return 0;
}