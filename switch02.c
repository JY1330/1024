#include <stdio.h>
int main()
{
	int score;
	
	printf("점수를 입력하시오:");
	scanf("%d", &score);
	
	switch(score/10)
	{
		case 10:
		case 9:
			printf("당신의 학점은 A입니다.\n");
			break;
		case 8:
			printf("당신의 학점은 B입니다.\n");
			break;
		case 7:
			printf("당신의 학점은 C입니다.\n");
			break;
		case 6:
			printf("당신의 학점은 D입니다.\n");
			break;
		default:
			printf("당신의 학점은 F입니다.\n");
	} 

	return 0;
}
