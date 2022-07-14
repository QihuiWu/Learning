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
