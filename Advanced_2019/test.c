#define _CRT_SECURE_NO_WARNINGS 1
//
////#include <stdio.h> 
////void sort(float *a, int n)
////{
////    int i, j;
////    int t = 0;
////        for (i = 0; i < n - 1; i++)
////        {
////            for (j = 0; j<i; j++)
////                if (a[j] > a[j + 1]) { t = a[j]; a[i] = a[i+1]; a[j + 1] = t; }
////        }
////}
////int main()
////{
////    float a[10] = { 12,6,33,8,53,62,9,10,27,46 };
////    int i;
////    sort(a, sizeof(a)/sizeof(a[0]));
////    for (i = 0; i < 10; i++)
////        printf("%.0f ", a[i]);
////    printf("\n");
////    return 0;
////}
//
//
///*
//
//#include <stdio.h>
//    void sort(int a[10], int n)
//    {
//        int i,j;
//        int t;
//       for( i = 0; i < n-1; i++ )
//       {
//          for( j = 0; j<=i ; j++ )
//               if( a[j] > a[j+1] )   { t = a[j]; a[j] = a[j+1]; a[j+1] = t; }
//       }
//    }
//    int main()
//    {
//        float a[10] = { 12,6,33,8,53,62,9,10,27,46 };
//        int i;
//        sort(a,11) ;
//        for( i = 0; i < 10; i++)
//    printf( "%.0f ",a[i] );
//       printf( "\n" );
//       return 0;
//    }
//
//
//*/
//
////#include <stdio.h>
////void sort(int a[10], int n)
////{
////    int i, j;
////    int t;
////    for (i = 0; i < n - 1; i++)
////    {
////        for (j = 0; j <= i; j++)
////            if (a[j] > a[j + 1]) { t = a[j]; a[j] = a[j + 1]; a[j + 1] = t; }
////    }
////}
////int main()
////{
////    float a[10] = { 12,6,33,8,53,62,9,10,27,46 };
////    int i;
////    sort(a, 10);
////    for (i = 0; i < 10; i++)
////        printf("%.0f ", a[i]);
////    printf("\n");
////    return 0;
////}
//
////#include <stdio.h> 
////#define   N    20
////int average(int score[], int* max, int* min)
////{
////    int i, ave;
////    ave = score[0];
////    *max = *min = ave;
////    for (i = 1; i < sizeof(score) / sizeof(score[0]); i++)
////    {
////        ave += score[i];
////        if (score[i] > *max)
////            *max = score[i];
////        if (score[i] < *min)
////            *min = score[i];
////    }
////    ave = ave / (sizeof(score) / sizeof(score[0]));
////    return   ave;
////}
////int main()
////{
////    int array[N], i, ave=0, max=0, min=0;
////    for (i = 0; i < N; i++)
////        scanf("%d", &array[i]);
////    // ave = average(array, &max, &min);
////    printf("max = %d\nmin = %d\n ", max, min);
////    printf("ave = %d\n", ave);
////    return 0;
////}
//#include <stdio.h>
//void my_fun(char* s, int* t)
//{
//    int count = 0;
//    while ((*s) != '\0')
//    {
//        if ((*s) == '*')
//            count++;
//        s++;
//    }
//    *t = count;
//}
//
//int main()
//{
//    //char s[200];
//    //int t = 0;
//    //scanf("%s", s);
//    //my_fun(s, &t);
//    //printf("%d", t);
//
//    float weight = 0;
//    char expedited = 0;
//    int integer = 0;
//    int money = 0;
//
//    scanf("%f %c", &weight, &expedited);
//    money = 20;
//    if (0 < weight && 1 > weight)
//    {
//        // 不超过一千克
//        money += 0;
//    }
//    if (1 < weight)
//    {
//        // 超过一千克
//        integer = weight;
//        weight - integer > 0 ? integer ++ : integer;
//        integer *= 1;
//    }
//    if (expedited == 'y')
//    {
//        // 加急
//        money += 5;
//    }
//    money += integer;
//    printf("%d", money);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int t = 0;
//    while ((scanf("%d", &t)) != EOF)
//    {
//        if (t > 0)
//            printf("1");
//        if (t == 0)
//            printf("0.5");
//        if (t < 0)
//            printf("0");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
    //int a, b, c;
    //while ((scanf("%d %d %d", &a, &b, &c)) != EOF)
    //{
    //    if (a + b > c && a + c > b && b + c > a) {
    //        if (a == b && a == c && b == c)
    //        {
    //            printf("Equilateral triangle!\n");
    //        }
    //        else if (a == b || a == c || b == c)
    //        {
    //            printf("Isosceles triangle!\n");
    //        }
    //        else
    //            printf("Ordinary triangle!\n");
    //    }
    //    else {
    //        printf("Not a triangle!\n");
    //    }
    //}

    //printf("%d\n", sizeof(int));
    //printf("%d\n", sizeof(long));
    //printf("%d\n", sizeof (long long));
    //int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    //int* p = arr;
    //printf("%d\n", *(p + 5));
    //printf("%d\n", p[5]);
    //(x + 1 = x + 1)

