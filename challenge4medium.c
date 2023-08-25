#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int dizi[5]={10,20,30,40,50};
int i,toplam=0;
for(i=0;i<5;i++){
	toplam=toplam+dizi[i];
}
printf("dizinin ortalamasi:%d",toplam/5);
	
	return 0;
}
