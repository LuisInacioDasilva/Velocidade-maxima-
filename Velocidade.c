#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
float limite, multa,velocidade_excedida;
printf("\nDigite a velocidade máxima permitida: ");
scanf("%f", &limite);
printf("\nDigite quantos quilômetros o condutor/condutora ultrapassou: ");
scanf("%f", &velocidade_excedida);

if(velocidade_excedida >=1 && velocidade_excedida <=10) {
    printf("\nMulta de R$ 50,00");
}
if(velocidade_excedida >=11 && velocidade_excedida <=30){
    printf("\nMulta de R$ 100,00");
}
if(velocidade_excedida>=31){
    printf("\nMulta de R$ 200,00");
}
return(0);

}
