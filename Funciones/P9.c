#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int a, b, res, opcion;
    do{
      srand(time(NULL));
      a = rand() % 10;
      b = rand() % 10;
      printf("¿Cúanto es %d veces %d?\n", a, b);
      scanf("%d", &res);
      if(res == a*b){
        printf("Muy bien!\n");
      }else{
        do{
          printf("No. Por favor intenta nuevamente, ");
          printf("¿Cúanto es %d veces %d?\n", a, b);
          scanf("%d", &res);
        }while(res != a*b);
        printf("Muy bien!\n");
      }
      printf("Quieres continuar multiplicando? 1.Si | 2.No \n");
      scanf("%d", &res);
    }while(res == 1);
}