#include <stdio.h>
#include <stdlib.h>

//    a)Dizinin boyutunu ve elemanlarýný kullanýcýdan isteyiniz.



int main() {
    int h, boyutt;
    printf("Olusturmak istediginiz dizinin boyutunu giriniz: ");
    scanf("%d", &boyutt);

    int *bllk = (int*) malloc(boyutt * sizeof(int)); //bellekte dizi olustur

    for (h=0; h<boyutt; h++) {  // dizinin boyutu kadar 
        printf("%d. elemani giriniz: ", h+1); //kullanýcýdan elemanlari girmesi icin bilgilendirme
        scanf("%d", &bllk[h]); // kullanýcýdan elemanlarý al
    }

    printf("Olusurdugunuz dizi elemanlari: "); //yönlendirme
    for (h=0; h<boyutt; h++) {
        printf("%d ", bllk[h]); // dizi elemanlarýný ekrana yazdýr
    }

     free(bllk); //bellekten ayril

    return 0;
}
