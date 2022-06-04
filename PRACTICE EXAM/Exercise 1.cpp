#include<stdio.h>
#include<conio.h>

int main(){
	int So;
	printf("Nhap vao so = ");
	scanf("%d", &So);
	if(So < 100 || So > 999){
		printf("\n Khong hop le !");
		getch();
		return 0;
	}else{
		int donvi = So % 10;
		So /= 10;
		int chuc = So % 10;
		int tram = So / 10;
		if(tram == 1){
			printf(" One");
		}else if(tram == 2){
			printf(" Two");
		}else if(tram == 3){
			printf(" Three");
		}else if(tram == 4){
			printf(" Four");
		}else if(tram == 5){
			printf(" Five");
		}else if(tram == 6){
			printf(" Six");
		}else if(tram == 7){
			printf(" Seven");
		}else if(tram == 8){
			printf(" Eight");
		}else if(tram == 9){
			printf(" Nine");
		}if(chuc==0){
			printf(" Zero");
		}else if(chuc==1){
			printf(" One");
		}else if(chuc == 2){
			printf(" Two");
		}else if(chuc == 3){
			printf(" Three");
		}else if(chuc == 4){
			printf(" Four");
		}else if(chuc == 5){
			printf(" Five");
		}else if(chuc == 6){
			printf(" Six");
		}else if(chuc == 7){
			printf(" Seven");
		}else if(chuc == 8){
			printf(" Eight");
		}else if(chuc == 9){
			printf(" Nine");
		}if (donvi==0){
			printf(" Zero");
		}else if(donvi == 1){
			printf(" One");
		}else if(donvi == 2){
			printf(" Two");
		}else if(donvi == 3){
			printf(" Three");
		}else if(donvi == 4){
			printf(" Four");
		}else if(donvi == 5){
			printf(" Five");
		}else if(donvi == 6){
			printf(" Six");
		}else if(donvi == 7){
			printf(" Seven");
		}else if(donvi == 8){
			printf(" Eight");
		}else if(donvi == 9){
			printf(" Nine");
		}
	}
	getch();
	return 0;
}
