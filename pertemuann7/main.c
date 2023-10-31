#include <stdio.h>

int main() {
    int N;
    int sum = 0; // Inisialisasi variabel penampung jumlah

    // Meminta pengguna memasukkan nilai N
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    // Perulangan for untuk menghitung jumlah bilangan bulat dari 1 hingga N
    for (int i = 1; i <= N; i++) {
        sum += i; // Menambahkan nilai i ke dalam sum
    }

    // Menampilkan hasil jumlah
    printf("Jumlah bilangan bulat dari 1 hingga %d adalah %d\n", N, sum);

    return 0;
}