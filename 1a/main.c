#include <stdio.h>
#include <stdlib.h>

//    a)Dizinin boyutunu ve elemanlar�n� kullan�c�dan isteyiniz.



int main() {
    int h, boyutt;
    printf("Olusturmak istediginiz dizinin boyutunu giriniz: ");
    scanf("%d", &boyutt);

    int *bllk = (int*) malloc(boyutt * sizeof(int)); //bellekte dizi olustur

    for (h=0; h<boyutt; h++) {  // dizinin boyutu kadar 
        printf("%d. elemani giriniz: ", h+1); //kullan�c�dan elemanlari girmesi icin bilgilendirme
        scanf("%d", &bllk[h]); // kullan�c�dan elemanlar� al
    }

    printf("Olusurdugunuz dizi elemanlari: "); //y�nlendirme
    for (h=0; h<boyutt; h++) {
        printf("%d ", bllk[h]); // dizi elemanlar�n� ekrana yazd�r
    }

     free(bllk); //bellekten ayril

    return 0;
}
