#include <stdio.h>
int main()
{
    int a,b,c;
    char x[4];
    scanf("%d %d %d",&a,&b,&c);
    scanf("%s",x);

    int A=0,B=0,C=0;
    if(a<b)
    {
        if(b<c)
        {
            A = a;
        }
        else if(b>c)
        {
            C = b;
        }
        else
        {
            B = c;
        }
    }
    printf("%d %d %d",x);
    return 0;
}
