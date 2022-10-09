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
//// power.c -- 计算数的整数幂
//#include <stdio.h>
//double power(double n, int p);
//int main(void)
//{
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the positive integer power");
//	printf(" to which\nthe number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf("%lf%d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
//		printf("Ener next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//
//	return 0;
//}
//
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	double x = 2000.0;
//	double y1, y2;
//	double x1, x2, x3, x4, x5, x6;
//	y1 = -pow(10.0,-20.0) * pow(x,6.0) + 3 * pow(10.0,-16.0) * pow(x,5.0) - 2 * pow(10.0,-12.0) * pow(x,4.0) + pow(10,-8.0) * pow(x,-3.0) - 3 * pow(10,-5.0) * pow(x,2.0) + 0.0337*x - 16.673;
//	printf("%lf\n", y1);
//	x1 = -pow(10.0, -20.0) * pow(x, 6.0);
//	x2 = 3 * pow(10.0, -16.0) * pow(x, 5.0);
//	x3 = -2 * pow(10.0, -12.0) * pow(x, 4.0);
//	x4 = pow(10, -8.0) * pow(x, -3.0);
//	x5 = -3 * pow(10, -5.0) * pow(x, 2.0);
//	x6 = 0.0337*x - 16.673;
//	y2 = x1 + x2 + x3 + x4 + x5 + x6;
//
//	printf("%lf\n", x1);
//	printf("%lf\n", y1);
//	printf("%lf\n", y2);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char English[26];
//	char x = 'a';
//	int y = 0;
//	
//	for (x = 'a'; x <= 'z'; x++, y++)
//	{
//		English[y] = x;
//		printf("%c\n", English[y]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#define ROW 5
//#define COL 5
//
//int main(void)
//{
//	int i = 1;
//	for (i = 1; i <= ROW; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//			printf("$");
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#define ROW 6
//#define LEN 26
//
//int main(void)
//{
//	int i, j, k;
//
//	for (i = 1; i <= ROW; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", 'F'- j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#define ROW 6
//
//int main(void)
//{
//	int i, j;
//	char k = 'A';
//
//	for (i = 1; i <= ROW; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%c", k++);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	float fa, fb;
//	printf("Please enter two numbers:");
//	while (scanf("%f %f", &fa, &fb) == 2)
//	{
//		printf("%f\n", (fa - fb) / (fa * fb));
//	}
//	printf("Done!\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int len, i;
//	char arr[40];
////	arr[40] = "liushan";
////	scanf("%39s", arr);
//	len = strlen(arr);
//	printf("%d\n", len);
//	for (i = len; i > 0; i--)
//	{
//		printf("%c", arr[i-1]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#define LEN 20
//
//int main(void)
//{
//	int i;
//	char str[LEN];
//
//	printf("Please enter a word: ");
//	scanf("%19s", str);
//	printf("The word is:\n");
//	printf("%s\n", str);
//
//	printf("Reversing the word is:\n");
//	for (i = strlen(str) - 1; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	double a, b;
//	printf("Please enter two f numble: ");
//	while (scanf("%lf %lf", &a, &b) == 2)
//	{
//		printf("%f\n", (a - b) / (a*b));
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	double a, b;
//	printf("Please enter two f numbles: ");
//
//	double suanshu(double i, double j);
//
//	while (scanf("%lf %lf", &a, &b) == 2)
//	{
//		printf("%f\n", suanshu(a,b));
//		printf("You can do it again(q to quit)\n");
//	}
//
//	return 0;
//}
//
//double suanshu(double i, double j)
//{
//	double ret;
//	ret = (i - j) / (i*j);
//	return ret;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int min, max, i, sum;
//	sum = 0;
//	printf("Enter lower and upper integer limits: ");
//	scanf("%d %d", &min, &max);
//	while (min < max)
//	{
//		sum = 0;
//		for(i = min; i <= max; i++)
//		{
//			sum += i * i;
//		}
//
//		printf("The sums of the squares from %d to %d is %d\n", min * min, max * max, sum);
//		printf("Enter next set of limits: ");
//		scanf("%d %d", &min, &max);
//	}
//
//	printf("Done");
//
//	return 0;
//	
//
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j, p;
//	int a[8];
//
//	printf("Please enter 8 numbers: ");
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (i = 7; i > 0; i--)
//	{
//		p = a[i];
//		for (j = 0; j < 7; j++)
//		{
//			if (p < a[j])
//			{
//				p = a[j];
//			}
//		}
//	}
//
//	for (i = 7; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, max;
//	float sum1, sum2;
//	sum1 = 1;
//	sum2 = 1;
//	
//	printf("Please enter max: ");
//	scanf("%d", &max);
//
//	while (max > 0)
//	{
//		for (i = 2; i <= max; i++)
//		{
//			sum1 += 1.0 / i;
//			sum2 += 1.0 / (pow(-1, i - 1)*i);
//		}
//		printf("sum1 = %f", sum1);
//		printf("sum2 = %f", sum2);
//		printf("Please enter next max: ");
//		scanf("%d", &max);
//	}
//	
//}
//#include <stdio.h>
//#include <math.h>
//#define N 8
//
//int main(void)
//{
//	int i;
//	int arr[N];
//
//	for (i = 0; i < N; i++)
//	{
//		arr[i] = pow(2, i);
//	}
//
//	i = 0;
//	do
//	{
//		printf("%d ", arr[i]);
//		i++;
//	} while (i < N);
//}
//#include <stdio.h>
//#define N 8
//
//int main(void)
//{
//	int i;
//	double sum = 0.0;
//	double arr1[N];
//	double arr2[N];
//
//	printf("Enter %d numbles for arr1: ",N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%lf", &arr1[i]);
//	}
//	
//	arr2[0] = arr1[0];
//
//	for (i = 1; i < N; i++)
//	{
//		arr2[i] = arr1[i] + arr2[i - 1];
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%-5g ", arr1[i]);
//	}
//
//		printf("\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%-5g ", arr2[i]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#define N 8
//
//int main(void)
//{
//	int i;
//	double a[N], b[N];
//
//	printf("Please enter %d numbers:\n", N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%lf", &a[i]);
//	}
//	b[0] = a[0];
//	for (i = 1; i < N; i++)
//	{
//		b[i] = a[i] + b[i - 1];
//	}
//	printf("Here are the results for array a:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%-3g", a[i]);
//	}
//	printf("\nHere are the results for array b:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%-3g", b[i]);
//	}
//	printf("\nDone.\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#define N 255
//
//int main(void)
//{
//	int i, len;
//	char str[N];
//
//	printf("Enter:\n");
//	scanf("%s", str);
//	len = strlen(str);
//	
//	for (i = len-1; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, m1, m2, year;
//	year = 0;
//	m1 = m2 = 100;
//	while (m1 >= m2)
//	{
//		year++;
//		m1 += 0.1 * 100;
//		m2 += 0.05 * m2;
//	}
//	printf("%d %d %d", year, m1, m2);
//}
//#include <stdio.h>
//#define RATE_SIMP 0.10
//#define RATE_COMP 0.05
//#define INIT_AMT 100.0
//
//int main(void)
//{
//	int years = 0;
//	double daphne = INIT_AMT;
//	double deirdre = INIT_AMT;
//
//	do
//	{
//		daphne += RATE_SIMP * INIT_AMT;
//		deirdre += RATE_COMP * deirdre;
//		years++;
//	} while (deirdre < daphne);
//	printf("Investment values after %d years:\n", years);
//	printf("Daphne: $%.2f\n", daphne);
//	printf("Deirdre: $%.2f\n", deirdre);
//	printf("Deirdre(invest) > Daphne(invest)\n");
//
//	return 0;
//}
//#include <stdio.h>
//#define BEG 100
//#define OUT 10
//#define LV 0.08
//
//int main(void)
//{
//	int year = 1;
//	double rest;
//
//	rest = BEG;
//
//	while (rest + LV*rest >= 10)
//	{
//		rest += LV*rest - OUT;
//		year++;
//	}
//	printf("%d", year);
//
//	return 0;
//}
//#include <stdio.h>
//#define TAX 0.08
//
//int main(void)
//{
//	int i = 0;
//	double Chuckie = 100.0;
//
//	do
//	{
//		i++;
//		Chuckie += Chuckie * TAX;
//		Chuckie -= 10;
//		printf("(%d)account:%g.\n", i, Chuckie);
//	} while (Chuckie > 9);
//	//↑若余额低于9则不够下一年支取;
//	printf("After %d years:\n", ++i);
//	printf("Chuckie has taken all of the money!\n");
//
//	return 0;
//}
//#include <stdio.h>
//#define DBS 150
//#define BEG 5
//
//int main(void)
//{
//	int nf, nw;
//	nf = BEG;
//	nw = 1;
//
//	do
//	{
//		nf = 2 * (nf - nw);
//		nw++;
//	} while (nf <= DBS);
//
//	printf("%d", --nw);
//	printf("\n");
//	printf("%d", nf);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	int friends = 5;
//
//	while (friends < 150)
//	{
//		printf("At %d weeks, Rabnud has", i);
//		printf("%4d friends.\n", friends);
//		friends = 2 * (friends - i++);
//	}
//	printf("At %d weeks, over Dunbar's number(150).\n", i);
//
//	return 0;
//}
// colddays.c -- 找出0℃以下的天数占总天数的百分比
//#include <stdio.h>
//int main(void)
//{
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d days total: %.lf%% were below freezing.\n",
//		all_days, 100.0 * (float)cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//
//	return 0;
//}
// cypher1.c -- 更改输入，空格不变
//#include <stdio.h>
//#define SPACE ' '
//
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
// electric.c -- 计算电费
//#include <stdio.h>
//#define RATE1 0.13230  // 首次使用360 kwh的费率
//#define RATE2 0.15040  // 接着再使用108 kwh的费率
//#define RATE3 0.30025
//#define RATE4 0.34025
//#define BREAK1 360.0
//#define BREAK2 468.0
//#define BREAK3 720.0
//#define BASE1 (RATE1 * BREAK1)
//#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
//#define BASE3 (BASE1 + BASE2 + (RATE3 *(BREAK3 - BREAK2)))
//
//int main(void)
//{
//	double kwh;
//	double bill;
//
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)
//		bill = BASE1 + (RATE2 *(kwh - BREAK1));
//	else if (kwh <= BREAK3)
//		bill = BASE2 + (RATE3 *(kwh - BREAK2));
//	else
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);
//
//	return 0;
//}
//// divisors.c -- 使用嵌套if语句显示一个数的约数
//#include <stdio.h>
//#include <stdbool.h>
//int main()
///* menuette.c -- 菜单程序 */
//#include <stdio.h>
//char get_choice(void);
//char get_first(void);
//int get_int(void);
//void count(void);
//int main(void)
//{
//	int choice;
//	void count(void);
//
//	while ((choice = get_choice()) != 'q')
//	{
//		switch (choice)
//		{
//		case 'a': printf("Buy low, sell high.\n");
//			break;
//		case 'b': putchar('\a');
//			break;
//		case 'c': count();
//			break;
//		default: printf("Program error!\n");
//			break;
//		}
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void count(void)
//{
//	int n, i;
//
//	printf("Count how far? Enter an integer:\n");
//	n = get_int();
//	for (i = 1; i <= n; i++)
//		printf("%d\n", i);
//	while (getchar() != '\n')
//		continue;
//}
//
//char get_choice(void)
//{
//	int ch;
//
//	printf("Enter the letter of your choice:\n");
//	printf("a. advice           b. bell\n");
//	printf("c. count            q. quit\n");
//	ch = get_first();
//	while ((ch < 'a' || ch > 'c') && ch != 'q')
//	{
//		printf("Please respond with a, b, c, or q.\n");
//		ch = get_first();
//	}
//
//	return ch;
//}
//
//char get_first(void)
//{
//	int ch;
//
//	ch = getchar();
//	while (getchar() != '\n')
//		continue;
//
//	return ch;
//}
//
//int get_int(void)
//{
//	int input;
//	char ch;
//
//	while (scanf("%d", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			putchar(ch);
//		printf(" is not an integer.\nPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//
//	return input;
////}
//#include <stdio.h>
//
//int main(void)
//{
//	int ch;
//	int count = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		count++;
//	}
//
//	printf("count = %d\n", count);
//
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	int ch, up, low, other;
//	up = low = other = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))
//		{
//			up++;
//		}
//		else if (islower(ch))
//		{
//			low++;
//		}
//		else
//			other++;
//	}
//
//	printf("up = %d   low = %d   other = %d\n", up, low, other);
//
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	int ch, c_w, sum_l;
//	c_w = sum_l = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ispunct(ch))
//			continue;
//		else if (isupper(ch) || islower(ch))
//			sum_l++;
//		else if (isspace(ch))
//			c_w++;
//	}
//
//	printf("sum_l = %d\n", sum_l);
//	printf("c_w = %d\n", c_w);
//	printf("pj = %f\n", (double)sum_l / c_w);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int bg, end;
//	bg = 1;
//	end = 100;
//
//	printf("We guass the numble,小了回答l,大了回答u,对了回答y\n");
//	printf("1-100,is it %d\n", (bg + end) / 2);
//	while ((ch = getchar()) != 'y')
//	{
//		if (ch == 'l')
//		{
//			printf("小了\n");
//			bg = (bg + end) / 2;
//			printf("is it %d\n", (bg + end) / 2);
//			while (getchar() != '\n')
//				continue;
//		}
//		else if (ch == 'u')
//		{
//			printf("大了\n");
//			end = (bg + end) / 2;
//			printf("is it %d\n", (bg + end) / 2);
//			while (getchar() != '\n')
//				continue;
//		}
//			
//		else
//		{
//			printf("please enter l or u\n");
//			while (getchar() != '\n')
//				continue;
//		}
//			
//	}
//
//	return 0;
//}
///* loccheck.c -- 查看变量被储存在何处 */
//#include <stdio.h>
//void mikado(int);
//int main(void)
//{
//	int pooh = 2, bah = 5;
//
//	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
//	mikado(pooh);
//
//	return 0;
//}
//
//void mikado(int bah)
//{
//	int pooh = 10;
//
//	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
//}
///* swap1.c -- 第1个版本的交换函数 */
//#include <stdio.h>
//void interchange(int u, int v);
//
//int main(void)
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d.\n", x, y);
//
//	return 0;
//}
//
//void interchange(int u, int v)
//{
//	int temp;
//
//	temp = u;
//	u = v;
//	v = temp;
//}
///* swap2.c -- 查找swap1.c的问题 */
//#include <stdio.h>
//void interchange(int u, int v);
//
//int main(void)
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d.\n", x, y);
//
//	return 0;
//}
//
//void interchange(int u, int v)
//{
//	int temp;
//
//	printf("Originally u = %d and v = %d.\n", u, v);
//	temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v = %d.\n", u, v);
//}
///* swap3.c -- 使用指针解决交换函数的问题 */
//#include <stdio.h>
//void interchange(int * u, int * v);
//
//int main(void)
//{
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(&x, &y);
//	printf("Now x = %d and y = %d.\n", x, y);
//
//	return 0;
//}
//
//void interchange(int * u, int * v)
//{
//	int temp;
//	temp = *u;
//	*u = *v;
//	*v = temp;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	menu(void);
//
//	printf("Please enter 1 to 4 :\n");
//	while (scanf("%d", &num) == 1)
//	{
//		if (num<1 && num>4)
//		{
//			menu(void);
//			continue;
//		}
//		else
//		{
//			play(num);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//void PX(double *x, double *y, double *z);
//
//int main(void)
//{
//	double a, b, c;
//
//	printf("Please enter three doubles:\n");
//	while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
//	{
//		PX(&a, &b, &c);
//		printf("a = %f, b = %f, c = %f\n", a, b, c);
//		printf("you can do it again(q to quit)\n");
//	}
//
//	return 0;
//}
//
//void PX(double *x, double *y, double *z)
//{
//	double temp;
//	if (*x > *y)
//	{
//		temp = *x;
//		*x = *y;
//		*y = temp;
//	}
//	if (*y > *z)
//	{
//		temp = *y;
//		*y = *z;
//		*z = temp;
//	}
//	if (*x > *y)
//	{
//		temp = *x;
//		*x = *y;
//		*y = temp;
//	}
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	char ch;
//	printf("Please enter some char:\n");
//	while (ch = getchar() != EOF)
//	{
//		if (isupper(ch))
//		{
//			printf("ch = %c, xh = %d - 64\n", ch, ch);
//		}
//		else if (islower(ch))
//		{
//			printf("ch = %c, xh = %d - 96\n", ch, ch);
//		}
//		else
//		{
//			printf("-1\n");
//		}
//	}
//
//	return 0;
//}
//  第6章的程序清单6.20中，power()函数返回一个double类型
//  数的正整数次幂。改进该函数，使其能正确计算负幂。
//  另外，函数要处理0的任何次幂都为0，任何数的0次幂都是
//  1（函数应报告0的0次幂未定义，因此把该值处理为1）。要使用一个循环，并在程序中测试该函数。

