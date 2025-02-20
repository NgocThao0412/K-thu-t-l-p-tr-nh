#include <stdio.h>
#define MAX_SIZE 100
int main ()
{
    char m[MAX_SIZE], n[MAX_SIZE];
    char *str1= m;
    char *str2=n;
    
    printf("Nhap chuoi bat ky: ");
    gets(m);
    
    while(*(str2++)= *(str1++));
    
    printf("Chuoi 1 la = %s\n ", m);
    printf("Chuoi 2 la = %s\n ", n);
     
    return 0;
}