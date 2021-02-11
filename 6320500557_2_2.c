#include <stdio.h>
int main()
{
    int pro;
    int min;
    float total;
    scanf("%c",&pro);
    scanf("%d",&min);

    if(pro == 'A')
    {
        total = min % 200;
        printf("%.2f",total);
    }

}
