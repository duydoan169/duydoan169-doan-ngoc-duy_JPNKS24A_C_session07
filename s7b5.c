#include<stdio.h>
int main(){
    int array[5]={0,1,2,3,4}, lonNhat=array[0], nhoNhat=array[0];
    for(int i=0; i<=4; i++){
    if(lonNhat<=array[i]){
        lonNhat=array[i];
    }
    if(nhoNhat>=array[i]){
        nhoNhat=array[i];
    }
    }
    printf("gia tri lon nhat trong mang la: %d\n", lonNhat);
    printf("gia tri nho nhat trong mang la: %d", nhoNhat);
    return 0;
}