#include<stdio.h>
main()
{
	int s,s1;
	printf("整数を入力:");
	scanf("%d", &s);
	s1 = s / 10;
	
	switch (s1) {
	case 1: printf("10点台です\n");
		break;
	case 2: printf("20点台です\n");
		break;
	case 3: printf("30点台です\n");
		break;
	case 4: printf("40点台です\n");
		break;
	default: printf("エラー\n");
	}
}