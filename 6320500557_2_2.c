#include <stdio.h>
int main()
{
    char pro;
    float total=0,min,sum=0;
    scanf("%c",&pro);
    scanf("%f",&min);

    if(pro == 'A')
    {
        sum = min - 200;
        sum = sum*3;
        total = (int)sum + 199;
        printf("%.2f",total+1);
    }
    else
    {
        sum = min - 400;
        sum =sum*2;
        total = (int)sum + 299 ;
        printf("%.2f",total+1);
    }

    return 0;
}
