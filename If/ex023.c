#include<stdio.h>
main()
{
	int s,m,h;
	
	printf("�b�������:\n");
	scanf("%d",&s);
	
	if (s <= 5000) { //�}�C�i�X�͓��͂���Ȃ����̂Ƃ���B
		h = s / 3600;
		m = (s % 3600) / 60;
		s = s % 60;
		printf("%d����%d��%d�b�ł�",h,m,s);
	}
	else {
		printf("�G���[:�b����5000�ȉ��œ��͂��Ă�������\n");
	}
}