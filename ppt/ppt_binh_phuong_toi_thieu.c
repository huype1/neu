#include <stdio.h> 
#include <math.h>
/*
Khai báo các nguyên mẫu cho hàm được sử dụng bao gồm: 
nhập số phần tử, nhập giá trị mỗi phần tử, tính x mũ 2, tính x mũ 3, tính x mũ 4, x*y, x^2*y,
tính tổng của chúng, tính định thức để giải hệ bằng cramer, hiện thị kết quả phương trình.
*/
int nhapn();
void nhapxvay(float x[], float y[], int n);
void changestoXandY(float x[], float y[], float x2[], float x3[], float x4[], float xy[], float x2y[], int n);
float sigma(float arr[], int n);
float solvedet(float a[][3]);
void hienthiphuongtrinh(float a, float b, float c);
float saiso(float a, float b, float c, float x[], float y[], float xmu2[], int n);
//hàm main
void main()
{
    //Nhập dữ liệu vào
    int n = nhapn();
    float x[n],y[n], x2[n], x3[n],x4[n],xy[n],x2y[n];
    float a, b, c;
    //sử dụng các mảng để lưu trữ và chuẩn bị dữ liệu
    nhapxvay(x, y, n);
    changestoXandY(x, y, x2, x3, x4, xy, x2y, n);
    //tạo các mảng theo các định thức của cramer
    //điểu kiện của cramer là nếu det = 0 thì sẽ không thể giải được
    float det[3][3] = {n, sigma(x, n),  sigma(x2, n), sigma(x, n), sigma(x2, n), sigma(x3, n), sigma(x2, n), sigma(x3, n), sigma(x4, n)};
    float deta[3][3] = {sigma(y, n), sigma(x, n), sigma(x2, n), sigma(xy, n), sigma(x2, n), sigma(x3, n), sigma(x2y, n), sigma(x3, n), sigma(x4, n)};
    float detb[3][3] = {n, sigma(y, n),  sigma(x2, n), sigma(x, n), sigma(xy, n), sigma(x3, n), sigma(x2, n), sigma(x2y, n), sigma(x4, n)};
    float detc[3][3] = {n, sigma(x, n),  sigma(y, n), sigma(x, n), sigma(x2, n), sigma(xy, n), sigma(x2, n), sigma(x3, n), sigma(x2y, n)};
    float d = solvedet(det);
    if(d == 0.0) //Kiểm tra điều kiện cramer
    {
        printf("Math error.\n");
    }
    else //thỏa mãn đk
    {
        a = solvedet(deta)/d;
        b = solvedet(detb)/d;
        c = solvedet(detc)/d;
        //tìm ra a b c và hiển thị phương trình
        hienthiphuongtrinh(a, b, c);
        saiso(a, b, c, x, y, x2, n);
    }
    printf("End.\n");
}
//nhập số lượng phần tử khoảng [3, 1000]
int nhapn()
{
    int n;
    do
    {
        printf("Nhập số lượng phần tử: ");
        scanf("%d", &n);
    } while (n < 3 || n > 1000);
    return n;
}
//nhập giá trị từng phần tử
void nhapxvay(float x[], float y[], int n)
{
    for(int i = 0; i<n ;i++)
    {
        printf("Nhập x%d: ", i);
        scanf("%f", &x[i]);
        printf("Nhập y%d: ", i);
        scanf("%f", &y[i]);
    }
}
//tính x mũ 2 tính x mũ 3 tính x mũ 4 tính x*y tính x^2*y
void changestoXandY(float x[], float y[], float x2[], float x3[], float x4[], float xy[], float x2y[], int n)
{
    for (int i = 0; i<n; i++)
    {
        x2[i] = pow(x[i], 2);
        x3[i] = pow(x[i], 3);
        x4[i] = pow(x[i], 4);
        xy[i] = x[i]*y[i];
        x2y[i] = x[i]*x[i]*y[i];
    }
}

//tính tổng
float sigma(float arr[], int n)
{
    float sum = 0;
    for(int i = 0;i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
//hàm tính định thức chung
float solvedet(float a[][3])
{
    float det = (a[0][0]*(a[1][1])*a[2][2])+(a[0][1]*a[1][2]*a[2][0])+(a[0][2]*a[1][0]*a[2][1])-(a[0][2]*a[1][1]*a[2][0])-(a[0][0]*a[1][2]*a[2][1])-(a[0][1]*a[1][0]*a[2][2]);
    return det;
}
//hiển thị kết quả
void hienthiphuongtrinh(float a, float b, float c)
{
    printf("Kết quả của phương trình là: \n");
    printf("y = %f + %fx + %fx^2\n", a, b, c);
}
//tính tổng sai số theo công thức epsilon(i) = y(i) - a - b*x(i) -c*x^2(i)
float saiso(float a, float b, float c, float x[], float y[], float xmu2[], int n)
{
    float epsilon_n = 0;
    for(int i = 0; i<n; i++)
    {
        epsilon_n += y[i]-a-(b*x[i])-(c*xmu2[i]);
    }
    printf("Tong sai so = %f\n", fabs(epsilon_n));
}