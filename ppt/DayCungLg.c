#include<stdio.h>
#include<math.h>
int hesomangsin[10000];
int hesomangcos[10000];
int bac;
float a, b;
float f(float x);
float x(float a, float b);
int i =0;
int main(){
    printf("Nhap vao bac cua phuong trinh: ");
    scanf("%d", &bac);
    printf("Nhap vao he so cho tung so mu: ");
    for(int i = 0 ;i<=bac;i++){
        printf("\nsin(x)^%d: ",i);
        scanf("%d",&hesomangsin[i]);
        printf("\ncos(x)^%d: ",i);
        scanf("%d",&hesomangcos[i]);
    }
    printf("Ham so vua nhap la: ");
    for(int i = 0; i<=bac;i++){
        if(i<bac){
            printf("%d*sin(x)^%d +%d*cos(x)^%d+ ",hesomangsin[i],i, hesomangcos[i],i);
        }
        else if(i==bac){
            printf("%d*sin(x)^%d +%d*cos(x)^%d ",hesomangsin[i],i, hesomangcos[i],i);
        }
    }
    printf("\nNhap vao 2 khoang phan ly: ");
    scanf("%f %f", &a, &b);
    float saisoin;
    printf("\nNhap vao sai so bat ki: ");
    scanf("%f",&saisoin);
    float saiso =999999;
    int fx =-1;
    float lastX;
    while(saiso>saisoin&&fx!=0){
        float xn= x(a,b);
        if(f(xn)*f(a)<0){
            b =xn;
        }
        else{
            a = xn;
        }
        saiso = b-a;
        lastX = xn;
        fx=(int)(fabs(f(xn))*10000);
    }
    printf("Ket qua phuong trinh la %f", lastX);
}
float x(float a, float b){
    return((a*f(b)-b*f(a))/(f(b)-f(a)));
}
float f(float x){
    float kq =0;
    for(int i =0;i<=bac;i++){
        kq = kq+powf(sin(x),i)*hesomangsin[i]+powf(cos(x),i)*hesomangcos[i];
    }
    return kq;
}