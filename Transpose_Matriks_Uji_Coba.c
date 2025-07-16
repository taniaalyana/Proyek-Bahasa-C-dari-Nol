#include<stdio.h>
#define MAX 5

void Input(int matrix[MAX][MAX], int rows, int cols){
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++){
            printf("Masukkan elemen %d x %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void Print(int transposed[MAX][MAX], int rows, int cols){
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++){
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}
void Transpose(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}
int main(){
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;
    printf("Masukkan jumlah baris (max 5): ");
    scanf("%d", &rows); 
    printf("Masukkan jumlah kolom (max 5): ");
    scanf("%d", &cols);

    Input(matrix, rows, cols);
    Transpose(matrix, transposed, rows, cols);
    printf("Matriks Transpose:\n");
    Print(transposed, cols, rows);
    return 0;  

}