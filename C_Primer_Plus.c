#define _CRT_SECURE_NO_WARNINGS 1

//// talkback.c -- 演示与用户交互
//#include <stdio.h>
//#include <string.h>
//#define DENSITY 62.4
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];
//
//	printf("Hi! What's your first name?\n", name);
//	scanf("%s", name);
//	printf("%s, what's your wright in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof name;
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well, %s, your volume is %2.2f cubic feet.\n",
//		name, volume);
//	printf("Also, your first name has %d letter,\n",
//		letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//
//	return 0;
//}
///* praise1.c -- 使用不同类型的字符串 */
//#include <stdio.h>
//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
//	char name[40];
//
//	printf("What's your name? ");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//
//	return 0;
//}
/* praise2.c */
// 如果编译器不识别%zd, 尝试换成%u 或 %lu。
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %u letters occupies %u memory cells.\n",
		strlen(name), sizeof name);
	printf("The phrase of praise has %u letters ",
		strlen(PRAISE));
	printf("and pccupies %u memory cells.\n", sizeof PRAISE);


	return 0;
}