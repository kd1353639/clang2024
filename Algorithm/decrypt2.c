#include<stdio.h>
main()
{
	char s[80];
	int i,j;
	
	printf("���������͂��ĉ�������");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &j);
		s[i] = s[i] - j;
	}printf("�������ςݕ�����́A%s", &s[0]);
}