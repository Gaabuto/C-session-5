#include <stdio.h>

int main(){
	int i;
	printf("moi ban nhap so nguyen duong ngau nhien: ");
	scanf("%d", &i);
	if (i<0){
		printf("ban nhap sai roi !moi ban nhap lai 1 so duong");
	}else{
		printf("tong cua so tu 1 den %d la %d",i,i*(i+1)/2);
	}
	return 0;
}
