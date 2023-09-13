#include <stdio.h>
#include <string.h>

int main() {
//    printf("masukan nama anda: ");
//    scanf("%s", &nama);
//    gets(nama);
//    printf("nama saya adalah %s", nama);
//    printf("\n");


//    biodata
//    int nim;
//    char name[30];
//    char ttl[100];
//    char alamat[50];

//    fflush(stdin);
//    printf("nim anda adalah %d"); gets(nim);
//
//    printf("nama anda adalah %s"); gets(name);
//
//    printf("tempat tanggal lahir anda adalah %s"); gets(ttl);
//
//    printf("alamat anda adalah %s"); gets(alamat);


//    char nim[20], nama[50], ttl[50], alamat[50];
//
//    printf("nim:");
//    gets(nim);
//
//    printf("Nama: ");
//    gets(nama);
//
//    printf("ttl: ");
//    gets(ttl);
//
//    printf("alamat: ");
//    gets(alamat);
//
//
//    printf("nim: %s\n", nim);
//    printf("nama: %s\n", nama);
//    printf("ttl: %s\n", ttl);
//    printf("alamat: %s\n", alamat);
//
//

char nama[50], nama2[50];
    printf("masukan nama anda : ");
    scanf("%s", nama);
    strcpy(nama2,nama);

    printf("nama saya adalah %s");
    puts(nama2);
    printf("\n");


    return 0;
}
