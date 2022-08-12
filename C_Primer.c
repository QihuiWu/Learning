#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	char ch;
//
//	printf("Please enter a upper letter:");
//	scanf("%c", &ch);
//
//	int length = ch - 'A';
//	//循环次数；
//	printf("The pyramid of %c is:\n", ch);
//	for (i = 0; i <= length; i++)
//	{
//		char t = 'A' - 1;
//		for (j = 0; j < length - i; j++)
//		{
//			printf(" ");
//		}
//		//上面是左侧空格数；
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c", ++t);
//		}
//		//上面是打印递增字母；
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", --t);
//		}
//		//上面是打印递减字母
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, i2, i3;
//	int min, max;
//	printf("Please enter the min and max numble:");
//	scanf("%d %d", &min, &max);
//	for (i = min; i <= max; i++)
//	{
//		i2 = i * i;
//		i3 = i * i *i;
//		printf("%d %d %d\n", i, i2, i3);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	int i;
//	char arr[20];
//	scanf("%s", arr);
//	int len = strlen(arr) - 1;
//	for (i = len; i >= 0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//float Eight(float a, float b);
//
//int main(void)
//{
//	float m, n, ret;
//	printf("Please enter two numbers:");
//	scanf("%f %f", &m, &n);
//	ret = Eight(m, n);
//	printf("%f", ret);
//
//	return 0;
//}
//
//float Eight(float a, float b)
//{
//	return (a - b) / (a * b);
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int lower, upper, i;
//	printf("Enter lower and upper integer limits: ");
//	scanf("%d %d", &lower, &upper);
//	while (lower < upper)
//	{
//		int sum = 0;
//		for (i = lower; i <= upper; i++)
//		{
//			sum += i *i;
//		}
//		printf("The sums of the squares from %d to %d is %d\n", lower*lower, upper*upper, sum);
//		printf("Enter next set of limits: ");
//		scanf("%d %d", &lower, &upper);
//	}
//	printf("Done\n");
//
//	return 0;
//}
// cypher1.c -- 更改输入，空格不变
//#include <stdio.h>
//#define SPACE ' '
//int main(void)
//{
//	char ch;
//
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//
//	return 0;
//}
// cypher2.c -- 替换输入的字母，非字母字符保持不变
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//	}
//	putchar(ch);
//
//	return 0;
//}
// divisors.c -- 使用嵌套if语句显示一个数的约数
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	unsigned long num;
//	unsigned long div;
//	bool isPrime;
//
//	printf("Please enter an integer for analysis; ");
//	printf("Enter q to quit.\n");
//	while (scanf("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = true; (div * div) <= num; div++)
//		{
//			if (num %div == 0)
//			{
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu and %lu.\n",
//					num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n",
//					num, div);
//				isPrime = false;
//			}
//		}
//		if (isPrime)
//			printf("%lu is prime.\n", num);
//		printf("Please enter another integer for analysis; ");
//		printf("Enter q to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
// chcount,c -- 使用逻辑与运算符
//#include <stdio.h>
//#define PERIOD '.'
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non-quote characters.\n", charcount);
//
//	return 0;
//}
// wordcnt.c -- 统计字符数、单词数、行数
//#include <stdio.h>
//#include <ctype.h>
//#include <stdbool.h>
//#define STOP '|'
//int main(void)
//{
//	char c;
//	char prev;
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;
//	bool inword = false;
//
//	printf("Enter text to be analyzed (| to terminate):\n");
//	prev = '\n';
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;
//		if (c == '\n')
//			n_lines++;
//		if (!isspace(c) && !inword)
//		{
//			inword = true;
//			n_words++;
//		}
//		if (isspace(c) && inword)
//			inword = false;
//		prev = c;
//	}
//
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld, words = %d, lines = %d, ",
//		n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//
//	return 0;
//}
///* paint.c -- 使用条件运算符号 */
//#include <stdio.h>
//#define COVERAGE 350
//int main(void)
//{
//	int sq_feet;
//	int cans;
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans,
//			cans == 1 ? "can" : "cans");
//	}
//
//	return 0;
//}
///* skippart.c -- 使用continue跳过部分循环 */
//#include <stdio.h>
//
//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//
//	printf("Enter the first score (q to quit): ");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score <MIN || score > MAX)
//		{
//			printf("%0.1f is an invalid value. Try again: ", score);
//			continue;
//		}
//		printf("Accepting %0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit): ");
//	}
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.1f.\n", n, total / n);
//		printf("Low = %0.1f, high = %0.1f\n", min, max);
//	}
//	else
//		printf("No valid scores were entered.\n");
//
//	return 0;
//}
/* break.c -- 使用break 退出循环 */
#include <stdio.h>
int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("Length = %0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("Width = %0.2f:\n", width);
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done,\n");

	return 0;
}