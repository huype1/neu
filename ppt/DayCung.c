#include<stdio.h>
#include<stdbool.h>
#include<math.h>
float hesomang[100000];
int bac =0;
float x(float a, float b);
float f(float x);
int main(){
	printf("Nhap bac cua ham so: ");
	scanf("%d", &bac);
	printf("Nhap he so cua ham so: \n");
	for(int i = 0; i <= bac; i++){
		printf("x ^ %d = ", i);
		scanf("%f", &hesomang[i]);
	}
	printf("Ham so da nhap: \n");
	for(int i = 0; i <= bac; i++){
		if(i == bac){
			printf("%fx^%d\n", hesomang[i], i);
		}
		else printf("%fx^%d + ", hesomang[i], i);
	}
	float a, b;
	printf("Nhap khoang phan li (a, b): ");
	scanf("%f %f", &a, &b);
	float saisoin;
	printf("nhap vao sai so: ");
    scanf("%f", &saisoin);
	float saiso= 99999;
	int fx =-1;
	float X;
	while(saiso>saisoin&&fx!=0){
		float xm = x(a,b);
		if(f(xm)*f(a)<0){
			b=xm;
		}
		else if(f(xm)*f(b)<0){
			a=xm;
		}
		else{
		    break;
		}
		saiso= b-a;
		X = xm;
		fx=(int)(fabs(f(xm))*10000);
	}
	printf("\nket qua phuong trinh la: %f\n",X);
}
float x(float a, float b){
	return (a*f(b)-b*f(a))/(f(b)-f(a));
}
float f(float x){
    float kq = 0;
    for(int i =0;i<=bac;i++){
        kq= kq+powf(x,i)*hesomang[i];
    }
    return kq;
}