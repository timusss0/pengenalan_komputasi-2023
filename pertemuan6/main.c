#include <stdio.h>

//int main() {

//   goto label 1
//int q=1;
//    loop:
//    printf("1 %d\n",q);
//    ++q;
//    if(q>3){
//        printf("\n\n");
//        q=1;
////        ulang1:
////        printf("2 %d\n",q);
////        ++q;
////        if(q>3){
////
////            printf("\n\n");
////            return 0;
////        } else {
////            goto ulang1;
////        }
//    } else{
//        goto loop;
//    }

//
//    for (int e = 0; e < 10; ++e) {
//        printf("halo\n");
//    }
//
//int i=1;
//    ulang:
//    if(i%2==0 && i%3==0){
//        printf("%d", i);
//        if(i<=10){
//            printf("\n");
//            return 0;
//        }else{
//            i++;
//            goto ulang;
//        }
//    }else{
//       i++;
//        goto ulang;
//    })

    int i=1;

    int main(){
        ulang1:
        printf("1   %d\n",i);
        i=i+1;
        if(i>3)
        {
            printf("\n");
            i=1;
            ulang2:
//            printf("2   %d\n",i);
//            i=i+1;

//            if(i>3)
//            {
//                printf("\n\n");
//                return 0;
//
//            }
//            else
//            {
//                goto ulang2;
//            }
        }else
        {
            goto ulang1;
        }

        return 0;




}
