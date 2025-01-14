#include <stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *ptr=a; // Trỏ đến phần tử đầu tiên của mảng
    int size=sizeof(a)/sizeof(a[0]);
    printf("Cac phan tu cua mang thong qua con tro la:\n");
    for(int i=0;i<size;i++)
    {
        printf("Phan tu %d: %d\n",i,*(ptr+i));
        // Sử dụng phép toán tử cộng trên con trỏ
        
    }
    printf("\nThao tac so hoc tren con trp:\n");
    printf("Gia tri ban dau cua ptr: %p\n", ptr);
    printf("\nSau ptr--:\n");
    printf("Gia tri cua ptr:%p\n",ptr);
    printf("Gia tri cua ptr:%d\n",*ptr);
    // Khoảng cách giữa hai con trỏ
    int* endPtr=&a[size-1];// Trỏ đến phần tử cuối cùng của mảng
    printf("\nKhoang cach giua ptr va endPtr: %ld phan tu\n",endPtr -ptr);
    return 0;
}
