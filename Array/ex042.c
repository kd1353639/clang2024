#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i;
	
	printf("1文字ずつ表示\n");
	i = 0;
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s\n", &data[0]);
	//%sで書くと指定した添字のところから文字列を表示する
}