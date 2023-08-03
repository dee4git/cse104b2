#include<stdio.h>
int main ()
{
    int j;
    printf("%d \n", j );
    for(;;)
    {
        printf("hello\n");
        j++; // 1
        if(j>=10)
        {
            printf("Ending value of j = %d\n", j);
            break;
        }
    }
}
