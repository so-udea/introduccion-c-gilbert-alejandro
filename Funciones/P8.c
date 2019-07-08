#include<stdlib.h>
#include<stdio.h>
#include<time.h> 

int lanzar()
{
    int num;
    num=rand()%2; //num es 0 si num es par o  si es impar.   
    return num;
}

void Salida(int n){

    int result,cont_C=0,cont_T=0;
    int i;
    for (i=0;i<n;i++){
        result=lanzar();
        
        if (result==1){
            cont_T++;
            printf("T");
        }
        else if(result==0){
            
            cont_C++;
            printf("C");
        }
    }
   printf(", #de caras = %d, # de sellos = %d.\n",cont_C,cont_T);
}

int main()
{
    srand(time(NULL));
    int n,continuar;
    printf("Vamos a lanzar una moneda\n");
    do 
    {
    printf("\nIngrese el número de lanzamientos que desea hacer: ");
    scanf("%d",&n);
    Salida(n); 
    printf("\nSi desea intentarlo de nuevo ingrese 1, otro valor para terminar: ");
    scanf("%d",&continuar);
    
    }while(continuar==1);
    
    return 0;
}