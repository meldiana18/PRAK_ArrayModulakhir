#include <stdio.h>
int main(void){
int m1[10][10], m2[10][10], hasil[10][10];
int a,b,x,y,jumlah=0;
scanf("%i", &y);
printf("Matrik A\n");
for (a=0; a<y; a++){
    for (b=0; b<y; b++){
        scanf("%i", &m1[a][b]);
    }}
printf("Matriks B\n");
for (a=0; a<y; a++){
    for (b=0; b<y; b++){
        scanf("%i", &m2[a][b]);
    }}
for (a=0; a<y; a++){
    for (b=0; b<y; b++){
        for(x=0; x<y; x++){
            jumlah= jumlah + m1[a][x] * m2[x][b];}
            hasil[a][b]= jumlah;
            jumlah=0;}}
            printf("Matriks AXB\n");
            for (a=0; a<y; a++){
                for (b=0; b<y; b++){
                    printf(" %i ", hasil[a][b]);}
                    printf("\n");
            }
}