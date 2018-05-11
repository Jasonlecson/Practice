#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c,p,s,s2;
	printf("Input a,b,c\n");
	scanf("%a %a %a",&a,&b,&c);
	p = (a+b+c)/2;
	s2 = p*(p-a)*(p-b)*(p-c);
	s = sqrt(s2);
	printf("A is %f,\nB is %f,\nC is %f,\nP is %f,\nS^2 is %f,\nS is %f\n",a,b,c,p,s2,s);
	return 0;
}
