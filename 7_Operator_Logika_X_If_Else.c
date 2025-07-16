#include <stdio.h>

int main() {
    int umur;
    int punyaKTP; // 1 = true, 0 = false

    printf("Masukkan umur = ");
    scanf("%d", &umur);
    printf("Apakah memiliki KTP (1= punya, 0= tidak) = ");
    scanf("%d", &punyaKTP);
    if (umur >= 17 && punyaKTP==1) {
        printf("Kamu bisa ikut pemilu!\n");
    } else {
        printf("Kamu belum memenuhi syarat.\n");
    }
/* Operator Logika
AND (&&) = true apabila kedua kondisi benar
OR (||) = true apabila salah satu kondisi benar
NOT (!) = true apabila kondisi false */
    return 0;
}