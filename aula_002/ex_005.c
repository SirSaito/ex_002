//5.  Escreva um programa que inclua uma função chamada calcular Area Retangulo 
//que recebe dois parâmetros do tipo double representando o comprimento e a largura de um retângulo. 
//A função deve retornar o valor da área calculada. 
//Defina o protótipo da função antes de sua implementação e utilize-a no main.

#include <stdio.h>

double calcularAreaRetangulo(double, double);

int main(){
    double h, b, a;
    printf("\t\tDigite a base do retandulo:\d");
    scanf("%lf", &b);
    printf("\t\tDigite a altura do retandulo:\d");
    scanf("%lf", &h);
    a= calcularAreaRetangulo(b, h);
    printf("\t\tArea do retangulo:%f", a);

}

double calcularAreaRetangulo( double k, double g){
    return (k*g);
}