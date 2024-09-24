#include <stdio.h>
int topla(int x){
	if(x==1)
	{ return 1;}
	else
	{ return x+topla(x-1);}
	
	
}

int main(){
	int x;
	printf("Bir sayi giriniz");
	scanf("%d",&x);
	printf("Toplam sonucu = %d",topla(x));
	
	return 0;
}
