#include<stdio.h>
int main(){
    int pilihan,a,b;
    printf("Silahkan Pilih Operasi Aritmatika Sederhana!\n");
    printf(" 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Modulus");
    printf("\nMaukkan pilihan sesuai data (angka saja) =");
    scanf("%d", &pilihan);
    
    switch(pilihan){
        case 1 :
            printf("\nSilahkan masukan angka!\n");
            printf("Silahkan masukan angka pertama = ");
              scanf("%d", &a);
            printf("Silahkan masukan angka kedua = ");
              scanf("%d", &b);
            printf("Hasil = %d", a+b);
            break; // agar berhenti -> ada juga namanya continue, tapi itu untuk looping yang artinya skip ke iterasi berikutnya 
        case 2 :
            printf("\nSilahkan masukan angka!\n");
            printf("Silahkan masukan angka pertama = ");
              scanf("%d", &a);
            printf("Silahkan masukan angka kedua = ");
              scanf("%d", &b);
            printf("Hasil = %d", a-b);
            break;
        case 3 :
            printf("\nSilahkan masukan angka!\n");
            printf("Silahkan masukan angka pertama = ");
              scanf("%d", &a);
            printf("Silahkan masukan angka kedua = ");
              scanf("%d", &b);
            printf("Hasil = %d", a*b);
            break;
        case 4 :
            printf("\nSilahkan masukan angka!\n");
            printf("Silahkan masukan angka pertama = ");
              scanf("%d", &a);
            printf("Silahkan masukan angka kedua = ");
              scanf("%d", &b);
            float hasil = (float) a/b; //ga bisa pake versi simple soalnya hasil desimal
            printf("Hasil = %.2f", hasil);
            break;
        case 5 :
            printf("\nSilahkan masukan angka!\n");
            printf("Silahkan masukan angka pertama = ");
              scanf("%d", &a);
            printf("Silahkan masukan angka kedua = ");
              scanf("%d", &b);
            printf("Hasil = %d", a%b); 
            break;
        default :
            printf("\nPilihan tidak ada!\n");
    }
    return 0;
}