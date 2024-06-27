#include<stdio.h>
void reverse(char* p_str1, char* p_str2);
main()
{
	char str[256],a[256];
	printf("•¶š—ñH");
	gets(str);
	reverse(str,a);
	printf("str1: %s\nstr2: %s", str, a);
}

void reverse(char* p_str1, char* p_str2)
{
	int cnt, cnt2;
	for (cnt = 0; *(p_str1 + cnt) != '\0'; cnt++);
	for (cnt--,cnt2 = 0; cnt >= 0; cnt2++, cnt--) {
		*(p_str2+cnt2) = *(p_str1+cnt);
	}
	*(p_str2+cnt2) = '\0';

	return;
}