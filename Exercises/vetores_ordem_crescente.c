#include <stdio.h>

int main(void){

    int num[5], i, j, aux;

    for (i=0; i <=4; i++){
        printf("Digite um numero:\n");
        scanf("%d", &num[i]);
    }

    for(j=0; j<=3; j++){
        for(i=0; i<=3; i++){
            if(num[i]>num[i + 1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i + 1] = aux;
            }
        }
    }

    for(i=0; i<=4; i++){
        printf("num[%d] = %d\n", i, num[i]);
    }

    return 0;
}
