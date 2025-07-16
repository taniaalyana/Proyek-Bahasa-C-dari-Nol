#include<stdio.h>
int main(){
    int a, b;
    char x;
    printf("Ayo Menjumlahkan Dua Bilangan\n");
    do{
        printf("Masukan angka pertama = ");
        scanf("%d", &a);
        printf("Masukan angka kedua = ");
        scanf("%d", &b);
        printf("Hasil = %d\n", a+b);
        printf("Apakah ingin menghitung lagi? (y/n) = ");
        scanf(" %c", &x); // harus isi spasi sebelum %c biar bisa kebaca input sebelumnya
    }
    while(x == 'y' || x == 'Y'); //lakukan "do" jika jawabannya y/Y btw ini pakai logika OR 
        printf("Terima Kasih");
        
        return 0;
}
/*Do While adalah perulangan yang dijalankan dulu sekali, 
baru kemudian dicek kondisinya. 
Artinya, kode di dalam do akan selalu dijalankan minimal 1 kali, 
meskipun kondisinya salah*/