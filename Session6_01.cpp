#include<stdio.h>

int main(){
	int number[5];
	int sum;
	
	printf("Nhap vao 5  so nguyen:\n");
	for(int i=0; i<5; i++){
		printf("Nhap so thu %d:",i+1);
		scanf("%d",&number[i]);
	} 
	for(int i=0; i<5; i++){
		if(number[i]%2!=0){
		sum += number[i];
	    }
	}
	printf("Tong cac so le la: %d",sum);
	return 0;
}
