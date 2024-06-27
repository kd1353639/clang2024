#include<stdio.h>
main()
{
	char s[80];
	int i,j;
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[„", i);
		scanf("%d", &j);
		s[i] = s[i] - j;
	}printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s", &s[0]);
}