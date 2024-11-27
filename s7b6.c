#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    for(int j=0; j<=4; j++){
    if(array[j]%2!=0)
        array[j]+=2;      
    if(array[j]%2==0)
        array[j]+=3;
    }
    for(int i=0; i <= 4; i++){
    printf("%d ", array[i]);
    }

    return 0;
}