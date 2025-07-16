#include <stdio.h>
#include <string.h>

int main() {
    char nama[100];
    int panjang = 0; 

    printf("Masukkan nama lengkap: ");
    fgets(nama, sizeof(nama), stdin); //pakai fgets untuk membaca string dengan spasi

    for(int i = 0; nama[i] != '\0'; i++) { 
        if(nama[i] != ' ' && nama[i] != '\n') { // Menghitung jumlah huruf, mengabaikan spasi dan newline
            panjang++; 
        }
    }

    printf("Nama: %s", nama);
    printf("Jumlah huruf: %d\n", panjang);

    return 0;
}
/* 
strlen(s)	    Menghitung panjang string termasuk spasi dan newline
strcpy(a, b)	Menyalin isi b ke a
strcat(a, b)	Menggabungkan b ke akhir a
strcmp(a, b)	Membandingkan a dan b
*/