#include <stdio.h>

int main(){
	int a,b,c;
	printf("moi ban nhap so thu 1: ");
	scanf("%d",&a);
	printf("moi ban nhap so thu 2: ");
	scanf("%d",&b);
	printf("CALCULATOR\n 1. tong 2 so\n 2. hieu 2 so\n 3. tich 2 so\n 4. thuong 2 so\n 5. thoat\n Lua chon cua ban la: ");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("%d + %d = %d", a, b, a+b);
			break;
		case 2:
			printf("%d - %d = %d", a, b,a-b);
			break;
		case 3:
			printf("%d x %d = %d", a, b,a*b);
			break;
		case 4:
			if(b ==0){
				printf("so thu 2 khong the bang k, nhap lai di");
			}
			printf("%d : %d = %f", a, b,a/b);
			break;
		case 5:
			printf("ggwp");
			break;
		default:
			printf("chon sai roi!!! nhap lai di");
			break;
	}
	
	return 0;
}
