#include <stdio.h>
#include <stdlib.h>

void converterBaseX(){
    
    int * vetor = malloc(sizeof(int) * 100);
    int i,j,n,X;
    int n_aux;
    
    printf("\n");
    printf("\t=================================\n");
    printf("\t|      Conversor de Base X      |\n");
    printf("\t=================================\n\n");
    printf("\nInforme o numero da base 10 que deseja converter: ");
    scanf("%d", &n);
    n_aux=n;
    printf("Informe um numero [1-9] de base que deseja converter o numero %d: ",n);
    scanf("%d", &X);
    
    while(X<1 || X>10){
        
        printf("NUMERO INVALIDO - Informe um numero [1-9] de base que deseja converter o numero %d: ",n);
        scanf("%d", &X);
        
    }
    if(X==1 || X==10){
        
        printf("O numero %d na base 10, convertido para a base %d, eh: %d",n_aux,X,n);
        
    }
    else{
    
        while(n>=1){
            vetor[i]= (n%X);
            n=n/X;
            i++;
        }

        printf("O numero %d na base 10, convertido para a base %d, eh: ",n_aux,X);

        for(j=0;i>0;i--){
            printf("%d", vetor[i-1]);

        }
    }
    
}

int main(int argc, char** argv) {
        
    converterBaseX();


    return (EXIT_SUCCESS);
}

