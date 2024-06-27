#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[20], k[20];
	int i,n;

	srand(time(0));
	rand();
	
	printf("文字列を入力して下さい＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
	}printf("暗号化文字列は、%s", &s[0]);
	
	printf("\n暗号化キーは、");
	
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
}