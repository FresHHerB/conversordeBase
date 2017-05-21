#include <stdio.h>
#include <stdlib.h>

void converterBase(){
    
    int * vetor = malloc(sizeof(int) * 100);
    int i,j,n,X;
    int n_aux;
    
    printf("\n");
    printf("\t=================================\n");
    printf("\t|       Conversor de Base       |\n");
    printf("\t=================================\n\n");
    
    printf("\nInforme o numero da base 10 que deseja converter: ");
    scanf("%d", &n);
    n_aux=n;
    
    printf("Informe um numero [1-10] de base que deseja converter o numero %d: ",n);
    scanf("%d", &X);
    
    while(X<1 || X>10){ //nao aceita valores menores que 1 e maiores que 10
        
        printf("NUMERO INVALIDO - Informe um numero [1-10] de base que deseja converter o numero %d: ",n);
        scanf("%d", &X);
        
    }
    if(X==1 || X==10){ //mesmo valor
        
        printf("O numero %d na base 10, convertido para a base %d, eh: %d",n_aux,X,n); //assume que o valor convertido é o mesmo recebido
        
    }
    else{
    
        while(n>=1){
            vetor[i]= (n%X); //vetor recebe o resto da divisao pela base (numero convertido)
            n=n/X; //proximo numero a ser dividido eh o quociente inteiro da divisao
            i++; //acrescenta 1 unidade ao vetor
        }

        printf("O numero %d na base 10, convertido para a base %d, eh: ",n_aux,X);

        for(i=i;i>0;i--){ //condicao para ler vetor de traz pra frente
            printf("%d ", vetor[i-1]);

        }
    }
    
}

int main(int argc, char** argv) {
        
    converterBase();

    return (EXIT_SUCCESS);
}