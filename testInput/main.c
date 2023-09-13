#include <stdio.h>

int main() {

//    input scanf
    char huruf2;
    printf("Masukkan sebuah huruf2: ");
    scanf(" %c", &huruf2);
    printf("\nHurufnya adalah = %c", huruf2 );


    char huruf;
    printf("Masukkan sebuah huruf: ");
    huruf = getchar();
    return 0;
}
