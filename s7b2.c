#include<stdio.h>
int main(){
    int array[5];
    for(int i=0; i<=4; i++){
    printf("nhap phan tu thu %d: ", i+1);
    scanf("%d", &array[i]);
    }
    for(int j=0; j<=4; j++){
    printf("%d ", array[j]);
    }

    return 0;
}