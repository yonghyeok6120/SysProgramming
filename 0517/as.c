#include <stdio.h>
int is_upper_case(char target_char);
char reverse_case(char targer_char);

int main()
{
	char input_char;

	do {
		printf("문자 입력 : "); scanf("%c", &input_char);
		printf("%c의 %s문자는 %c입니다\n", input_char, is_upper_case(input_char) == 1 ? "소":"대",reverse_case(input_char));
		getchar();
	} while(input_char != '0');
}

char reverse_case(char target_char)
{
 if(is_upper_case(target_char)==1)
 {
  return target_char - 'A' + 'a';
 }
 else
 {
  return target_char - 'a' + 'A';
 }
}
int is_upper_case(char target_char)
{
 return target_char >= 'A' && target_char <= 'Z' ? 1:0;
}
