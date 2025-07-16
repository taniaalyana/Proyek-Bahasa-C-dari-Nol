#include<stdio.h>
int main(){
    int nilai[3][4];
    char nama[3][20];
    int total[3];
    float rata_rata[3]; //wajib float soalnya hasil desimal
    
    printf("Hitung Total dan Rata-Rata Nilai\n");
    
    for(int i=0 ; i<3 ; i++){
        printf("Nama siswa ke-%d = ", i+1);
        scanf("%s", nama[i]); //ga perlu pake &nama
        }
    
    for(int i = 0; i < 3; i++) {
        printf("Masukkan 4 nilai untuk %s = \n", nama[i]);
        for(int j = 0; j < 4; j++) {
            printf("  Nilai ke-%d = ", j + 1);
            scanf("%d", &nilai[i][j]);
            }
        }
    
    for(int i = 0; i < 3; i++) {
        total[i]=0; //biar ga kehitung terus jadi harus di 0 in lagi
        for(int j = 0; j < 4; j++) {
            total[i] += nilai[i][j];
            }
        rata_rata[i] = total[i]/4.0;
        printf("\nTotal nilai untuk %s = %d\n", nama[i], total[i]);
        printf("Rata-rata nilai untuk %s = %.2f\n", nama[i], rata_rata[i]);
        }
    
    printf("\nBerikut Tampilan dalam Tabel\n");
    printf("Nama\tTotal\tRata-rata\n");
    printf("----\t-----\t----------\n");
    
    for(int i = 0; i < 3; i++) {
            printf("%s\t%d\t%.2f\n",nama[i],total[i],rata_rata[i]); 
    }
    
    return 0;
}