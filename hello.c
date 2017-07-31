#include <stdio.h>
void ap(void);
int main(void)
{
int dog;
    ap();
	printf("How many dogs do you have?\n");
	printf("----------\b\b\b\b\b\b\b\b\b\b");
	scanf("%d",&dog);
	printf("So,the price is $200 per dog\n");
	printf("So you have %d dogs! It means you have %d dollars!\n",dog,dog*200);
return 0;
}
void ap(void)
 {
 printf("Hello!\n");
 }
