#include<stdio.h>
#include<string.h>



int hrg_brg, q, byr, tot_byr, kmbl;
char kd_brg[5], nm_brg[30] ,jwb[2];

int main()
{
    printf("PEMBELIAN\n");
    printf("-------------------------------\n");
    printf("Kode Barang  : "); gets(kd_brg);
//    strlwr(kd_brg); kd_brg"lb013;
    if((strcmp(kd_brg,"LB013") == 0) || (strcmp(kd_brg,"lb013") == 0))
    {
        strcpy(nm_brg,"Layangan Besar");

        hrg_brg = 17550;
    }

    printf("Nama Barang  : %s\n", nm_brg);
    printf("Harga Barang : Rp %d\n", hrg_brg);
    printf("Kuantitas    : "); scanf("%d", &q);
    printf("-------------------------------\n");
    tot_byr = hrg_brg * q;
    printf("Total Bayar  : Rp %d\n", tot_byr);
    printf("Bayar        : Rp "); scanf("%d", &byr);
    printf("-------------------------------\n");
    kmbl = byr - tot_byr;
    printf("Kembali      : Rp %d", kmbl);
    printf("\n\n");
    printf("Terima Kasih Sudah Berbelanja\n\n");
    return 0;


}