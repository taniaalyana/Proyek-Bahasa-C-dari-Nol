#include<stdio.h>
#define MAX 5

void InputMatrix(int matrix[MAX][MAX], int rows, int cols){
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Masukkan elemen %d x %d: ", rows, cols);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void PrintMatrix(int matrix[MAX][MAX], int rows, int cols){
    printf("Tampilan Matriks:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void TambahMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void KurangMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}
void KaliMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int rows2, int cols2) {
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int rows1, cols1, rows2, cols2;
    int pilihan;
    char lanjut;

    do {
        printf("\n=== MENU OPERASI MATRIKS ===\n");
        printf("1. Penjumlahan Matriks\n");
        printf("2. Pengurangan Matriks\n");
        printf("3. Perkalian Matriks\n");
        printf("4. Keluar\n");
        printf("Pilih operasi (1-4): ");
        scanf("%d", &pilihan);

        if (pilihan == 4) break;

        printf("Ukuran matriks A (baris kolom): ");
        scanf("%d %d", &rows1, &cols1);

        printf("Ukuran matriks B (baris kolom): ");
        scanf("%d %d", &rows2, &cols2);

        if ((pilihan == 1 || pilihan == 2) && (rows1 != rows2 || cols1 != cols2)) {
            printf("Untuk penjumlahan/pengurangan, ukuran matriks harus sama!\n");
            continue;
        }
        if (pilihan == 3 && cols1 != rows2) {
            printf("Untuk perkalian, kolom matriks A harus sama dengan baris matriks B!\n");
            continue;
        }

        printf("\nInput Matriks A:\n");
        InputMatrix(matrix1, rows1, cols1);

        printf("\nInput Matriks B:\n");
        InputMatrix(matrix2, rows2, cols2);

        switch(pilihan) {
            case 1:
                TambahMatrix(matrix1, matrix2, result, rows1, cols1);
                PrintMatrix(result, rows1, cols1);
                break;
            case 2:
                KurangMatrix(matrix1, matrix2, result, rows1, cols1);
                PrintMatrix(result, rows1, cols1);
                break;
            case 3:
                KaliMatrix(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
                PrintMatrix(result, rows1, cols2);
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }

        printf("\nUlangi program? (y/n): ");
        scanf(" %c", &lanjut); // spasi sebelum %c agar menangkap enter
    } while (lanjut == 'y' || lanjut == 'Y');

    printf("Program selesai.\n");
    return 0;
}

