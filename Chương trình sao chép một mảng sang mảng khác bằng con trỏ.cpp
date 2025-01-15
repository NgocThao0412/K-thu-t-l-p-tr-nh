
#include <stdio.h>
#define Max_size 100
void Mangin(int a[], int size);

int main()
{
	int m_a[Max_size], n_a[Max_size];
	int size,i;
	
	int *m_ptr= m_a;
	int *n_ptr= n_a;
	
	int *end_ptr;
	
	printf("Kich thuoc cua mang: ");
	scanf("%d", &size);
	printf("Nhap phan tu cua mang: ");
	for (i=0; i< size; i++)
	{
	    scanf("%d",(m_a +i));
	}
	end_ptr= &m_a[size -1];
	
	printf("\nMang nguon truoc khi sao chep: ");
	Mangin(m_a, size);
	
	printf("Mang dich truoc khi sao chep: ");
	Mangin(n_a, size);
	
	
	while(m_ptr <= end_ptr)
	{
	    *n_ptr= *m_ptr;
	    
	    m_ptr++;
	    n_ptr ++;
	}
	printf("\n\nMang nguon sau khi sao chep: ");
	Mangin(m_a, size);
	
	printf("\nMang dich sau khi sao chep: ");
	Mangin(n_a, size);
	return 0;
}
    void Mangin(int *a, int size)
    {
        
        for(int i=0;i< size; i++)
        {
            printf("%d", *(a+i));
        }
    }