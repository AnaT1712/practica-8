#include <stdio.h>
// ejercicio en while

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

//ejercicio en do while

#include <stdio.h>

int main()
{
    int n;
    int i=0;
    int p=0;
    int imp=0;
    
    printf("dame un numero:");
    scanf("%d", &n);
    
    do
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
    while (i<n);
    
    printf("el ultimo numero par es: %d\n", p);
    printf("el ultimo numero impar es: %d\n", imp);
    
    return 0;
}
