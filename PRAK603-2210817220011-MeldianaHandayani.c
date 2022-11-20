#include <stdio.h>
int main(){
    int b1,b2,i,isi,hasil;
    scanf("%d %d",& b1,&b2);
    int num1[b1],num2[b2];
if(b1==b2){
    for(i=0;i<b1; i++ ){
        scanf("%d",&isi);
        num1[i]= isi;
    }
    for(i=0;i<b2; i++ ){
        scanf("%d",&isi);
        num2[i]= isi;
    }
    for(i=0;i<b1; i++ ){
        hasil=num1[i]*num2[i];
        printf("%d ", hasil);
    }
    }
    else{
        printf("Jumlah Tidak Sama ");

    }}
    