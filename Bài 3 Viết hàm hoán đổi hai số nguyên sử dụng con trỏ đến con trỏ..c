// Bài3 Viết hàm hoán đổi hai số nguyên sử dụng con trỏ đến con trỏ.
//Viết hàm: void swap(int **a, int **b);
#include <stdio.h>
void swap(int **a, int **b)
{
    int temp= **a;
    **a=**b;
    **b=temp;
}

int main()
{
    int x=10, y=20;
    int *ptr1= &x, *ptr2= &y;
    
    printf("Truoc khi hoan doi: x=%d, y=%d\n",x,y);
    swap(&ptr1,ptr2);
    printf("Sau khi hoan doi: x=%d, y=%d\n",x,y);
     return 0;
}
