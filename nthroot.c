#include<stdio.h>
#include<math.h>
int main()
{
    int b,c,num,n1,q=0;
    double x,p,a,n;
    scanf("%d", &n1);
    n= n1*1.0;
    scanf("%d", &num);
    a=((num*1.0)/2.0);
    b=n-1.0;
    c=0;
    x = 1.0/(n*1.0);
    while (q<=10000000)
    {
            
            a = ((x)*(((b*1.0)*a) + ((num*1.0)/pow(b,a))));
            q++;
    }
    printf("%lf is %d th root of %d", a,n1,num);
    return 0;
}
