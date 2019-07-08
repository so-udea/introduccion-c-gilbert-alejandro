#include <stdio.h>
#include <math.h>
double progresionGeometrica(double x, double n);

int main() {
    double x;
    double n;
    printf("Ingrese el valor de x: \n");
    scanf("%lf", &x);
    printf("Ingrese el valor de n: \n");
    scanf("%lf", &n);
    printf("La suma de la progresion geometrica es: %lf \n", progresionGeometrica(x, n));
   
}
    
double progresionGeometrica(double x, double n){
    double r = 0;
    for(int i = 0; i <= n; i++ ){
       r += pow (x, i);
    }
    return r;
}