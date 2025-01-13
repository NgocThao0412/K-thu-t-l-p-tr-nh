#include <stdio.h>
 void Hoanvi(int *num1, int *num2);
    
int main()
{
    int num1, num2;
    
    printf("Nhap 2 số: ");
    scanf("%d%d",&num1, &num2);
    
    printf("Trước khi hoán đổi \n");
    printf("Giá trị của num1= %d\n", num1);
    printf("Giá trị của num1= %d \n \n", num2);
    
    
    Hoanvi(&num1, &num2);
    
    printf("Sau khi hoán đổi trong chính \n");
    printf("Giá trị của num1= %d\n",num1);
    printf("Giá trị của num2= %d \n\n", num2);
    return 0;
}
void Hoanvi( int *num1, int *num2)
 {
     int temp;
     temp= *num1;
     *num1=*num2;
     *num2=temp;
     printf("Sau khi hoán đổi trong hàm hoán đổi \n");
     printf("Giá trị của num1= %d \n", *num1);
     printf("Giá trị của num2= %d \n\n", *num2);
 }
    