#include<stdio.h>
int main(){
    int array[5], soChan=0;
    for(int i=0; i<=4; i++){
    printf("nhap phan tu thu %d: ", i+1);
    scanf("%d", &array[i]);
    }
    for(int j=0; j<=4; j++){
    if(array[j]%2==0){
        printf("%d ", array[j]);
            soChan++;}
    }
    if(soChan==0)
        printf("khong co so chan");

    return 0;
}