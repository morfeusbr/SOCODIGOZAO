#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>
#include <iostream>
#include <ostream>

int main () {


setlocale(LC_ALL,"portuguese");

float nota1, nota2, nota3, nota4, media, media_faltante;
int numero = 7;


printf("Digite a nota do 1° bimestre:");
scanf ("%f", &nota1);

printf("Digite a nota do 2° bimestre:");
scanf ("%f", &nota2);

printf("Digite a nota do 3° bimestre:");
scanf("%f", &nota3);

printf ("Digite a nota do 4° bimestre:");
scanf("%f", &nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4;
printf("A média é: %.2f", media);

if (media < 7)  
media_faltante = (7 - media);
std::cout << "" << std::endl;
printf("Pontos que faltaram: %.2f", media_faltante);
    

return 0;

}