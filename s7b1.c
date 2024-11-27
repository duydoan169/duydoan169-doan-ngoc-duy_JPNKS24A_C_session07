#include<stdio.h>
int main(){
    int array[5]={0,1,2,3,4};
    for(int i=0; i<=4; i++){
    printf("%d\n", array[i]);
    }
    printf("do dai cua mang la: %d", (sizeof(array)/sizeof(int)));
    return 0;
}