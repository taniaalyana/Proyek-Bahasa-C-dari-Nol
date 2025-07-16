#include<stdio.h>

int VolumeBalok(int p, int l, int t){
    return p * l * t;
}

int main(){
    int a,b,c,d,e,f,volume1, volume2;
    
    printf("Ayo menghitung volume balok dan bandingkan dengan balok lainnya!\n");
    
    printf("\nBalok Pertama\n");
    printf("Masukkan panjang = ");
    scanf("%d", &a);
    printf("Masukkan lebar = ");
    scanf("%d", &b);
    printf("Masukkan tinggi = ");
    scanf("%d", &c);
    
    volume1= VolumeBalok(a, b, c);
    printf("Volume dari balok tersebut adalah: %d\n", volume1);
    
    
    printf("\nBalok Kedua\n");
    printf("Masukkan panjang = ");
    scanf("%d", &d);
    printf("Masukkan lebar = ");
    scanf("%d", &e);
    printf("Masukkan tinggi = ");
    scanf("%d", &f);
    
    volume2= VolumeBalok(d, e, f);
    printf("Volume dari balok tersebut adalah: %d\n", volume2);
    
    
    if(volume1>volume2){
        printf("\nVolume balok pertama lebih besar dari volume balok 2");
    }else if(volume1<volume2){
        printf("\nVolume balok pertama lebih kecil dari volume balok 2");
    }else{
        printf("\nVolume kedua balok sama");
    }
             /* Operator perbandingan ada banyak
                 == (sama dengan)
                 != (tidak sama dengan)
                 > dan <
                 >= dan <=
             */
    return 0;
}
    