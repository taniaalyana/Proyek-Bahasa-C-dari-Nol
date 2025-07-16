#include <stdio.h>
int main(){
    int umur;
    float berat_badan;
    char inisial;
    char nama[50];
    
    printf("Silahkan isi data diri!");
    printf("\nInisial Panggilan = ");
    scanf("%c", &inisial);
    printf("Nama = ");
    scanf("%s", nama); //scanf("%s", nama); cuma untuk 1 kata, klo mau kalimat harus fgets (ga perlu pake &, soalnya char lebih dri 1) (belajar fgets nanti)
    printf("Umur = ");
    scanf("%d", &umur);
    printf("Berat Badan = ");
    scanf("%f", &berat_badan);
    
    printf("\nBaik, berikut data diri Anda\n");
    printf("Inisial Anda %c\n", inisial);
    printf("Nama Anda %s\n", nama);
    printf("Umur Anda %d\n", umur);
    printf("Berat badan Anda %.1f\n", berat_badan);
    
    return 0;
    
}