#include <stdio.h>
#define MAX_SIZE 100
int main ()
{
    char m[MAX_SIZE], n[MAX_SIZE];
    char *str1= m;
    char *str2=n;
    
    printf("Chuoi 1: ");
    gets(m);
    printf("Chuoi 2: ");
    gets(n);
    
    while(*(++str1));
    
    while(*(str1++) = *(str2++));
    
    printf("Chuoi da noi la = %s", m);
    
    return 0;
}