#include <stdio.h>

float calcularMedia(float n1, float  n2, float n3);

int main(){
    float valor01, valor02, valor03, media;
    
    printf("digite o valor 01:");
    scanf("%f", &valor01);
    printf("digite o valor02:");
    scanf("%f", &valor02);
    printf("digite o valor 03:");
    scanf("%f", &valor03);
    
    media = calcularMedia(valor01, valor02, valor03);
    
    printf("o valor final da media é %.2f", media);
    
    
    
}

float calcularMedia(float n1, float n2, float n3){
    return(n1+ n2 + n3)/ 3;
    
}