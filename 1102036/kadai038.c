#include<stdio.h>
main()
{
	char a;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("•ÏŠ·Œ‹‰Ê‚Í:%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í:%c", a - 0x20);
		}
		else {
			printf("•ÏŠ·Œ‹‰Ê‚Í:%c",a);
		}
	}
}