#include <stdio.h>
float fa(float);
float  main()
{int l,i=1;float o;
	scanf("%d\n",&l);
	float n[l],r[l];
	for(;i<=l;i++)
	{scanf("%f%f",&n[i],&r[i]);
	}
 	i=1;
 	for(;i<=l;i++)
 	{o=fa(n[i])/(fa(r[i])*fa(n[i]-r[i]));
 	printf("%f",o);
	return 0;
}}


float fa(float x)
{float c,i=1;for( ;i<=x;i++)
{c=c*i;}
return c;
}
