#include <stdio.h>

int main()
{
    int n;
    int i=0;
    int p=0;
    int imp=0;
    
    printf("dame un numero:");
    scanf("%d", &n);
    
    while (i<n)
    {
        if (i%2==0)
        {
            p= i;
        }
        else 
        {
            imp= i;
        }
        
        i=i+1;
    }
    
    printf("el ultimo numero par es: %d\n", p);
    printf("el ultimo numero impar es: %d\n", imp);
    
    return 0;
}
