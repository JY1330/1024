#include <stdio.h>
int main()
{
	char ch;
	
	printf("대문자 입력:");
	scanf("%c", &ch);
	
	//대문자 'A' ASCII 값 65 'B'의 ASCII 값 66... 
	//소문자 'a' ASCII 값 97 두 문자의 gap은 32
	
	printf("%c의 소문자는 %c입니다.\n",ch, ch+32); 
	
	return 0;
}
