#include<stdio.h>
main()
{
	int s, m, h;

	printf("�b�������:\n");
	scanf("%d", &s);

	if (0 <= s)
	{

		if (s <= 5000) {
			h = s / 3600;
			m = (s % 3600) / 60;
			s = s % 60;
			printf("%d����%d��%d�b�ł�", h, m, s);
		}
		else {
			printf("�G���[:�b����5000�ȉ��œ��͂��Ă�������\n");
		}
	}
	else {
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
}