#include <stdio.h>

int main(){
	int i,a;
	printf("moi nhap so nguyen tu 1 den 10 ma ban da chon: ");
	scanf("%d",&i);
	if(i<0 || i >10){
		printf("ban da ghi sai so roi !! nhap lai di");
	}
	for (a=1;a<=10;a++) {
		printf("%d x %d = %d\n",i,a,i*a);
	}
	
	return 0;
}
