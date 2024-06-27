#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);

	switch (a) {
	case'a':
	case'A':printf("Amerika\nAustralia");
		break;
	case'e':
	case'E':printf("England\n");
		break;
	case'f':
	case'F':printf("France\n");
		break;
	case'j':
	case'J':printf("Japan\n");
		break;
	}
}