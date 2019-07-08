#include <stdio.h>
int invertirValor(int valor);

int main() {

    int valor;
    printf("Ingrese el número a invertir \n");
    scanf("%d",&valor);
    printf("valor de entrada: %d \n", valor);
    printf("valor invertido: %d \n", invertirValor(valor));
    

}

int invertirValor(int valor){

    int res, valorInvertido=0;
//printf ("%d \n", res);
    while(valor>0){
 
        res = valor%10;
        valor=valor/10;
        valorInvertido=valorInvertido*10+res;

    }

    return valorInvertido;
}