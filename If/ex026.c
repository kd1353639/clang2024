#include<stdio.h>
main()
{
	int m;

	printf("ŒŽ‚ð“ü—Í:");
	scanf("%d", &m);

	if (m == 2) {
		printf("28“ú‚Ü‚Å\n");
	}
	else {
		if (m == 4||m ==6||m ==9||m ==11){
			printf("30“ú‚Ü‚Å\n");
		}
		else {
			printf("31“ú‚Ü‚Å\n");	
		}
	}
}