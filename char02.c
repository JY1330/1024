#include <stdio.h>
int main()
{
	char ch;
	// 'A' = 65.... 'z' = 122
	printf("���ĺ� �Է�:");
	scanf("%c", &ch); 
	
	if(ch >= 'a' && ch <= 'z')
	{
		ch-=32;
	}
	
	printf("����� �Է��� ������ �빮�ڴ� %c�Դϴ�.\n", ch);

	return 0;
}
