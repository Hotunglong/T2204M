#include<stdio.h>
int main(){
	
	int n;
	printf("Nhap n=");
	scanf("%d", &n);
	//s la tong cua day so n
	int s=0;
	for(int i=1; i<=n;i++){
		s = s + i;
	}
	printf("S=%d",s);
	return 0;
}
