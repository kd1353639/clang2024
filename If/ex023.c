#include<stdio.h>
main()
{
	int s,m,h;
	
	printf("秒数を入力:\n");
	scanf("%d",&s);
	
	if (s <= 5000) { //マイナスは入力されないものとする。
		h = s / 3600;
		m = (s % 3600) / 60;
		s = s % 60;
		printf("%d時間%d分%d秒です",h,m,s);
	}
	else {
		printf("エラー:秒数は5000以下で入力してください\n");
	}
}