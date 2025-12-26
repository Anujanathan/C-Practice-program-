#include <stdio.h>

int main()
{
    int i, num, a = 0;

    scanf("%d", &num);   

    for (i = num; i != 0; i = i / 10)  
    {
        a++;   
    }

    printf("%d", a);

}
