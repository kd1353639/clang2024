#include<stdio.h>
main()
{
	FILE* fp;
	char str[256], ch, equip[100];
	int i, lv, hp;
	fp = fopen("file02.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s", str);
		printf("lv:%d hep:%d ����:%s\n", lv, hp, equip);

	}
	fclose(fp);
}