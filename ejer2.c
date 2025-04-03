
#include <stdio.h>

int main()
{ 
    int res=0;
    int cont =0;
    int n;
    
    printf("dame un numero:");
    scanf("%d", &n);
    
    do
    {
        printf("dame un numero:");
        scanf("%d", &n);
        res= res+ n;
        cont=cont + 1;
        
    }
    while (n<=10 && res>100);
    
    if (n>=10)
        {
            printf("el programa terminó porque se han introducido más de 10 numeros");
        }
        else 
        {
            printf("el programa terminó porque la suma de los numeros es mayor a 100");
        }
    
    return 0;
}
