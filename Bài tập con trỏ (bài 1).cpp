#include<stdio.h>
//Viết chương trình khai báo một biến, một con trỏ trỏ đến biến đó, và một con trỏ đến con trỏ. In ra địa chỉ và giá trị tại mỗi cấp trỏ.
 //Yêu cầu:
//Khai báo một biến int x = 10.
//Khai báo một con trỏ int *ptr1 trỏ đến x.
//Khai báo một con trỏ đến con trỏ int **ptr2 trỏ đến ptr1.
//In ra:Giá trị của x.
//Địa chỉ của x, ptr1, ptr2.
//Giá trị tại các con trỏ.
int main()
{
    int x=10;
    int *ptr1= &x;
    int **ptr2= &ptr1;
    
    printf("Gia tri cua x la: %d\n", x);
    printf("Dia chi cua x: %d\n", &x);
    printf("Dia chi cua ptr1: %d\n", ptr1);
    printf("Dia chi cua ptr2: %d\n", ptr2);
    
    printf("Gia tri cua ptr1: %d\n", *ptr1);
    printf("Gia tri cua ptr2: %d\n", *ptr2);
    return 0;
}
