#include<stdio.h>
int main (){
	
	int n;
	printf ("Nhap n=");
	scanf ("%d", &n);
	int i = 0;
	int max ;
	
	while(i < n){
		if (i % 2 == 0 && i % 3 == 0){
			max = i;
		}
		i++;
	}
	printf ("Max = %d",max);
	return 0;
}
