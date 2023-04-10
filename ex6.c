#include<stdio.h>

int fatorial(int a), combinacao(int a, int b);

int main(){
    int num_linhas,pascal[100],vetpascal=0;
    printf("Digite o número de linhas:");
    scanf("%d",&num_linhas);
    for(int i=0, j=0;i<=num_linhas;i++){
        for(int k=0;k<=i;k++,j++){
            pascal[j]=combinacao(i,k);
        }
    }
    for(int linha_atual =1; linha_atual<=num_linhas;linha_atual++){
        for(int i =0;i<num_linhas-linha_atual;i++){
           printf("\t");
        }
        for(int i=0; i<linha_atual;i++){
            printf("%d",pascal[vetpascal]);
            vetpascal++;
            if (linha_atual-i != 1){
                printf("\t\t");
            }
        }
        printf("\n");
    }
}

int fatorial(int a){
    int total =1;
    for (int i = 1;i<=a;i++){
        total =total*i;
    }
    return total;
}
int combinacao(int a,int b){
    int total = fatorial(a) / (fatorial(b)*fatorial(a-b));
    return total;
}