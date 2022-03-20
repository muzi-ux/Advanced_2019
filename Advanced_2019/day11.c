#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 结构体

// 结构体的定义
struct student {
    char name[20];
    int age;
    char sex;
    char studentID[20];
};

void print(struct student st)
{
    printf("name = %s\tage = %d\tsex = %c \tstudentID = %s\n", st.name, st.age, st.sex, st.studentID);
    return 0;
}

int main()
{
    // 数组是一组相同类型的数据集合
    // 结构体是一组不同类型数据的集合
    // 结构体内可以报错，基本数据类型，数组，和其他结构体

    // 结构体的初始化
    struct student st = {"muzi", 18, 'n', "20220320"};
    struct student* sp = &st;
    // 结构体的调用需要通过 . 调用 也可以通过 -> 调用
    printf("name = %s\tage = %d\tsex = %c \tstudentID = %s\n", st.name, st.age, st.sex, st.studentID);
    // 使用 -> 时需要通过指针指向结构体内的变量
    printf("name = %s\tage = %d\tsex = %c \tstudentID = %s\n", sp->name, sp->age, sp->sex, sp->studentID);
    // 也可以通过结构体指针解引用获取结构体内部变量值
    printf("name = %s\tage = %d\tsex = %c \tstudentID = %s\n", (*sp).name, (*sp).age, (*sp).sex, (*sp).studentID);

    printf("------------------------------------------\n");
    // 结构体参数
    print(st);


    return 0;
}