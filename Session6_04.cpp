#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, x1, x2, delta;
	
	printf("Nhap so a:\n ");
	scanf("%f", &a);
	printf("Nhap so b:\n ");
	scanf("%f", &b);
	printf("Nhap so c:\n ");
	scanf("%f", &c);
	
    delta = b * b - 4 * a * c;
		
	if (delta>0){
		x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet x1=%.2f x2=%.2f", x1,x2);
	}
	else if (delta==0){
		x1 = -b / (2 * a);
		printf("Phuong trinh co nghiem kep x=%.2f",x1);
	}
	else{
		printf("Phuong trinh vo ngiem");
	}
	return 0;
}
