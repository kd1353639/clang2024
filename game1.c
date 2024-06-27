#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{	
	int i, j, k;
	
	srand(time(0));
	rand();
	i = rand() % 100 + 1;
	printf("”“–‚ÄƒQ[ƒ€\n");
	printf("1`100‚Ü‚Å‚Ì”‚ğ‚æ‚è­‚È‚¢‰ñ”‚Å“–‚Ä‚æ‚¤\n\n");
	k = 0;
	while (1) {
		printf("”(1`100)‚ğ“ü—Í:");
		scanf("%d", &j);
		k++;
		if (j < i) {
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n", j);
		}
		else {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n", j);
		}
		if (j == i) {
			printf("“–‚½‚èI %d ‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n", k);
			break;
		}
	}
	
}