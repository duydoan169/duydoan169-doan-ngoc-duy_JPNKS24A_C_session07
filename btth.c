#include <stdio.h>
int main(){
    int j, i, array[5], tong, trungBinh;
    for(j=0; j<=4; j++){
        printf("nhap phan tu so %d:", j+1);
        scanf("%d", &array[j]);
    }
    for(i = 0; i <= sizeof(array)/sizeof(int); i=i+1){
        tong=tong+array[i];
    }
    trungBinh=tong/(sizeof(array)/sizeof(int));
    printf("tong cac phan tu = %d\n", tong);
    printf("trung binh cac phan tu = %d\n", trungBinh);
    return 0;
}