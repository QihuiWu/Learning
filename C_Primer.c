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
///* break.c -- 使用break 退出循环 */
//#include <stdio.h>
//int main(void)
//{
//	float length, width;
//
//	printf("Enter the length of the rectangle:\n");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("Length = %0.2f:\n", length);
//		printf("Enter its width:\n");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("Width = %0.2f:\n", width);
//		printf("Area = %0.2f:\n", length * width);
//		printf("Enter the length of the rectangle:\n");
//	}
//	printf("Done,\n");
//
//	return 0;
//}
///* animals.c -- 使用switch语句 */
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch;
//
//	printf("Give me a letter of the alphabet, and I will give ");
//	printf("an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter; type # to end my act.\n");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//			continue;
//		if (islower(ch))
//			switch (ch)
//		{
//			case 'a':
//				printf("argali, a wild sheep of Asia\n");
//				break;
//			case 'b':
//				printf("babirusa, a wild pig of Malay\n");
//				break;
//			case 'c':
//				printf("coati, racoonlike mammal\n");
//				break;
//			case 'd':
//				printf("desman, aquatic, molelike critter\n");
//				break;
//			case 'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case 'f':
//				printf("fisher, brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//		}
//		else
//			printf("I recognize only lowercase letters.\n");
//		while (getchar() != '\n')
//			continue;
//		printf("Please type another letter or a #.\n");
//	}
//	printf("Bye!\n");
//
//	return 0;
//}
//// vowels.c -- 使用多重标签
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//
//	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case 'a':
//		case 'A': a_ct++;
//				  break;
//		case 'e':
//		case 'E': e_ct++;
//			      break;
//		case 'i':
//		case 'I': i_ct++;
//				  break;
//		case 'o':
//		case 'O': o_ct++;
//				  break;
//		case 'u':
//		case 'U': u_ct++;
//				  break;
//		default: break;
//
//		}
//	}
//	printf("number of vowels: A E I O U\n");
//	printf("                %4d %4d %4d %4d %4d\n",
//		a_ct, e_ct, i_ct, o_ct, u_ct);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch != '\n')
//		{
//			printf("Step 1\n");
//			if (ch != 'c')
//			{
//				if (ch == 'b')
//					break;
//				else if (ch == 'h')
//				{
//					printf("Step 3\n");
//					ch = getchar();
//				}
//				else
//				{
//					printf("Step 2\n");
//					printf("Step 3\n");
//				}
//				
//			}
//			
//		}
//		
//	}
//	printf("Done\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int space, huanhang, other;
//	space = huanhang = other = 0;
//	printf("Please enter text: ");
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//		{
//			space++;
//		}
//		else if (ch == '\n')
//		{
//			huanhang++;
//		}
//		else
//		{
//			other++;
//		}
//	}
//
//	printf("space = %d, huanhang = %d, other = %d", space, huanhang, other);
//
//	return 0;
//}
//#include <stdio.h>
//#define STOP '#'
//
//int main(void)
//{
//	char ch;
//	int count = 0;
//
//	printf("Please enter text(# to quit)\n");
//
//	while ((ch = getchar()) != STOP)
//	{
//		printf("%c%-4d", ch, ch);
//		count++;
//		if (count % 8 == 0)
//			printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#define STOP 0
//
//int main(void)
//{
//	float avg_ou, avg_ji;
//	int num, num_ou, num_ji, sum_ou, sum_ji;
//	num_ou = num_ji = sum_ou = sum_ji = 0;
//
//	printf("please enter some numbles:");
//
//	while ((scanf("%d",&num)) == 1 && num != 0)
//	{
//		if (num % 2 == 0)
//		{
//			num_ou++;
//			sum_ou += num;
//		}
//		else
//		{
//			num_ji++;
//			sum_ji += num;
//		}
//	}
//
//	if (num_ou > 0)
//		avg_ou = (float)sum_ou / num_ou;
//	if (num_ji > 0)
//		avg_ji = (float)sum_ji / num_ji;
//	printf("num_ou = %d avg_ou = %f   num_ji = %d avg_ji = %f\n",
//		num_ou, avg_ou, num_ji, avg_ji);
//
//	return 0;
//}
//#include <stdio.h>
//#define STOP '#'
//
//int main(void)
//{
//	int count = 0;
//	char ch;
//
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == '.')
//		{
//			putchar('!');
//			count++;
//		}
//		else if (ch == '!')
//		{
//			printf("!!");
//			count++;
//		}
//		else
//			putchar(ch);
//	}
//	printf("count = %d", count);
//
//	return 0;
//}
//#include <stdio.h>
//#define STOP '#'
//
//int main(void)
//{
//	int count = 0;
//	char ch;
//
//	while ((ch = getchar()) != STOP)
//	{
//		switch (ch)
//		{
//		case '.':
//		{
//					putchar('!');
//					count++;
//					break;
//		}
//		case '!':
//		{
//					printf("!!");
//					count++;
//					break;
//		}
//		default:
//			putchar(ch);
//		}
//		
//	}
//
//	printf("count = %d\n", count);
//	return 0;
//}
#include <stdio.h>
#define STOP '#'

int main(void)
{
	int count = 0;
	int flage = 0;
	char ch;

	while ((ch = getchar()) != STOP)
	{
		if (ch == 'i' && flage == 1)
		{
			count++;
			flage = 0;
			continue;
		}
		if (ch != 'e')
		{
			flage = 0;
			continue;
		}
		else
			flage = 1;
	}

	printf("count = %d\n", count);

	return 0;
}