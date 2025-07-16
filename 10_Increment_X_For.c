#include<stdio.h>
int main(){
    int x;
    printf("Ayo Belajar Perkalian\n");
    printf("Mau belajar perkalian berapa?\n");
    printf("Perkalian ");
    scanf("%d", &x);
    printf("Tabel Perkalian %d\n", x);
    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", x, i, x*i);
    }
    printf("Terima Kasih");
    return 0;
}
/*For adalah perulangan yang digunakan ketika jumlah pengulangan sudah pasti.
Semua bagian (mulai, kondisi, dan perubahan) ditulis di satu baris.
for (inisialisasi; kondisi; update) {
    inisialisasi: biasanya digunakan untuk membuat variabel penghitung, misalnya int i = 0
    kondisi: dicek sebelum setiap pengulangan, jika salah, loop berhenti
    update: bagian yang dijalankan setiap akhir putaran, misalnya i++ */