//#include <stdio.h>
//
//double power(int x, int y);
//
//
//int main(void)
//{
//	double a, b;
//	printf("Please enter two numbers, then power(x,y) will be print\n");
//	while (scanf("%lf %lf", &a, &b) == 2)
//	{
//		printf("%f\n", power(a, b));
//		printf("you can do it again(q to quit)\n");
//	}
//
//	return 0;
//}
//
//double power(int x, int y)
//{
//	int i;
//	double ret = 1;
//	if (y == 0)
//	{
//		if (x == 0)
//		{
//			printf("No power(0,0), so, return 1\n");
//		}
//		return 1;
//	}
//	else if (x == 0)
//	{
//		return 0;
//	}
//	else if (y < 0)
//	{
//		return power(x, y+1)/x;
//	}
//	else
//	{
//		return power(x, y-1)*x;
//
//	}
//}
//#include <stdio.h>
//
//void Fibonacci(int x);
//
//int main(void)
//{
//	int a;
//
//	printf("Please enter a int number(q to quit)\n");
//	while (scanf("%d", &a) == 1)
//	{
//		Fibonacci(a);
//		printf("you can do it again\n");
//	}
//
//	return 0;
//}
//
//void Fibonacci(int x)
//{
//	int i;
//	long f = 1;
//	long s = 1;
//	long add;
//
//	if (x <= 0)
//	{
//		printf("Please enter a number bigger than 0\n");
//	}
//	else
//	{
//		for (i = 0; i < x; i++)
//		{
//			printf("%ld\n", f);
//			add = f + s;
//			f = s;
//			s = add;
//		}
//		
//	}
//}