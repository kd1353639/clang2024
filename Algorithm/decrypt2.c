#include<stdio.h>
main()
{
	char s[80];
	int i,j;
	
	printf("文字列を入力して下さい＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &j);
		s[i] = s[i] - j;
	}printf("復号化済み文字列は、%s", &s[0]);
}