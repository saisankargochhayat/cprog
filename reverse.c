#include<stdio.h>
int reverse(int);

int main()
{ int n,c;
scanf("%d",&n);
int a[n];int i=1;

for(; i<=n;i++)
{scanf("%d",&a[i]);
}
i=1;
for(;i<=n;i++)
{c=reverse(a[i]);}

}
int reverse(int r)
{int s=1;
while(r!=0)
{ s=s*10;
s=s+r%10;
r=r/10;
}
if(s%2==0)
printf("EVEN\n");
else
printf("ODD\n");
return 0;
}

