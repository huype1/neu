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
	float solanlap;
	printf("Nhap vao so lan lap");
    scanf("%f", &solanlap);
	int fx =-1;
	float lastX;
    float count =0;
	float saiso =0;
	while(solanlap>count&&fx!=0){
		float xn = x(a,b);
		saiso = b-a;
		if(f(xn)*f(a)<0){
			b=xn;
		}
		else if(f(xn)*f(b)<0){
			a=xn;
		}
		else{
		    break;
		}
		
		lastX = xn;
		fx=(int)(fabs(f(xn))*10000);
        count++;
	}
	printf("\n ket qua phuong trinh la: %f",lastX);
	printf("\nSai so cua phuong trinh tren la: %f",saiso);
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