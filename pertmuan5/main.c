#include <stdio.h>
#include <string.h>

int main() {
    int nilai;
    char grade[5], keterangan[10];

    printf("Masukkan nilai Anda: ");
    scanf("%d", &nilai);

    if (nilai > 100) {
        strcpy(grade ,"A");
        strcpy(keterangan, "Sempurna");
    } else if ((nilai >=95) && (nilai <= 100)) {
        strcpy(grade ,"A-");
        strcpy(keterangan, "Luar biasa");
    } else if ((nilai >=90) && (nilai <= 95)) {
        strcpy(grade ,"B+");
        strcpy(keterangan, "Baik sekali");
    } else if ((nilai >=85) && (nilai <= 90)) {
        strcpy(grade ,"B");
        strcpy(keterangan, "Baik");
    } else if ((nilai >=75) && (nilai <= 85)) {
        strcpy(grade ,"B-");
        strcpy(keterangan, "Cukup");
    } else if ((nilai >=65) && (nilai <= 75)) {
        strcpy(grade ,"C+");
        strcpy(keterangan, "Lumayan");
    } else if ((nilai >=60) && (nilai <= 65)) {
        strcpy(grade ,"C");
        strcpy(keterangan, "Kurang");
    } else if ((nilai >=55) && (nilai <= 60)) {
        strcpy(grade ,"C-");
        strcpy(keterangan, "Kurang sekali");
    } else if ((nilai >=45) && (nilai <= 55)) {
        strcpy(grade ,"D");
        strcpy(keterangan, "Sangat kurang sekali");
    } else {
        printf("Grade: E (Tidak Lulus)\n");
    }

    printf("grade :%s" ,grade);
    printf("\n");
    printf("keterangan: %s", keterangan);

    return 0;
}
