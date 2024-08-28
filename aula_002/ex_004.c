//4- Escreva um programa que demonstre diferentes escopos de variáveis: global, local e bloco. 
//O programa deve declarar uma variável global, usar essa variável dentro de uma função
// e modificar seu valor dentro de um bloco condicional (if) dentro dessa função.



#include <stdio.h>

void bomdia(void);
void modifique(void);
void troll (void);

int a=5, g;

int main(){
    bomdia();
}
void bomdia(void){
    printf("\t\tBom dia!!!\t\n");
    printf("\tEsta vendo essa variavel aqui?%d\n", a);
    modifique();
}
void modifique(void){
    printf("\tEntao eu quero que você mude esse valor pra mim\n");
    printf("\tDigite um valor para essa variavel:\n");
    scanf("%d", &g);
    a=g;
    troll();
}
void troll (void){
    printf("\tAgora o valor da primeira variavel virou o numero que voce digitou\n");
    printf("%d", a);
}