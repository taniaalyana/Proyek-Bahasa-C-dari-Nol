#include<stdio.h>
int main(){
    int x [5];
    printf("Berapakah Nilai Tertingginya?\n");
    printf("Masukkan 5 Nilai!\n");
        
    for(int i = 0; i < 5; i++){
        printf("Angka ke-%d = ", i+1);
        scanf("%d", &x[i]);
    }
    printf("Angka yang dimasukkan =");
    for(int i = 0; i < 5; i++){
        printf(" %d ", x[i]);
    }
    int max = x[0];
    for(int i = 1; i < 5; i++){ //menggunakan i=1 karena max sudah i=0
        if(x[i]>max){
            max=x[i];
        }
    }
    printf("\nNilai terbesar adalah = %d", max);
    return 0;
}