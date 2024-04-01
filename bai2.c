#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int count = countPerfectSquares(n);
    printf("So luong so chinh phuong nho hon %d la: %d\n", n, count);

    printf("Danh sach cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (isPerfectSquare(i))
        {
            printf("%d ", i);
        }
    }
    
    int isPerfectSquare(int n)
    {
    int sqrtN = (int)sqrt(n);
    return sqrtN * sqrtN == n;
     }
     
     int countPerfectSquares(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (isPerfectSquare(i)) {
            count++;
        }
    }
    return count;
}

    return 0;
}