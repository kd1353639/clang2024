#include<stdio.h>
main()
{
	char data1[80], data2[80];
	int i;

	printf("•¶Žš—ñ‚P‚ð“ü—Í:");
	scanf("%s", &data1);

	printf("•¶Žš—ñ‚Q‚ð“ü—Í:");
	scanf("%s", &data2);

	printf("moji1=%s\tmoji2=%s", &data1[0], &data2[0]);
	printf("\n“ü‚ê‘Ö‚¦‚é‚Æ\n");

	printf("moji1=%s\tmoji2=%s", &data2[0], &data1[0]);
}