#include<stdio.h>

int main(){
	int number[5];
	int sosole=0;
	int sosochan=0;
	
	printf("Nhap vao 5 so nguyen:\n");
	
	for(int a=1;a<6;a++){
		printf("Nhap so thu %d:",a);
		scanf("%d",&number[a]);
	}
	for(int a=1;a<6;a++){
		if(number[a]%2==0){
			sosochan++;
		}else{
			sosole++;
		}
	}
	printf("So so le la: %d\n",sosole);
	printf("So so chan la:%d",sosochan);
	return 0;
}
