#include <stdio.h>
int main(){
    int array[30][30];
    int A,B,i,j;
    scanf("%d %d", &A,&B);
    for (int i=0; i<A; i++){
        for (int j=0; j<B; j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    for (int i=0; i<A; i++){
        for (int j=0; j<B; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}