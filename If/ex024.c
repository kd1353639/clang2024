#include<stdio.h>
main()
{
	char c;

	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z') {
		printf("‘å•¶Žš‚Å‚·\n");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
}