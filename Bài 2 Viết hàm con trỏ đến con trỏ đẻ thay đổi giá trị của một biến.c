// Bài 2: Viết chương trình sử dụng con trỏ đến con trỏ để thay đổi giá trị của một biến.
#include <stdio.h>
int main()
{
    int x=5;
    
    //Khai báo con trỏ đến x;
    int *ptr1= &x;
     //Khai báo con trỏ đến con trỏ, trỏ ptr1;
     int **ptr2= &ptr1;
     
     printf("Gia tri cua x truoc khi cap nhat: %d\n", x);
     
     //Cập nhật giá trị của x thông qua con trỏ đến con trỏ
     **ptr2= 20;
     
     printf("Gia tri cua x: %d\n", x);
     return 0;
}
