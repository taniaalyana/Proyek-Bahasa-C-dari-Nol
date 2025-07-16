#include <stdio.h>
int main(){
    int a=2;
        
    printf("Nilai awal a adalah %d\n", a); // nilai a disimpan sebagai 2 
    a += 4;
    printf("Setelah a += 4 adalah %d\n", a); //nilai a disimpan sebagai 6
    a -= 5;
    printf("Setelah a -= 5 adalah %d\n", a); // jadinya 6 - 5 = 1
    a *= 6;
    printf("Setelah a *= 6 adalah %d\n", a); // jadinya 1 x 6 = 6
    /*
        a /= 4;
        printf("Setelah a /= 4 adalah %d\n", a);
        
     hasilnya bakal 1 angka doang, klo pun pakai %f hasilnya 0,000 erorr
     memang pembagian hasil desimal harus beda sistemnya
    */
    a %= 4;
    printf("Setelah a %= 4 adalah %d\n", a); // jadinya 6 mod 4 = 2
    
    return 0;
}