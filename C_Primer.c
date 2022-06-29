#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main(void)
//{
//	int dogs;
//
//	printf("How many dogs do you have?\n"); 
//	scanf("%d", &dogs);
//	printf("So you have %d dog(s)!\n", dogs);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	printf("Concrete contains gravel and cement.\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	printf("A .c is used to end a C program filename.\n");
//
//	return 0;
//}
//
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	num = 1;
//
//	printf("I am a simple ");
//	printf("computer.\n");
//	printf("My favorite number is %d because it is first.\n", num);
//
//	return 0;
//}

//
//#include <stdio.h>
//int main(void)
//{
//	int feet, fathoms;
//
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes, I said %d feet!\n", 6 * fathoms);
//
//	return 0;
//}

//* two_func.c -- 一个文件包含两个函数 */
//#include <stdio.h>
//void butler(void);
//int main(void)
//{
//	printf("I will summon the butler function.\n");
//	butler();
//	printf("Yes. Bring me some tea and writeable DVDs.\n");
//
//	return 0;
//}
//void butler(void)
//{
//	printf("You rang, sir?\n");
//}

///* nogood.c -- 有错误的程序 */
//#include <stdio.h>
//int main(void)
//{
//	int n, n2, n3;
//
//
//	n = 5;
//	n2 = n * n;
//	n3 = n * n * n;
//	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
//
//	return 0;
//}

//int main(void)
//{
//	printf("Qihui Wu\n");
//	printf("Qihui\nWu\n");
//	printf("Qihui ");
//	printf("Wu");
//	return 0;
//}

////2-2
//int main(void)
//{
//	printf("Qihui Wu\n");
//	printf("njdxxlxq\n");
//	return 0;
//}

////2-3
//int main(void)
//{
//	int years;
//	int days;
//
//	years = 24;
//	days = 365 * years;
//	printf("I am %d years old\n", years);
//	printf("I live in the earth for %d days\n", days);
//	return 0;
//}

//void jolly(void);
//void deny(void);
//
//int main(void)
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//
//void deny(void)
//{
//	printf("Which nobody can deny!\n");
//}
//
////2-5
//#include <stdio.h>
//void br(void);
//void ic(void);
//
//int main(void)
//{
//	br();
//	printf(",");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//	return 0;
//}
//
//void br(void)
//{
//	printf("Brazil, Russia");
//}
//
//void ic(void)
//{
//	printf("India, China");
//}


////2-6
//#include <stdio.h>
//
//int main(void)
//{
//	int toes = 10;
//	int toes2;
//	int toes_toes;
//
//	toes2 = 2 * toes;
//	toes_toes = toes * toes;
//
//	printf("toes = %d, toes2 = %d, toes_toes = %d", toes, toes2, toes_toes);
//
//	return 0;
//}

////2-7
//#include <stdio.h>
//
//void Smile(void);
//
//int main(void)
//{
//	Smile();
//	Smile();
//	Smile();
//	printf("\n");
//	Smile();
//	Smile();
//	printf("\n");
//	Smile();
//
//	return 0;
//}
//
//
//void Smile(void)
//{
//	printf("Smail!");
//}

//2-8
#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!");

	return 0;
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}
