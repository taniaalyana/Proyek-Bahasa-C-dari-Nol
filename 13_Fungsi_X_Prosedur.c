#include <stdio.h>

// Fungsi untuk menghitung total
int hitungTotal(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

// Fungsi untuk menghitung rata-rata
float hitungRataRata(int total) {
    return total / 3.0;
}

// Fungsi untuk menampilkan hasil
void tampilkanHasil(char nama[], int total, float rata) {
    printf("\n--- Hasil ---\n");
    printf("Nama: %s\n", nama);
    printf("Total Nilai: %d\n", total);
    printf("Rata-rata: %.2f\n", rata);
}

int main() {
    char nama[50];
    int nilai1, nilai2, nilai3, total;
    float rata;

    // Input data
    printf("Masukkan nama siswa: ");
    scanf("%s", nama);

    printf("Masukkan nilai 1: ");
    scanf("%d", &nilai1);
    printf("Masukkan nilai 2: ");
    scanf("%d", &nilai2);
    printf("Masukkan nilai 3: ");
    scanf("%d", &nilai3);

    // Hitung total dan rata-rata
    total = hitungTotal(nilai1, nilai2, nilai3);
    rata = hitungRataRata(total);

    // Tampilkan hasil
    tampilkanHasil(nama, total, rata);

    return 0;
}
