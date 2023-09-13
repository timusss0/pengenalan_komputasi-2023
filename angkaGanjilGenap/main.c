#include <stdio.h>

int main() {
    int angka;

    printf("masukan sebuah bilangan bulat: ");
    scanf("%d", &angka);

    if(angka % 2 == 0){
        printf("%d anda mendapat angka genap\n", angka);
    }else{
        printf("%d anda mendapat angka genap\n",angka);
    }
    return 0;
}
