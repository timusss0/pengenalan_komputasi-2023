#include <stdio.h>

int b;

int main() {
    printf("Masukan sembarang nilai bilangan bulat B: ");
    scanf("%d",&b);
    fflush(stdin); //fflush untuk membersihkan bufer
    printf("\n Nilai B = %d" , b);
    printf("\n");
    return 0;
}
