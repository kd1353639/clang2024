#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	i = 0;
	printf("文字列:");
	while (data[i] != '\0') {
		i++;
	}
	printf("%s", &data[0]);
	printf("\n文字数は%d文字\n", i);
}