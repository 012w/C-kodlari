// kullanıcının adını, soyadını, öğrenci numarasını ve ortalmasını alan, ardından bu girdileri ekranda çıktı veren kod. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    char isim[50]; 
    char soyisim[50]; 
    long long int ogrnum;
    float ortalama;

    printf("Adinizi Giriniz: \n"); 
    scanf("%s", isim);

    printf("Soyisminizi giriniz: \n");
    scanf("%s", soyisim);

    printf("Ogrenci Num. Giriniz: \n");
    scanf("%d", &ogrnum);

    printf("Ortalamanizi giriniz: \n");
    scanf("%f", &ortalama);

    printf("\nAdi: %s\n", isim);
    printf("Soyisim: %s\n", soyisim);
    printf("Ogrenci Numarasi: %d\n", ogrnum);
    printf("Ogrenci Ortalamasi: %.2f\n", ortalama);

    return 0;
}
