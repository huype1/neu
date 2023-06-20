#include <stdio.h> 
#include <math.h> //sử dụng thư viện <math.h> để tính mũ.
/*
Khai báo các hàm được sử dụng bao gồm: 
nhập số phần tử, nhập giá trị mỗi phần tử, tính x mũ 2, tính x mũ 3, tính x mũ 4, x*y, x^2*y,
tính tổng của chúng, sử dụng gauss để tính hệ phương trình, hiện thị kết quả phương trình.
*/
int nhapn();
void nhapxvay(float x[], float y[], int n);
void changestoxandy(float x[], float y[], float x2[], float x3[], float x4[], float xy[], float x2y[], int n);
float sigma(float arr[], int n);
void hienthiphuongtrinh(float result[]);
float saiso(float result[], float x[], float y[], float x2[], int n);
void main()
{
    //Nhập dữ liệu vào
    int n = nhapn();
    float x[n],y[n], x2[n], x3[n],x4[n],xy[n],x2y[n];
    int i, j, k;
    float temp, a, b, c;
    //sử dụng các mảng để lưu trữ và chuẩn bị dữ liệu
    nhapxvay(x, y, n);
    changestoxandy(x, y, x2, x3, x4, xy, x2y, n);
    //tính tổng x, y, x^2, x^3, x^4, x*y, x^2*y và cho chúng vào 2 mảng một là hệ pt 2 là kq
    float A[][4] = { n, sigma(x, n), sigma(x2, n) ,sigma(y, n), sigma(x, n), sigma(x2, n), sigma(x3, n), sigma(xy, n), sigma(x2, n), sigma(x3, n), sigma(x4, n), sigma(x2y, n) };
    
    int matsize = 3;
    float result[3];
    //phương pháp khử gauss
    for(int i = 0; i < matsize-1; i++)
    {
        for(int k = i+1; k < matsize; k++)
        {
            float r = A[k][i]/-(A[i][i]);
            
            for(int j = 0; j<= matsize; j++)
            {
                A[k][j] = A[k][j]+r*A[i][j];
            }
            
        }
    }
    
    result[2] = A[2][3]/ A[2][2];
    result[1] = (A[1][3]-(A[1][2]*result[2])) / A[1][1];
    result[0] = (A[0][3]-(A[0][2]*result[2])-(A[0][1]*result[1])) / A[0][0];
    
    hienthiphuongtrinh(result);
    
    saiso(result, x, y, x2, n);
    printf("End.\n");
}
//các hàm
//nhập số lượng phần tử
int nhapn()
{
    int n;
    do
    {
        printf("Nhập số lượng phần tử: ");
        scanf("%d", &n);
    } while (n < 3 || n > 10000);
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
//tính bình phương x tính x mũ 3 tính x mũ 4 tính x*y tính x^2*y
void changestoxandy(float x[], float y[], float x2[], float x3[], float x4[], float xy[], float x2y[], int n)
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

//hiển thị kết quả
void hienthiphuongtrinh(float result[])
{
    printf("Kết quả của phương trình là: \n");
    printf("y = %.6f + %.6fx + %.6fx^2\n", result[0], result[1], result[2]);
}
//sai số
float saiso(float result[], float x[], float y[], float x2[], int n)
{
    float epsilon_n = 0;
    for(int i = 0; i<n; i++)
    {
        epsilon_n += y[i]-result[0]-(result[1]*x[i])-(result[2]*x2[i]);
    }
    printf("Tong sai so = %f\n", fabs(epsilon_n));
}