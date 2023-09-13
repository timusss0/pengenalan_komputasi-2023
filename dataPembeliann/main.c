#include <stdio.h>

int main() {
    char kp[2],np[20];
    int harga, quantity, total;

    printf("Data Pembelian \n");
    printf("--------------------\n");

    printf( "Kode Produk: ");
    gets(kp);

    printf("Nama produk");
    gets(np);

    printf( "harga produk: Rp");scanf("%d",&harga);

    printf( "quantity produk");scanf( "%d",&quantity );


    printf(  "Kode produk: %s\n", kp);
    printf( "nama produk: %s\n", np);
    printf("harga produk: %d\n", harga);
    printf(  "quantity: %d\n", quantity);

    total=harga*quantity;

    printf("TOTAL BELANJA : Rp %d", total);

    return 0;
}
