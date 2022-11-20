#include <stdio.h>
#include <stdlib.h>
int main(){
    int A,i,nam;
    scanf("%d", &A);
    int num[A];
    for (int i=0; i<A; i++){
        scanf("%d", &nam);
        num[i]=nam;
    }
    for (int i=0; i<A; i++){
        printf("%d ", num[i]*(i+1));
    }}
