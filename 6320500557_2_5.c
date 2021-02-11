#include <stdio.h>
int main()
{
    int day,month,x,dd;
    scanf("%d %d",&day,&month);
    switch(month)
    {
        case 1:x=31;
            break;
        case 2:x=28;
            break;
        case 3:x=31;
            break;
        case 4:x=30;
            break;
        case 5:x=31;
            break;
        case 6:x=30;
            break;
        case 7:x=31;
            break;
        case 8:x=31;
            break;
        case 9:x=30;
            break;
        case 10:x=31;
            break;
        case 11:x=30;
            break;
        case 12:x=31;
            break;
    }
    dd = (x+day) % 7;
    if(dd == 0)
        printf("7");
    else
        printf("%d",dd);
    return 0;
}
