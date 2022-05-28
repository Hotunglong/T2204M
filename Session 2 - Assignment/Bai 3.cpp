#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d", &n);
	
	for(;n > 1;n++){
		if(n % 1 == 0 && n % n == 0 && n % 2 != 0){
		printf("N la so nguyen to");
		}else{
			printf("N khong phai la so nguyen to");
		}
		break;
	}
	return 0;
}



