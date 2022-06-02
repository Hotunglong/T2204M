#include<stdio.h>

int main() {
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int ary[n];
	printf("Nhap mang: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &ary[i]);
	}
	int sum = 0, cnt = 0;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0 && ary[i] %2 != 0) {
			sum += ary[i];
			cnt++;
		}
	}
	if(cnt != 0) {
		printf("Trung bình cong cua cac so le o vi tri chan la : %f", (float) sum / cnt);
	} else {
		printf("Khong co so le o vi tri chan");
	}
	return 0;
}
