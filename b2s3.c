// kullanıcıdan üç adet tamsayı isteyen ve bu sayıları çarpıp ortalamsını alan kod.

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	printf("Uc adet sayi giriniz: \n" );
	scanf("%d %d %d", &a, &b, &c);
	
	int sonuc = a * b * c ;
	
	printf("Sonucumuz: %d\n", sonuc);
	
	
	return 0;
}
