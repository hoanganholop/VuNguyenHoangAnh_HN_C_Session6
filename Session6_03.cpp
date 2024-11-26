#include<stdio.h>

int main(){
	const int yourpass = 1456;
	int pass;
	
	while(1){
		printf("Moi ban nhap mat khau co 4 chu so:");
		scanf("%d",&pass);
		if(pass == yourpass){
			printf("Mat khau chinh xac");
			break;
		}else{
			printf("Nhap sai mat khau\n");
		}
	}
		return 0;
}
