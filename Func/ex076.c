#include<stdio.h>
void keisan(int x, int y, int* sum, float* ave);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ2‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);
	keisan(a, b, &c, &d);
	printf("‡Œv‚Í %dA•½‹Ï‚Í %.2f", c,d);
}

void keisan(int x, int y,int *sum,float *ave)
{
	*sum = x + y;
	*ave = (x + y) / 2.0;
	return;
}