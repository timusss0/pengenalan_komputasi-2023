#include <stdio.h>
#include <string.h>

int main() {
//    memahami tipe data

//int harga;
//float ips;

//    printf("masukan NIM anda : ");  gets(nim);
//    printf("masukan grade nilai mata kuliah : "); grade = getchar();
//    printf("masukan harga masuk kuliah kamu?"),scanf("%d",&harga);
//    fflush(stdin);
//    printf("masukan Indeks predikat sementara"), scanf("%f", &ips);
//
//    printf("\n\n");
//
//    printf("NIM : %c\n", nim);
//    printf("Grade : %c\n" ,grade);
//    printf("Harga : %d\n", harga);
//    printf("Harga : %f\n", ips);

//    printf("belajar bahasa c");
//    getchar();

//    int kucing;
//    printf("kucing saya : %d ", kucing); getchar();
//
//    char hari;
//    puts("Halo, selamat datang di Prodi Informatika");
//    ada enternya
//    scanf("%s", hari);
//    hari = getchar();
//    puts("jangan lupa untuk napas");
//    puts untuk string yang ingin di enter tanpa harus pake \n

//    char hari[20];
//
//
//    printf("masukan hari ini :");
//    scanf("%c", &hari);
//
//    printf("ini hari? : %c\n" , hari);
//

//
//char nama[20],rumah[20],kampus[20],prodi[10];
//int usia;

//printf("");
//    printf("saha nama ny bro?"); scanf("%s", &nama);
//    printf("Berapa usia mu?"); scanf("%i", &usia);
//    printf("dimana rumahnya dek?"); scanf("%s", &rumah);
//    printf("spill kampus ?"); scanf("%s", &kampus);
//    printf("spill prodi dek?");scanf("%s", &prodi);
//
//    printf("Hallo %s, senang berteman \n"
//           "denganmu. Usiamu sekarang sudah %i tahun ya? Makin keren \n"
//           "aja kamu, apalagi sekarang kamu kuliah di %s di \n"
//           "program studi %s. Rumah kamu di <alamat rumah> kan? \n"
//           "Kapan-kapan kita pergia sama-sama ya ke kampus? Aku juga \n"
//           "mahasiswa %s");


//
//int a = 2;
//int b = 5;
//int tmp;
//
//    printf("sebelm di tukar a=%d\n,b=%d\n", a,b);
//
//tmp = a;
//a = b;
//b = tmp;
//
//    printf("setelah di tukar a=%d , b=%d",a,b);
//
//


//    char nama[20];
//    puts("masukan nama anda: ");gets(nama);
//
//    puts(nama);


//    char nama[20],prodi[20];

//    printf("masukan nama mu : ");
//    scanf("%s",&nama);
//
//    printf("masukan prodi mu :");
//    scanf("%s",&prodi);

//char nama[20],prodi[10];

//    char nama[20], prodi[20];
//
//
//    printf("Masukkan nama Anda: ");
//    scanf("%s", nama);
//
//    printf("Masukkan nama program studi Anda: ");
//    scanf("%s", prodi);
//
//
//    printf("Nama saya adalah %s dan saya merupakan mahasiswa prodi %s", nama, prodi);
//
//    int a, b, c, d;
//
//    printf("Masukkan angka A: ");
//    scanf("%d", &a);
//
//    printf("Masukkan angka B: ");
//    scanf("%d", &b);
//
//    printf("Masukkan angka C: ");
//    scanf("%d", &c);
//
//    d = a + b - c;
////
////    printf("%d %d %d %d,",a,b,c,d);
//
//    printf("Nilai A: %d\n", a);
//    printf("Nilai B: %d\n", b);
//    printf("Nilai C: %d\n", c);
//    printf("Hasil D: %d\n", d);
//
//kode barang input
//jenis barang input
//nama barang output
//harga barang output

//int kode_brng,harga_brng;
//char jenis_brng[20],nama_brng[20];
//
//printf("Masukan Kode Barang : ");scanf("%d", &kode_brng);
//
//printf("Masukan jenis barang : "); scanf("%d", &jenis_brng);

//if(kode_brng == 1){
//    if(strcmp(jenis_brng,"A") == 0){
//        strcpy(nama_brng, "Beruang");
//        harga_brng = 35000;
//    }else if(strcmp(jenis_brng,"B") == 0){
//        strcpy(nama_brng,"Kelinci");
//        harga_brng = 25000;
//    }
//}if(kode_brng == 2){
//        if(strcmp(jenis_brng,"A") == 0){
//            strcpy(nama_brng, "Dino");
//            harga_brng = 35000;
//        }else if(strcmp(jenis_brng,"B") == 0){
//            strcpy(nama_brng,"Dora");
//            harga_brng = 25000;
//        }
//}else{
//      strcpy(nama_brng,"nama barang tidak ditemukan");
//      harga_brng = 0;
//}
//
//    printf("nama barang %c", nama_brng);
//    printf("harga barang %d", harga_brng);
//
//    return 0;


//
//float n_rata;
//
//printf("masukan nilai rata rata : "); scanf("%f", &n_rata);
//
//printf("Nilai rata-rata : %.2f", n_rata);

    int kode_barang;
    char jenis_barang;

    printf("Kode Barang  : ");
    scanf("%d", &kode_barang);

    printf("Jenis Barang : ");
    scanf(" %c", &jenis_barang);

    char nama_barang[50];
    int harga_barang;

    if (kode_barang == 1) {
        if (jenis_barang == 'A') {
            strcpy(nama_barang, "Boneka Beruang");
            harga_barang = 35000;
        } else if (jenis_barang == 'B') {
            strcpy(nama_barang, "Boneka Kelinci");
            harga_barang = 25000;
        }
    } else if (kode_barang == 2) {
        if (jenis_barang == 'A') {
            strcpy(nama_barang, "Selimut Dino");
            harga_barang = 100000;
        } else if (jenis_barang == 'B') {
            strcpy(nama_barang, "Selimut Dora");
            harga_barang = 150000;
        }
    } else {
        strcpy(nama_barang, "Barang tidak ditemukan");
        harga_barang = 0;
    }

    printf("Nama Barang  : %s\n", nama_barang);
    printf("Harga Barang : Rp %d\n", harga_barang);


    float IPS;

    printf("Masukkan Indeks Prestasi Semester: ");
    scanf("%f", &IPS);

    switch ((int)(IPS * 100)) {
        case 300 ... 399:
            printf("SKS yang anda dapat ambil adalah 24.\n");
            break;
        case 250 ... 299:
            printf("SKS yang anda dapat ambil adalah 22.\n");
            break;
        case 201 ... 249:
            printf("SKS yang anda dapat ambil adalah 20.\n");
            break;
        case 151 ... 200:
            printf("SKS yang anda dapat ambil adalah 18.\n");
            break;
        case 101 ... 150:
            printf("SKS yang anda dapat ambil adalah 14.\n");
            break;
        default:
            printf("Nilai tidak valid\n");
    }
}