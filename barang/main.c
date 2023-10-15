#include <stdio.h>

int main() {
   int hargaBarang, potongan = 10000, hargaTotal;

    printf("Masukan harga barang : " );
    scanf("%i" , &hargaBarang);

    if(hargaBarang >= 250000){
        hargaTotal = hargaBarang - potongan;
        printf("Selamat anda mendapat potongan %i\n" , potongan);
        printf("Jadi total belanja anda setelah mendapat potongan adalah = %i", hargaTotal );
    }else{
        printf("maaf anda tidak mendpat potongan karena kurang dari 250.000");
    }

    return 0;
}
