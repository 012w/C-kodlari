// kullanıcıdan 5 adet ondalıklı sayı alıp ardından ortalmasını alan kod.

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float a, b, c, d, e;
	printf("bes adet ondalikli sayi giriniz: \n" );
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	
	float toplam = a + b + c + d + e;
	
	float ortalama = toplam / 5;
	
	printf("Sonucumuz: %f\n", ortalama);
	
	return 0;
}
