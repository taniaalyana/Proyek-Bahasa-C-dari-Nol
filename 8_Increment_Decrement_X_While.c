#include <stdio.h>
int main() {
    int a;
    printf("Kamu kangen aku ga?\nSeberapa kangen?\nMasukkan angka seberapa kangen kamu ke aku = ");
    scanf("%d", &a);
    if (a > 0){
        while (a > 0){
            printf("Aku kangen kamu\n");
            a--; // decrement agar tidak infinite loop
            }
    }else{
        printf("Kamu ga kangen ak ya? Ok fine");
        }
    return 0;
}
/*Alur kerjanya:
1. Cek dulu kondisi.
2. Jika kondisi benar, jalankan kode di dalam kurung kurawal {}.
3. Setelah selesai, cek lagi kondisi.
4. Jika masih benar, ulang lagi.
5. Jika kondisi salah, keluar dari perulangan.

Increment
Bayangkan ++a itu “Naik dulu baru dipakai”,
sedangkan a++ itu “Dipakai dulu baru naik”.

Decrement
Bayangkan --a itu “Turun dulu baru dipakai”,
sedangkan a-- itu “Dipakai dulu baru turun”.
*/