#define _CRT_SECURE_NO_WARNINGS 1

///* golf.c -- 高尔夫锦标赛计分卡 */
//int main(void)
//{
//	int jane, tarzan, cheeta;
//
//	cheeta = tarzan = jane = 68;
//	printf("               cheeta   tarzan   jane\n");
//	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
//
//	return 0;
//}
///* square.c -- 计算1-20的平方 */
//#include <stdio.h>
//int main(void)
//{
//	int num = 1;
//
//	while (num < 21)
//	{
//		printf("%-4d %-6d\n", num, num * num);
//		num = num + 1;
//	}
//
//	return 0;
//}
///* wheat.c -- 指数增长 */
//#include <stdio.h>
//#define SQUARES 64
//int main(void)
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//
//	printf("square      grains      total      ");
//	printf("fraction of \n");
//	printf("           added       grains      ");
//	total = current = 1.0;
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//		total, total / CROP);
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//			total, total / CROP);
//	}
//	printf("That's all.\n");
//	return 0;
//}
///* divide.c -- 演示除法 */
//#include <stdio.h>
//int main(void)
//{
//	printf("integer dicision: 5/4 is %d \n", 5 / 4);
//	printf("integer dicision: 6/3 is %d \n", 6 / 3);
//	printf("integer dicision: 7/4 is %d \n", 7 / 4);
//	printf("floating division: 7./4. is %1.2f \n", 7. / 4.);
//	printf("mixed division:    7./4 is %1.2f \n", 7. / 4);
//
//	return 0;
//}
///* rules.c -- 优先级测试 */
//#include <stdio.h>
//int main(void)
//{
//	int top, score;
//
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score = %d\n", top, score);
//
//	return 0;
//}
//// sizeof.c -- 使用sizeof运算符
//// 使用C99 新增的%zd 转换说明 -- 如果编译器不支持%zd，请将其改成%u 或%lu
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof(int);
//	printf("n = %d, n has %u bytes; all ints have %u bytes.\n",
//		n, sizeof n, intsize);
//
//	return 0;
//}
//// min_sec.c -- 把秒数转换成分和秒
//#include <stdio.h>
//#define SEC_PER_MIN 60
//int main(void)
//{
//	int sec, min, left;
//
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the number of seconds (<=0 to quit):\n");
//	scanf("%d", &sec);
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN;
//		left = sec %SEC_PER_MIN;
//		printf("%d seconds is %d minutes, %d seconds.\n", sec,
//			min, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//	return 0;
//}
///* add_one.c -- 递增：前缀和后缀 */
//#include <stdio.h>
//int main(void)
//{
//	int ultra = 0, super = 0;
//
//	while (super < 5)
//	{
//		super++;
//		++ultra; 
//		printf("super = %d, ultra = %d \n", super, ultra);
//	}
//	return 0;
//}
//int main(void)
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//	printf("a a_post b pre_b \n");
//	printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);
//
//	return 0;
//}
//#include <stdio.h>
//#define MAX 100
//int main(void)
//{
//	int count = MAX + 1;
//
//	while (--count > 0){
//		printf("%d bottles of spring water on the wall,"
//			"%d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around,\n");
//		printf("%d bottles of spring water!\n\n", count - 1);
//	}
//
//	return 0;
//}
///*  addemup.c -- 几种常见的语句 */
//#include <stdio.h>
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//		sum = sum + count;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
///* pound.c -- 定义一个带一个参数的函数   */
//#include <stdio.h>
//void pound(int n);
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6.0f;
//
//	pound(times);
//	pound(ch);
//	pound(f);
//
//	return 0;
//}
//
//void pound(int n)
//{
//	while (n-- > 0)
//		printf("#");
//	printf("\n");
//}
//// running.c -- A useful program for runners
//#include <stdio.h>
//const int S_PER_M = 60;
//const int S_PER_H = 3600;
//const double M_PER_K = 0.62137;
//int main(void)
//{
//	double distk, distm;
//	double rate;
//	int min, sec;
//	int time;
//	double mtime;
//	int mmin, msec;
//
//	printf("This program converts your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance runn.\n");
//	scanf("%lf", &distk);
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf("%d", &sec);
//
//	time = S_PER_M * min + sec;
//	distm = M_PER_K * distk;
//	rate = distm / time * S_PER_H;
//	mtime = (double)time / distm;
//	mmin = (int)mtime / S_PER_M;
//	msec = (int)mtime % S_PER_M;
//
//	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
//		distk, distm, min, sec);
//	printf("That pace corresponds to running a mile in %d min,",
//		mmin);
//	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
//		rate);
//}
//#include <stdio.h>
//#define CHANGE 60
//
//int main(void)
//{
//	int min;
//	int hour;
//	int left;
//	printf("Change min to hour and min\n");
//	printf("Please enter the min>:");
//	scanf("%d", &min);
//	while (min > 0)
//	{
//		hour = min / CHANGE;
//		left = min % CHANGE;
//		printf("min = %d, means hour = %d, and left = %d\n", min, hour, left);
//		printf("enter a new numble of min to change again or enter a number less than 0 to close\n");
//		scanf("%d", &min);
//	}
//	printf("Thanks for your use!");
//
//	return 0;
//}
//#include <stdio.h>
//#define TEN 10;
//int main(void)
//{
//	int i = 0;
//	int a;
//	printf("Please enter a numble:\n");
//	scanf("%d", &a);
//	while (i <=  10)
//	{
//		printf("%d ", a);
//		i++;
//		a++;
//	}
//		
//
//	return 0;
//|}
//#include <stdio.h>
//#define ZHOU 7
//
//int main(void)
//{
//	int days, weeks, left_days;
//	printf("Please enter the days:\n");
//	scanf("%d", &days);
//	weeks = days / ZHOU;
//	left_days = days % ZHOU;
//	printf("%d days are %d weeks, %d days\n", days, weeks, left_days);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int days, sum, money;
//	printf("The days you want to work:");
//	scanf("%d", &days);
//	money = 1;
//	sum = 0;
//	while (money <= days)
//	{
//		sum += money;
//		money++;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int days, sum, money;
//	printf("The days you want to work:");
//	scanf("%d", &days);
//	money = 1;
//	sum = 0;
//	while (money <= days)
//	{
//		sum += money * money;
//		money++;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//#include <stdio.h>
//
//double Three(double a);
//
//int main(void)
//{
//	double a, b;
//	printf("Please enter a num, then there will put out num^3\n");
//	scanf("%lf", &a);
//	b = Three(a);
//	printf("%lf^ 3 = %lf", a, b);
//
//	return 0;
//}
//
//double Three(double a)
//{
//	return a*a*a;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int q, a, left;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to serve as the second operand: ");
//	scanf("%d", &q);
//	printf("Now enter the first operand: ");
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		printf("%d %% %d is %d\n", a, q, a%q);
//		printf("Enter next number for first operand (<= 0 to quit) :");
//		scanf("%d", &a);
//	}
//	printf("Done\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//void Temperatures(double h);
//
//int main(void)
//{
//	double h;
//	printf("Please enter a numble: \n");
//	while (scanf("%lf", &h) == 1)
//	{
//		Temperatures(h);
//		printf("Again? (q to quit)");
//	}
//	
//
//	return 0;
//}
//
//void Temperatures(double h)
//{
//	double s, k;
//	s = 5.0 / 9.0 * (h - 32.0);
//	k = s + 273.16;
//	printf("h = %.2lf, s = %.2lf, k = %.2lf\n", h, s, k);
//}
/* summing.c -- 根据用户键入的整数求和 */
//#include <stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit):");
//	status = scanf("%ld", &num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit):");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}
// when.c -- 何时退出循环
//#include <stdio.h>
//int main(void)
//{
//	int n = 5;
//
//	while (n < 7)
//	{
//		printf("n = %d\n", n);
//		n++;
//		printf("Now n = %d\n", n);
//	}
//	printf("The loop has finished.\n");
//
//	return 0;
//}
///* while.c -- 注意花括号的使用 */
///* 糟糕的代码创建了一个无限循环 */
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//
//	while (n < 3)
//		printf("n is %d\n", n);
//	n++;
//	printf("That's all this program does\n");
//
//	return 0;
//}
///* while2.c --注意分号的位置 */
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//
//	while (n++ < 3);
//	printf("n is %d\n", n);
//	printf("That's all this program does.\n");
//
//	return 0;
//}
//// cmpflt.c -- 浮点数比较
//#include <math.h>
//#include <stdio.h>
//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response;
//	printf("What is the value of pi?\n");
//	scanf("%lf", &response);
//	while (fabs(response - ANSWER) > 0.0001)
//	{
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//
//	return 0;
//}
///* t_and_f.c -- C 中的真和假的值 */
//#include <stdio.h>
//int main(void)
//{
//	int true_val, false_val;
//
//	true_val = (10 > 2);
//	false_val = (10 == 2);
//	printf("true = %d; false = %d \n", true_val, false_val);
//
//	return 0;
//}
//// truth.c -- 哪些值为真
//#include <stdio.h>
//int main(void)
//{
//	int n = 3;
//
//	while (n)
//		printf("%2d is true\n", n--);
//	printf("%2d is false\n", n);
//
//	n = -3;
//	while (n)
//		printf("%wd is true\n", n++);
//	printf("%wd is false\n", n);
//
//	return 0;
//}
// troule.c -- 误用=会导致无限循环

