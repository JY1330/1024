#include <stdio.h>
int main()
{
	char ch;
	
	printf("�빮�� �Է�:");
	scanf("%c", &ch);
	
	//�빮�� 'A' ASCII �� 65 'B'�� ASCII �� 66... 
	//�ҹ��� 'a' ASCII �� 97 �� ������ gap�� 32
	
	printf("%c�� �ҹ��ڴ� %c�Դϴ�.\n",ch, ch+32); 
	
	return 0;
}
