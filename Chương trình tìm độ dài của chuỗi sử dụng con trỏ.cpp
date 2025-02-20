#include <stdio.h>
#define MAX_SIZE 100
int main ()
{
    char a[MAX_SIZE];
    char *str= a;
    int count =0;
    
    printf ("Nhap chuoi bat ky: ");
    gets(a);
    
    while (*(str++) != '\0') count++;
    
    printf("Do dai cua chuoi la '%s'= %d", a,count);
    
    return 0;
}