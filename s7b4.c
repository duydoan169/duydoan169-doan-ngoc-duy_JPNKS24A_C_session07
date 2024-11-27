#include<stdio.h>
int main(){
    int size;
    do{
        printf("nhap do dai mang: ");
        scanf("%d", &size);
    }while(size<=0);
    int array[size];
    for(int i=0; i <= (size-1); i++){
    printf("nhap phan tu thu %d: ", i+1);
    scanf("%d", &array[i]);
    }
    for(int j=0; j <= (size-1); j++){
    printf("%d ", array[j]);
    }
    return 0;
}