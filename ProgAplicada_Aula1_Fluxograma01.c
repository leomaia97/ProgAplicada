#include <stdio.h>

int main(){

    int i, o=0;
    float valor[10], valor_procura;

    printf("\nEntre com 10 Valores\n");

    for(i=0;i<10;i++){
            printf("\nEntre com o valor: ");
            scanf("%f",&valor[i]);
    }

    printf("\nQual valor vc quer procurar: ");
    scanf("%f",&valor_procura);

    for(i=0;i<10;i++){
            if(valor_procura == valor[i]){
                    printf("%d",i);
                    o=1;
            }
    }

    if(o==0)
        printf("\nBUSCA FALHOU!");

    return 0;
}