//#include <stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status = 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit):\n");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}
//boolean.c -- 使用_Bool 类型的变量 variable
//#include <stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//
//	printf("Please enter an integer to be summed ");
//	printf("q to quit): ");
//	input_is_good = (scanf("%ld", &num) == 1);
//	while (input_is_good)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit):");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}
//// sweetiel.c -- 一个计数循环
//#include <stdio.h>
//int main(void)
//{
//	const int NUMBER = 22;
//	int count = 1;
//
//	while (count <= NUMBER)
//	{
//		printf("Be my Valentine!\n");
//		count++;
//	}
//
//	return 0;
//}
//// sweetie2.c -- 使用for循环的计数循环
//#include <stdio.h>
//int main(void)
//{
//	const int NUMBER = 22;
//	int count;
//
//	for (count = 1; count <= NUMBER; count++)
//		printf("Be my Valentine!\n");
//
//	return 0;
//}
///* for_cube.c -- 使用for循环创建一个立方表 */
//#include <stdio.h>
//int main(void)
//{
//	int num;
//
//	printf("    n   n cubed\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %5d\n", num, num*num*num);
//
//	return 0;
//}
///* for_down.c */
//#include <stdio.h>
//int main(void)
//{
//	int secs;
//
//	for (secs = 5; secs > 0; secs--)
//		printf("%d seconds!\n", secs);
//	printf("We have ignition!\n");
//
//	return 0;
//}
///* for_13s.c */
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	for (n = 2; n < 60; n = n + 13)
//		printf("%d \n", n);
//
//	return 0;
//}
///* for_char.c */
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//
//	for (ch = 'a'; ch <= 'z'; ch++)
//		printf("The ASCII value for %c is %d.\n", ch, ch);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	for (num = 1; num*num*num <= 216; num++)
//		printf("%d   %d\n", num, num*num*num);
//
//	return 0;
//}
///* for_geo.c */
//#include <stdio.h>
//int main(void)
//{
//	double debt;
//	for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
//		printf("Your debt is now $%.2f.\n", debt);
//
//	return 0;
//}
///* for_wild.c */
//#include <stdio.h>
//int main(void)
//{
//	int x;
//	int y = 55;
//
//	for (x = 1; y <= 75; y = (++x * 5) + 50)
//		printf("%10d %10d\n", x, y);
//
//	return 0;
//}
///* for_none.c */
//#include <stdio.h>
//int main(void)
//{
//	int ans, n;
//	ans = 2;
//	for (n = 3; ans <= 25;)
//		ans = ans* n;
//	printf("n = %d; ans = %d.\n", n, ans);
//
//	return 0;
//}
///* for_show.c */
//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//
//	for (printf("Keep entering numbers!\n"); num != 6;)
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//
//	return 0;
//}
//// postage.c -- 一类邮资
//#include <stdio.h>
//int main(void)
//{
//	const int FIRST_OZ = 46;
//	const int NEXT_OZ = 20;
//	int ounces, cost;
//
//	printf(" ounces cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
//		printf("%5d   $%4.2f\n", ounces, cost / 100.0);
//
//	return 0;
//}
///* zeno.c -- 求序列的和 */
//#include <stdio.h>
//
//int main(void)
//{
//	int t_ct;
//	double time, power_of_2;
//	int limit;
//
//	printf("Enter the number of terms you want: ");
//	scanf("%d", &limit);
//	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
//		t_ct++, power_of_2 *= 2.0)
//	{
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//	}
//
//	return 0;
//}
///* do_while.c -- 出口条件循环 */
//#include <stdio.h>
//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered;
//
//	do
//	{
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number:");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//		printf("Congratulations! You are cured!\n");
//
//	return 0;
//}
///* entry.c -- 出口条件循环 */
//#include <stdio.h>
//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered;
//
//	printf("To enter the triskaidekaphobia therapy club,\n");
//	printf("please enter the secret code number: ");
//	scanf("%d", &code_entered);
//	while (code_entered != secret_code)
//	{
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	}
//	printf("Congratulations! You are cured!\n");
//
//	return 0;
//}
///* rowsl.c -- 使用嵌套循环 */
//#include <stdio.h>
//#define ROWS 6
//#define CHARS 10
//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}
//// rows2.c -- 依赖外部循环的嵌套循环
//#include <stdio.h>
//int main(void)
//{
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}
//// scores_in.c -- 使用循环处理数组
//#include <stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]);
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]);
//	printf("\n"); 
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("Sum of scores = %d, average = %.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//
//	return 0;
//}
// power.c -- 计算数的整数幂
#include <stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Ener next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;
}