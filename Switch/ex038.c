#include<stdio.h>
main()
{
	int s,s1;
	printf("���������:");
	scanf("%d", &s);
	s1 = s / 10;
	
	switch (s1) {
	case 1: printf("10�_��ł�\n");
		break;
	case 2: printf("20�_��ł�\n");
		break;
	case 3: printf("30�_��ł�\n");
		break;
	case 4: printf("40�_��ł�\n");
		break;
	default: printf("�G���[\n");
	}
}