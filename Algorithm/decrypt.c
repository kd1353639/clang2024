#include<stdio.h>
main()
{
	char s[80];
	int i;
	
	printf("文字列を入力して下さい＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}printf("暗号化文字列は、%s", &s[0]);
}