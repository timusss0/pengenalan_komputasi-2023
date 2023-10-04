#include <stdio.h>

int main() {

//   goto label 1
//int i=1;
//    ulang:
//    printf("1 %d\n",i);
//    ++i;
//    if(i>3){
//        printf("\n\n");
//        i=1;
//        ulang1:
//        printf("2 %d\n",i);
//        ++i;
//        if(i>3){
//
//            printf("\n\n");
//            return 0;
//        } else {
//            goto ulang1;
//        }
//    } else{
//        goto ulang;
//    }


//    for (int i = 0; i < 10; ++i) {
//        printf("halo\n");
//    }

int i=1;
    ulang:
    if(i%2==0 && i%3==0){
        printf("%d", i);
        if(i<=10){
            printf("\n");
            return 0;
        }else{
            i++;
            goto ulang;
        }
    }else{
        i++;
        goto ulang;
    }

    return 0;


//    FOR DAN WHILE
}
