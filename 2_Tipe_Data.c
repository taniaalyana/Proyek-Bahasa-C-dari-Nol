#include <stdio.h>
int main(){
    int umur = 19; // tipe data bilangan bulat
    float berat_badan = 54.5; // selain float ada juga double, untuk data desimal diatas 7 angka belakang koma
    char inisial = 'T'; // tipe data karakter tunggal, pake petik 1
    char nama [50] = "Ni Kadek Tania Alyana"; // tipe data string jadi pake petik 2
    char no_hp [20] = "087866989662";//Karena terlalu panjang untuk int dan tidak dihitung secara matematika
    
    printf("Saya berinisial %c\n", inisial);
    printf("Nama lengkap saya %s\n", nama); //menggunakan %s karena string
    printf("Umur saya %d\n", umur);
    printf("Berat badan saya %.1f\n", berat_badan); //menggunakan %.1f untuk 1 angka belakang koma
    printf("Nomor telepon saya %s\n", no_hp);
        
    return 0;
}