#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// �ṹ��

// �ṹ��Ķ���
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
    // ������һ����ͬ���͵����ݼ���
    // �ṹ����һ�鲻ͬ�������ݵļ���
    // �ṹ���ڿ��Ա��������������ͣ����飬�������ṹ��

    // �ṹ��ĳ�ʼ��
    struct student st = {"muzi", 18, 'n', "20220320"};
    struct student* sp = &st;
    // �ṹ��ĵ�����Ҫͨ�� . ���� Ҳ����ͨ�� -> ����
    printf("name = %s\tage = %d\tsex = %c \tstudentID = %s\n", st.name, st.age, st.sex, st.studentID);
    // ʹ�� -> ʱ��Ҫͨ��ָ��ָ��ṹ���ڵı���
    printf("name = %s\tage = %d\tsex = %c \tstudentID = %s\n", sp->name, sp->age, sp->sex, sp->studentID);
    // Ҳ����ͨ���ṹ��ָ������û�ȡ�ṹ���ڲ�����ֵ
    printf("name = %s\tage = %d\tsex = %c \tstudentID = %s\n", (*sp).name, (*sp).age, (*sp).sex, (*sp).studentID);

    printf("------------------------------------------\n");
    // �ṹ�����
    print(st);


    return 0;
}