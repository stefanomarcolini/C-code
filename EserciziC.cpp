// EserciziC.cpp: definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <cstdio>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>



int main()
{
	//	#1
	/*printf("\n\n#4\tPrint the first N integers:\n\n");
	int n, i;
	printf("Please type an integer number N:\t");
	scanf_s("%d", &n);
	printf("First n integers:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", i);
	}*/

	//	#2
	/*printf("\n\n#4\tPrint all even numbers < N in ascending order:\n\n");
	int n, i;
	printf("Please type an integer number N:\t");
	scanf_s("%d", &n);
	printf("Even integers of value < N in ascending order:\n");
	for (i = 0; i < n; i++) {
		if (i % 2 == 0)
		printf("%d\n", i);
	}*/

	//	#3
	/*printf("\n\n#4\tPrint all the even numbers < N in descending order:\n\n");
	i = (n % 2 == 0) ? n : n - 1;
	printf("Even integers of value < N in descending order:\n");
	for (; i > 1; i -= 2) {
		printf("%d\n", i);
	}*/

	//	#4
	/*printf("\n\n#4\tPrint the multiples of A < than the number N:\n\n");
	printf("Please type a number N:\t");
	float n;
	scanf_s("%f", &n);
	printf("Please type a number A:\t");
	float a;
	scanf_s("%f", &a);
	printf("Multiples of A that are < N:\n");
	if (a != 0) {
		for (float i = a; i < n; i *= a) {
			printf("%.2f\n", i);
		}
	}*/

	//	#5
	/*printf("\n\n#5\tPrint the first N multiples of a given number A:\n\n");
	printf("Please type how many (N) multiples:\t");
	int n;
	scanf_s("%d", &n);
	printf("Please type a number A:\t");
	float a;
	scanf_s("%f", &a);
	printf("First N multiples of A:\n");
	for (int i = 0; i < n; i++) {
		printf("%f\n", a*i);
	}*/

	//	#6
	/*printf("\n\n#6\tPrint the first 10 even numbers next to the number N:\n\n");
	int n, i;
	printf("Please type an integer number N:\t");
	scanf_s("%d", &n);
	printf("First 10 even integers > N:\n");
	i = (n % 2 == 0) ? 2 : 1;
	for (; i <= 20; i += 2) {
		printf("%d\n", n+i);
	}*/

	//	#7
	/*printf("\n\n#7\tReturn the sum of the first N numbers:\n\n");
	int n, i;
	printf("Please type an integer number N:\t");
	scanf_s("%d", &n);
	if (n >= 0) {
		printf("Sum of first N Natural numbers (zero incuded):\t");
		int sum = 0;
		for (i = 0; i < n; i++) {
			sum += i;
		}
		printf("%d\n", sum);

		printf("Sum of first N Natural numbers (zero excluded):\t");
		sum += n;
		printf("%d\n", sum);
	}*/

	//	#8
	/*printf("\n\n#8\tGiven N numbers, return their sum:\n\n");
	int nums;
	float n, sum = 0;
	printf("Please type how many numbers do you want to add:\t");
	scanf_s("%d", &nums);
	for (int i = 0; i < nums; i++) {
		printf("\nPlease type a number N and press enter:\t");
		scanf_s("%f", &n);
		sum += n;
	}
	printf("\nThe sum of all N numbers is:\t%f\n\n", sum);*/

	//	#9
	/*printf("\n\n#9\tGiven N numbers count how many even and how many odd:\n\n");
	printf("Please type how many numbers you want check:\t");
	int n;
	scanf_s("%d", &n);
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type an integer number N and then press enter:\t");
		int x = 0;
		scanf_s("%d", &x);
		(x % 2 == 0) ? even++ : odd++;
	}
	printf("\nYou typed %d even and %d odd numbers\n\n", even, odd);*/

	//	#10
	/*printf("\n\n#10\tGiven N numbers count how many are multiples of 3:\n\n");
	printf("Please type how many numbers you want check:\t");
	int n;
	scanf_s("%d", &n);
	int res = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type an integer number N and then press enter:\t");
		int x = 0;
		scanf_s("%d", &x);
		(x % 3 == 0) ? res++ : res;
	}
	printf("\nYou typed %d multiples of 3\n\n", res);*/

	//	#11
	/*printf("\n\n#11\tGiven N numbers count how many are multiples of A:\n\n");
	printf("Please type the number A:\t");
	int n, a;
	scanf_s("%d", &a);
	printf("Please type how many numbers you want check:\t");
	scanf_s("%d", &n);
	int res = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type an integer number N and then press enter:\t");
		int x = 0;
		scanf_s("%d", &x);
		(x % a == 0) ? res++ : res;
	}
	printf("\nYou typed %d multiples of %d\n\n", res, a);*/

	//	#12
	/*printf("\n\n#12\tGiven N numbers count how many are positive, negative or zeroes:\n\n");
	printf("Please type how many numbers you want check:\t");
	int n;
	scanf_s("%d", &n);
	int pos = 0, neg = 0, zero = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type an integer number N and then press enter:\t");
		int x = 0;
		scanf_s("%d", &x);
		(x == 0) ? zero++ : (x > 0) ? pos++ : neg++;
	}
	printf("\nYou typed %d positives, %d negatives and %d zeros\n\n", pos, neg, zero);*/

	//	#13
	/*printf("\n\n#13\tCount the multiples of K in the interval [A...B] included:\n\n");
	printf("Please type the number K:\t");
	float k;
	scanf_s("%f", &k);

	printf("Please type the first number of the interval (A):\t");
	float a;
	scanf_s("%f", &a);

	printf("Please type the second number of the interval (B):\t");
	float b;
	scanf_s("%f", &b);

	int count = 0;
	for (float i = k; i <= fmaxf(a, b); i += k) {
		i >= fminf(a, b) && i <= fmaxf(a, b) ? count++ : count;
	}
	printf("\nThere are %d multiples of %.2f in the interval [%.2f...%.2f]\n", count, k, fminf(a, b), fmaxf(a, b));*/

	//	#14
	/*printf("\n\n#14\tGiven N numbers print the sum of the even and the odd ones:\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type an integer number:\t");
		int x = 0;
		scanf_s("%d", &x);
		even = (x % 2 == 0) ? even + x : even;
		odd = (x % 2 != 0) ? odd + x : odd;
	}
	printf("\nThe sum of the even numbers is:\t%d\nThe sum of the odd numbers is:\t%d\n", even, odd);*/

	//	#15
	/*printf("\n\n#15\tReturn the sum of positive and negative numbers of a set of N Relative numbers:\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	int pos = 0, neg = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type an integer number:\t");
		int x = 0;
		scanf_s("%d", &x);
		pos = (x > 0) ? pos + x : pos;
		neg = (x < 0) ? neg + x : neg;
	}
	printf("\nThe sum of the positve numbers is:\t%d\nThe sum of the negative numbers is:\t%d\n", pos, neg);*/

	//	#16
	/*printf("\n\n#16\tGiven N numbers return the average:\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	float sum = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type a number:\t");
		float x = 0;
		scanf_s("%f", &x);
		sum += x;
	}
	printf("\nThe average is:\t%.2f\n", sum/n);*/

	//	#17
	/*printf("\n\n#17\tGiven N numbers return the average of the even and the odd numbers:\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	float sumEven = 0, sumOdd = 0;
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type a number:\t");
		float x = 0;
		scanf_s("%f", &x);
		if (x / 2.0 == (int)(x / 2)) {
			even++;
			sumEven += x;
		} else {
			odd++;
			sumOdd += x;
		}
	}
	printf("\nThe average of the even numbers is:\t%.2f\nThe average of the odd numebrs is:\t%.2f\n", sumEven/even, sumOdd/odd);*/

	//	#18
	/*printf("\n\n#18\tGiven N numbers find the smallest and its position (index):\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	float value = 0;
	int index = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type a number:\t");
		float x = 0;
		scanf_s("%f", &x);
		if (i == 0) {
			value = x;
		}
		if (value > x) {
			value = x;
			index = i;
		}
	}
	printf("\nThe smallest number is: %.2f and its position (0 indexed) was: %d\n", value, index);*/

	//	#19
	/*printf("\n\n#19\tGiven N numbers find the biggest and how many times it occured:\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	float value = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type a number:\t");
		float x = 0;
		scanf_s("%f", &x);
		if (i == 0) {
			value = x;
			++count;
		} else if (value <= x) {
			value = x;
			++count;
		}
	}
	printf("\nThe biggest number is: %.2f and it occurred %d times\n", value, count);*/

	//	#20
	/*printf("\n\n#20\tGiven  a se of N numbers find 2 numbers that are bigger than all the others:\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	float v1, v2;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type a number:\t");
		float x = 0;
		scanf_s("%f", &x);
		if (i == 0) {
			v1 = x;
		} else if (v1 < x) {
			v2 = v1;
			v1 = x;
		} else if (v2 < x) {
			v2 = x;
		}
	}
	printf("\nThe biggest number is: %.2f and the second one is: %.2f\n", v1, v2);*/

	//	#21
	/*printf("\n\n#21\tGiven a set of N measures X1,X2,X3,...Xn return the geometric mean:\n\n");
	printf("Please type how many numbers:\t");
	int n = 0;
	scanf_s("%d", &n);
	float prod = 1;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type a number:\t");
		float x = 0;
		scanf_s("%f", &x);
		prod *= x;
	}
	printf("\nThe geometric mean is:\t%.2f\n", sqrtf(prod));*/

	//	#22
	/*printf("\n\n#22\tReturn the factorial of an integer number N (N! = N(N-1)(N-2)...1, 0! = 1, 1! = 1):\n\n");
	printf("Please type an integer number N:\t");
	long n = 0;
	scanf_s("\t%d", &n);
	printf("%d! is:\t", n);
	for (int i = n - 1; i > 1; i--) {
		n *= i;
	}
	printf("\t%d\n",n);*/

	//	#23
	/*printf("\n\n#23\tGiven N sets of 3 numbers each, return the mean of each set and the distance from a fixed number A:\n\n");
	printf("Please type how many sets of 3 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	printf("Please type a fixed number A:\t");
	float a = 0;
	scanf_s("%f", &a);
	for (int i = 0; i < n; i++) {
		float sum = 0;
		for (int j = 0; j < 3; j++) {
			printf("Please type a number for set #%d\t", i);
			float x = 0;
			scanf_s("%f", &x);
			sum += x;
		}
		printf("\nThe mean of set n°%d is: %.2f and the distance from the fixed number %.2f is: %.2f\n\n", i, sum/3, a, (sum/3 - a));
	}*/

	//	#24
	/*printf("\n\n#24\tGiven N sets of 2 numbers each, count and print those the sum of which is in the interval [A...B] included:\n\n");
	printf("Please type how many sets of 2 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	printf("Please type number A:\t");
	float a = 0;
	scanf_s("\t%f", &a);
	printf("Please type number B:\t");
	float b = 0;
	scanf_s("\t%f", &b);
	int count = 0;
	for (int i = 0; i < n; i++) {
		float sum = 0;
		printf("\nPlease type the first number of set #%d\t", i);
		float x = 0;
		scanf_s("%f", &x);
		printf("\nPlease type the second number of set #%d\t", i);
		float y = 0;
		scanf_s("%f", &y);
		sum = x + y;
		if (sum >= fminf(a, b) && sum <= fmaxf(a, b)) {
			++count;
			printf("\nThe set [%.2f, %.2f] is in the interval [%.2f...%.2f]\n\n", x, y, a, b);
		}
	}
	printf("\nThe number of sets of 2 numbers the sum of which is in the interval [%.2f...%.2f] is: %d\n\n", a, b, count);*/

	//	#25
	/*printf("\n\n#25\tGiven N sets of 2 numbers each, count and print those the values of which are one the opposite of the other:\n\n");
	printf("Please type how many sets of 2 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type the first number of set #%d\t", i);
		float x = 0;
		scanf_s("%f", &x);
		printf("\nPlease type the second number of set #%d\t", i);
		float y = 0;
		scanf_s("%f", &y);
		if (x == -y) {
			++count;
			printf("\nThe values of the set [%.2f, %.2f] are one the opposite of the other\n\n", x, y);
		}
	}
	printf("\nThe number of sets the values of which are one the opposite of the other is: %d\n\n", count);*/

	//	#26
	/*printf("\n\n#26\tGiven N sets of 2 numbers each, count and print those the values of which are one the reciprocal of the other:\n\n");
	printf("Please type how many sets of 2 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type the first number of set #%d\t", i);
		float x = 0;
		scanf_s("%f", &x);
		printf("\nPlease type the second number of set #%d\t", i);
		float y = 0;
		scanf_s("%f", &y);
		if (x == 1/y) {
			++count;
			printf("\nThe values of the set [%.2f, %.2f] are one the reciprocal of the other\n\n", x, y);
		}
	}
	printf("\nThe number of sets the values of which are one the reciprocal of the other is: %d\n\n", count);*/

	//	#27
	/*printf("\n\n#27\tGiven N sets of 2 numbers each, count and print those the values of which have the same sign:\n\n");
	printf("Please type how many sets of 2 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type the first number of set #%d\t", i);
		float x = 0;
		scanf_s("%f", &x);
		printf("\nPlease type the second number of set #%d\t", i);
		float y = 0;
		scanf_s("%f", &y);
		if (x != 0 && y != 0 && x * y > 0) {
			++count;
			printf("\nThe values of the set [%.2f, %.2f] have the same sign\n\n", x, y);
		} else if (x >= 0 && y >= 0) {
			++count;
			printf("\nThe values of the set [%.2f, %.2f] have the same sign\n\n", x, y);
		}
	}
	printf("\nThe number of sets the values of which have the same sign: %d\n\n", count);*/

	//	#28
	/*printf("\n\n#28\tGiven N sets of 2 real numbers each, count those the product of which values is even, odd or zero\n(without making the product):\n\n");
	printf("Please type how many sets of 2 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	int even = 0, odd = 0, zeros = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type the first number of set #%d\t", i);
		float x = 0;
		scanf_s("%f", &x);
		printf("\nPlease type the second number of set #%d\t", i);
		float y = 0;
		scanf_s("%f", &y);
		if (x == 0 || y == 0) {
			++zeros;
		} else if (x % 2 == 0 || y % 2 == 0) {
			++even;
		} else {
			++odd;
		}
	}
	printf("\nSets the product of which values is even: %d, odd: %d, zero: %d\n\n", even, odd, zeros);*/

	//	#29
	/*printf("\n\n#28\tGiven N sets of 2 real numbers each, count those the product of which values is positive, negative or zero\n(without making the product):\n\n");
	printf("Please type how many sets of 2 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	int pos = 0, neg = 0, zeros = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type the first number of set #%d\t", i);
		float x = 0;
		scanf_s("%f", &x);
		printf("\nPlease type the second number of set #%d\t", i);
		float y = 0;
		scanf_s("%f", &y);
		if (x == 0 || y == 0) {
			++zeros;
		}
			else if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
			++pos;
		}
		else {
			++neg;
		}
	}
	printf("\nSets the product of which values is positive: %d, negative: %d, zero: %d\n\n", pos, neg, zeros);*/

	//	#30
	/*printf("\n\n#30\tGiven N sets of 2 real numbers each, count those the sum of which values is positive, negative (without making the sum):\n\n");
	printf("Please type how many sets of 2 numbers each:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	int pos = 0, neg = 0;
	for (int i = 0; i < n; i++) {
		printf("\nPlease type the first number of set #%d\t", i);
		float x = 0;
		scanf_s("%f", &x);
		printf("\nPlease type the second number of set #%d\t", i);
		float y = 0;
		scanf_s("%f", &y);
		if ((fabs(x) > fabs(y) && x > 0) || (fabs(y) > fabs(x) && y > 0)) {
			++pos;
		}
		else {
			++neg;
		}
	}
	printf("\nSets the sum of which values is positive: %d, negative: %d\n\n", pos, neg);*/

	//	#31
	/*printf("\n\n#31\tReturn the proper dividers of a number N:\n\n");
	printf("Please type a numbers N:\t");
	int n = 0;
	scanf_s("\t%d", &n);
	for (int i = 1; i < (n / 2) + 1; i++) {
		if (n % i == 0)
			printf("%d\n", i);
	}
	printf("%d\n", n);*/

	//	#32
	/*printf("\n\n#32\tFind the less number of banknotes of size [$100k, $50k, $10k, $5k, $1k] that are needed to pay a certain amount $C:\n\n");
	printf("Please type the amount $C:\t");
	int c = 0, k100 = 0, k50 = 0, k10 = 0, k5 = 0, k1 = 0;
	scanf_s("\t%d", &c);
	printf("\nTo pay $%d, ", c);
	while (c >= 1000) {
		if (c >= 100000) {			//	Can use switch(c)...
			int t = 0;
			t = (int)(c / 100000);
			c -= (t * 100000);
			k100 = t;
		} else if (c >= 50000) {
			int t = 0;
			t = (int)(c / 50000);
			c -= (t * 50000);
			k50 = t;
		} else if (c >= 10000) {
			int t = 0;
			t = (int)(c / 10000);
			c -= (t * 10000);
			k10 = t;
		} else if (c >= 5000) {
			int t = 0;
			t = (int)(c / 5000);
			c -= (t * 5000);
			k5 = t;
		} else if (c >= 1000) {
			int t = 0;
			t = (int)(c / 1000);
			c -= (t * 1000);
			k1 = t;
		}
	}
	printf("you need: [%d * $100k,  %d * $50k,  %d * $10k,  %d * $5k,  %d * $1k]\n\n", k100, k50, k10, k5, k1);*/

	//	#33
	/*printf("\n\n#33\tCheck if a number N is a power of 2 and return the exponent:\n\n");
	printf("Please type the number N to check:\t");
	int n = 0;
	double e;
	scanf_s("\t%d", &n);
	if ((e = log2(n)) == (int)log2(n)) {
		printf("%d is the %.0lf power of 2\n\n", n, e);
	}
	else {
		printf("%d is not a power of 2\n\n", n);
	}*/


	//	#100
	printf("\n\n#100\tCreate a program that can print the following sequence of numbers:\n\n" 
			"            1\n"
			"          1   1\n"
			"          2   1\n"
			"       1  2   1  1\n"
			"       3  1   1  2\n"
			"    1  3  2   1  1  2\n"
			"    3  1  1   3  2  2\n\n"
			"  etc...\n"
		);
	printf("\nPlease type how many rows the program shoud print:\t");
	int rows = 0;
	scanf_s("%d", &rows);
	printf("\nPlease type the first number:\t");
	int num = 0;
	scanf_s("%d", &num);
	/*
		- il primo numero e' num
		- rappresentazione grafica:
			5 spazi +
			n(rows) * spazi +
			sequenza(formattata)
		- formattazione:
			if (numero[sequenza[row]] == sequenza[row].count / 2)
			numero + 3 spazi + numero
			else
			numero + 2 spazi + numero
		- foreach(number : sequence[row - 1])
			number.value.count()
			formattazione(count, number)
	*/
	//	format:
	const char left[6] = "     ";
	const char space[2] = " ";

	//	logic:
	//		1) iterate through rows
	//		2) read & count previus line values -> arr[count] = { value0, ... };
	//		3) take values only once & count them -> unique[uCount] = { uniqueValue0, ... };
	//		4) count how many times each { uniqueValue} is represented in arr[] 
	//									-> sequence[uCount] = { n0, uniqueValue0, ..., ... };
	//		5) for each unique value print( n, uValue );

	int *p = (int *)malloc(sizeof *p);
	//	1) iterate through rows
	for (int i = 0; i < rows; i++) {

		if (i == 0){
			*p = num;
			printf("\n\n%s%d", left, *p);
		}
		else {
			
			printf("%s%d", left, *p);
		}

		printf("\n");
	}
	free(p);


    return 0;
}



