    #include <stdio.h>
    int nhapphantu(int x);
    void nhapmang(int i, int j, int a[i][j]);
    void inmang(int m, int n, int a[m][n]);
    void sapxepdong(int m, int n, int a[m][n]);
    void sapxepcot(int m, int n, int a[m][n]);
    int main(void)
    {
        int m, n;
        m = nhapphantu(m);
        n = nhapphantu(n); 
        int a[m][n];
        nhapmang(m, n, a);
        inmang(m, n, &a);
        sapxepdong(m, n, a);
        printf("\n");
        inmang(m, n, &a);
        sapxepcot(m, n, a);
        printf("\n");
        inmang(m, n, &a);
    }
    int nhapphantu(int x)
    {
        
        do {
        printf("nhap so phan tu(hang , cot): ");
        scanf("%d", &x);
        } while (x<2 || x>50);
        return x;
    }
    void nhapmang(int i, int j, int a[i][j])
    {
        for(int m = 0; m < i;m++)
        {
            for(int n = 0; n < j; n++)
            {
                printf("a[%d][%d]: ",m, n);
                scanf("%d", &a[m][n]);
            }
        }
    }
    void inmang(int m, int n, int a[m][n])
    {
        for(int x = 0; x< m ;x++)
        {
            for(int y = 0; y < n; y++)
            {
                printf("a[%d][%d]: %d ",x, y, a[x][y]);
            }
        }
    }
    void sapxepdong(int m, int n, int a[m][n])
    {
        int temp;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m; j++){
            for(int k = j+1; k<m; k++){
                if(a[i][j] > a[i][k]){ 
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    }
    void sapxepcot(int m, int n, int a[m][n])
    {
        int temp;
        for(int i = 0;i<n;i++){
        for(int j = 0; j<m; j++){
            for(int k = j+1; k<m; k++){
                if(a[j][i] > a[k][i]){ 
                    int temp = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = temp;
                }
            }
        }
    }
    }