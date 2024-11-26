#include<stdio.h>

int main(){
	int year;
	int month;
	
	printf("Nhap nam :");
	scanf("%d", &year);
	printf("Nhap thang 1-12:");
	scanf("%d", &month);
	if(year<0){
		printf("So nam nhap khong hop le");
		return 1;
	}
	if(month<1 || month>12){
		printf("So thang nhap khong hop le");
		return 1;
	}
	switch(month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			    printf("Co 31 ngay");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
			    printf("Co 30 ngay");
				break;
			case 2:
				if(year%4==0 && year%100!=0 || year%400==0 && year%100!=0){
				     printf("Co 29 ngay");
				}else{
					printf("Co 28 ngay");
				}
				break;	
			default:
			    printf("Thang nhap khong hop le");			
		}
	return 0;
}
