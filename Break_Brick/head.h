#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

#define MINX 1
#define MINY 1
#define MAXX 25
#define MAXY 80
#define ESC 27
#define ENTER 13
#define SPACE 32

void gotoxy(int x, int y);//Ŀ�� �̵�
int print_box(void);//�׵θ� �׸���
void print_dot(int x, int y, char*c);//�� ���
void bar(int x, char c);//bar ���
void delete_bar(int bar_x);//bar �����(�̵��ϴ� ��ó�� ���̱� ����)
void Color(int x);//text�� �ٲٱ�
void brick(int x, int y);//���� ���
int random(void);
void cursor(void);//Ŀ�� ������ ���ֱ