//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    float a = 0, b = 0, c = 0;
//    scanf("%f %f %f", &a, &b, &c);
//    float result = 0;
//    float x1 = 0, x2 = 0;
//    if (a != 0)
//    {
//        //result = b * b - 4 * a * c;
//        //result = sqrt(result);
//        if (sqrt(result) > 0)
//        {
//            x1 = (-b - sqrt(result)) / (2 * a);
//            x2 = (-b + sqrt(result)) / (2 * a);
//            printf("x1=%.2f;x2=%.2f", x1, x2);
//        }
//        else if (sqrt(result) == 0)
//        {
//            printf("x1=x2=%.2f", -b / (2 * a) == 0 ? 0 : -b / (2 * a));
//        }
//        else if (sqrt(result) < 0)
//        {
//            // -b / (2 * a); // 实部
//            // sqrt(-result) / (2 * a); //虚部
//            printf("x1=%.2f-%.2f;x2=%.2f+%.2f", -b / (2 * a), sqrt(-result) / (2 * a), -b / (2 * a), sqrt(-result) / (2 * a));
//        }
//    }
//    else if (a == 0)
//        printf("Not quadratic equation");
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    unsigned int a = 0, b = 0, c = 0, d = 0;
//    // scanf("%1d-%3d%4d%5d-%7d%8d%9d%10d%11d-%13d", &a, &b, &c, &d, &e, &f, &h, &i, &j, &k);
//    scanf("%d-%d-%d-%d", &a, &b, &c, &d);
//    printf("%d %d %d %d ", a, b, c, d);
//
//
//    return 0;
//}

//#include <stdio.h>
//
//int multiply(int number, int start)
//{
//    int result = 0;
//    while (number)
//    {
//        int r = 0;
//        r = number % 10 * start;
//        result += r;
//        start--;
//        number /= 10;
//    }
//    return result;
//}
//
//int main()
//{
//    unsigned int a = 0, b = 0, c = 0, d = 0;
//    scanf("%d-%d-%d-%d", &a, &b, &c, &d);
//    int result = 0;
//    // 33 + 125     32 
//    result = a * 1 + multiply(b, 4) + multiply(c, 9);
//    if (result % 11 == d || result % 11 == 10)
//        printf("Right");
//    else
//        printf("%d-%d-%d-%d", a, b, c, result % 11);
//
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int prime_number(int i) {
    int a = 0;
    for (a = 2; a <= sqrt(i); a++) {
        if (i % a == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i = 100;
    int flag = 1;
    int sum = 0;

    //while (i < 1000) {
    //    if (prime_number(i))
    //        sum++;
    //    i++;
    //}
    printf("%d\n", prime_number(3));
    printf("%d\n", sum);
    return 0;
}