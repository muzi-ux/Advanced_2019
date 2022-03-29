#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

#define N 6

int m12()
{
    //char a = 128;
    // 00000000000000000000000010000000
    // 10000000
    // // 111111111111111111111101111111
    // // 111111111111111111111111111110
    // 11111110
    // 11111111111111111111111111111110
    //  10000000
    //printf("%u\n", a);

   // int i = -20;
    // 10000000000000000000000000010100
    // 11111111111111111111111111101011
    // 11111111111111111111111111101100
    //unsigned int j = 10;
    // 00000000000000000000000000001010
    // 11101100
    // 00001010
    // 11110110
    // 11111111111111111111111111110110
    // 10000000000000000000000000001001
    // 10000000000000000000000000001010

    //printf("%d\n", i + j);

    //unsigned char z = 0;
    //for (z = 0; z <= 255; z++)
    //{
    //    printf("%u\n", z);
    //}
    //void print_value(int* x);
    //int a = 25; 
    //print_value(&a);


    //int a, k = 4, m = 4, * p1 = &k, * p2 = &m;
    //a = p1 == &m;
    //printf("%d\n", a);

    //char str[20], * p = str;
    //scanf("%s", p[2]);

    //unsigned long long studentID = 0;
    //double sx = 0;
    //double yy = 0;
    //double c = 0;

    //scanf("%lld;%lf,%lf,%lf", &studentID, &c, &sx, &yy);
    //printf("The each subject score of No. %lld is %.2f, %.2f, %.2f", studentID, round(c), round(sx), round(yy));
    //char zh(char z);

    //char a = 0;
    //char b = 0;
    //a = getchar();
    //getchar();
    //b = getchar();
    //putchar(zh(a));
    //printf("\n");
    //putchar(zh(b));

    //int i = 1234;
    //printf("0%o 0X%X", i, i);

    //int plan = 0;
    //int postpone = 0;
    //int gap = 0;
    //scanf("%d %d", &plan, &postpone);
    //gap = (postpone + plan);
    //while (gap > 7)
    //    gap %= 7;
    //printf("%d", gap);

    //int a = 0;
    //scanf("%d", &a);
    //int i = 0;
    //i = 1 << a;
    //printf("%d", i);

    //int age = 0;
    //scanf("%d", &age);
    //long long i = age * 31560000;
    //printf("%lld", i);

    //float max = 0;
    //float min = 0;
    //float average = 0;
    //int input = 0;
    //float i = 0;
    //scanf("%d", &input);
    //int a = input;
    //while (input > 0)
    //{
    //    scanf("%f", &i);
    //    if (a == input)
    //    {
    //        max = i;
    //        min = i;
    //    }
    //    if (i > max)
    //        max = i;
    //    if (i < min)
    //        min = i;
    //    average += i;
    //    input--;
    //}
    //average = average / input;
    //printf("%.2f %.2f %.2f", max, min, average);

    //float b1 = 0, b2 = 0, b3 = 0;
    //float perimeter = 0;
    //float perimeter_2 = 0;
    //float area = 0;
    //scanf("%f %f %f", &b1, &b2, &b3);

    //perimeter = b1 + b2 + b3;
    //perimeter_2 = perimeter / 2;
    //area = sqrt(perimeter_2 * (perimeter_2 - b1) * (perimeter_2 - b2) * (perimeter_2 - b3));
    //printf("circumference=%.2f area=%.2f", perimeter_2, area);

    //int m = 0, n = 0, h = 0;
    //scanf("%d %d %d", &n, &h, &m);
    //float result = m / (float)h;
    //int i = 0;
    //i = result;
    //i = i + (result - i > 0 ? 1 : 0);
    //printf("%d", n - i);

    //float fahrenheit = 0;
    //scanf("%f", &fahrenheit);
    //float i = 0;
    //i = 5.0 / 9.0 * (fahrenheit - 32);
    //i = i * 1000 + 0.5;
    //printf("%.3lf", i / 1000.0);


    //int hour = 0; // 小时
    //int minute = 0;// 分钟
    //int myHour = 0;
    //int myMinute = 0;
    //int input = 0;
    //scanf("%d:%d %d", &hour, &minute, &input);
    //myMinute += input+minute; // 更新分钟数
    //myHour += myMinute / 60;
    //hour += myHour;
    //hour = hour > 24 ? hour % 24 : hour;
    //printf("%02d:%02d\n", hour, myMinute % 60);
    //int gcd2(int a, int b);
    //unsigned long approximation = 0; // 最大公约数
    //unsigned long multpile = 0; // 最小公倍数
    //unsigned long n = 0, m = 0;
    //scanf("%d %d", &n, &m);
    //approximation = gcd2(n, m);
    //// 两数相乘的积除以这两个数的最大公约数就是最小公倍数
    //multpile = (n * m) / approximation;
    //printf("%ld", multpile + approximation);

    //float i = 222222.0;
    //while (i != 0)
    //{
    //    i /= 10;
    //    printf("%f ", i );
    //    printf("%f\n", (unsigned int)i%10);
    //}
        //int input = 0;
        //int integer = 0;
        //int p[20] = { 0 };
        //int len = 19;
        //scanf("%d", &input);
        //integer = input;

        //while (input > 0)
        //{
        //    integer = input % 10;
        //    if (integer % 2 == 0)
        //        p[len] = 0;
        //    else
        //        p[len] = 1;
        //    len--;
        //    input /= 10;
        //}

        //len++;
        //int result = 0;
        //while (len < 20)
        //{
        //    result = result * 10 + p[len];
        //    len++;
        //}
        //printf("%d", result);

    //float experimentalResults = 0; // 实验成绩
    //float classroomPerformance = 0; // 课堂表现
    //float process = 0; // 过程成绩
    //float computerPerformance = 0;// 上机成绩

    //scanf("%f %f %f %f", &experimentalResults, &classroomPerformance, &process, &computerPerformance);
    //float totalGrade = 0;
    //totalGrade = (experimentalResults * 0.2) + (classroomPerformance * 0.1) + (process * 0.2) + (computerPerformance * 0.5);
    //printf("%.2f\n", totalGrade);

    //char a = 0;
    //while (1)
    //{
    //    scanf("%c", &a);
    //    if (a == EOF || a == '\n')
    //    {
    //        getchar();
    //        continue;
    //    }
    //    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    //        printf("Vowel\n");
    //    if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    //        printf("Vowel\n");
    //    else
    //        printf("Consonant\n");
    //}

    //char theLetter = 0;
    //scanf("%c", &theLetter);
    //if ((theLetter >= 'a' && theLetter <= 'z') || (theLetter >= 'A' && theLetter <= 'Z'))
    //    printf("YES\n");
    //else
    //printf("NO\n");
    //float height = 0, wigth = 0;
    //scanf("%f %f", &wigth, &height);
    //float bmi = 0;
    //bmi = wigth / (height * height);
    //if (18.5 <= bmi && 23.9 >= bmi)
    //{
    //    printf("Nomal\n");
    //}
    //else {
    //    printf("Abnormal\n");
    //}

    //char character = 0;
    //while ((character = getcahr()) != EOF)
    //{
    //    if (character == '\n')
    //        continue;
    //    if (character >= 'a' && character <= 'z')
    //        printf("%c is an alphabet.", character);
    //    else if ('A' <= character && 'Z' >= character)
    //        printf("%c is an alphabet.", character);
    //    else
    //        printf("%cis not an alphabet.", character);
    //}

    //#include <stdio.h> 
    //#define N 6
    //int main()
    //{
    //    int i, j, y[N][N];
    //    for (i = 0; i < N; i++)
    //        y[i][0] = y[j][i] = 1;
    //    for (i=0; i < N; i++)
    //        for (j = 1; j<i; j++)
    //            y[i][j] = c;
    //    for (i=0; i < N; i++)
    //    {
    //        for (j = 0; j<=i; j++)
    //            printf("%3d", y[i][j]);
    //        printf("\n");
    //    }
    //    return 0;
    //}

    //int i, j, y[N][N];
    //for (i = 0; i < N; i++)
    //    y[i][0] = y[i][i] = 1;
    //for (i = 0; i < N; i++)
    //    for (j = 1; j < i; j++)
    //        y[i][j] = y[i - 1][j - 1] + y[i - 1][j];
    //for (i = 0; i < N; i++)
    //{
    //    for (j = 0; j <= i; j++)
    //        printf("%3d", y[i][j]);
    //    printf("\n");
    //}
    //int fun(int x, int y);
    //int a = 48, b = 53, c;
    //c = fun(a, b);
    //printf("c=%d\n", c);

    //int  n = 37;
    //printf("%d\n", func(n));

    //int    i;
    //for (i = 1; i <= 5; i++)
    //printf("%d!=%d\n", i, f(i));

    int  i, a[4] = { 1111,2222,3333,4444 }, * p;
    p = a;
    for (i = 0; i < 4; i++)
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));




    return 0;
}

int f(int n)
{
    int  i, j = 1;
    for (i = 1; i <= n; i++)
        j = j * i;
    return  j;
}


int func(int num)
{
    int x = 1;
    do
    {
        x *= num % 10;
        num /= 10;
    } while (num);
    return x;
}


int fun(int x, int y)
{
    int a[N], c;
    a[0] = x / 10;
    a[1] = y / 10;
    a[2] = x % 10;
    a[3] = y % 10;
    c = a[3] * 1000 + a[0] * 100 + a[1] * 10 + a[2];
    return c;
}


// 求最大公约数
int commonDivisor(int number1, int number2)
{
    while (number2 != 0)
    {
        int divisor = number1 % number2; // 求两数的余数
        number1 = number2; // 吧后一位给前一位
        number2 = divisor; // 吧余数给到后一位
    }
    return number1;
}

void print_value(int* x)
{
    printf("% d\n" , ++ * x);
}

//char zh(char z)
//{
//    if (z >= 'a' && z <= 'z')
//    {
//        return z -= 32;
//    }
//    else if (z >= 'A' && z <= 'Z')
//    {
//        return z += 32;
//    }
//}

// 最大公约数
int gcd2(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}