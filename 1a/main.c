#include <stdio.h>
#include <stdlib.h>

//    a)Dizinin boyutunu ve elemanlarını kullanıcıdan isteyiniz.



int main() {
    int h, boyutt;
    printf("Olusturmak istediginiz dizinin boyutunu giriniz: ");
    scanf("%d", &boyutt);

    int *bllk = (int*) malloc(boyutt * sizeof(int)); //bellekte dizi olustur

    for (h=0; h<boyutt; h++) {  // dizinin boyutu kadar 
        printf("%d. elemani giriniz: ", h+1); //kullanıcıdan elemanlari girmesi icin bilgilendirme
        scanf("%d", &bllk[h]); // kullanıcıdan elemanları al
    }

    printf("Olusurdugunuz dizi elemanlari: "); //yönlendirme
    for (h=0; h<boyutt; h++) {
        printf("%d ", bllk[h]); // dizi elemanlarını ekrana yazdır
    }

     free(bllk); //bellekten ayril

    return 0;
}
