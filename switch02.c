#include <stdio.h>
int main()
{
	int score;
	
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &score);
	
	switch(score/10)
	{
		case 10:
		case 9:
			printf("����� ������ A�Դϴ�.\n");
			break;
		case 8:
			printf("����� ������ B�Դϴ�.\n");
			break;
		case 7:
			printf("����� ������ C�Դϴ�.\n");
			break;
		case 6:
			printf("����� ������ D�Դϴ�.\n");
			break;
		default:
			printf("����� ������ F�Դϴ�.\n");
	} 

	return 0;
}
