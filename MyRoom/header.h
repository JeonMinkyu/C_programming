#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<Windows.h>

typedef struct friends{
	char*name;
	int age;
}Friend;

typedef struct floor{
	Friend*proom;
	struct floor*pnext;
}Floor;

int menu_list(void);//�޴� ���̱�
void make_room_p(char ***room, int size);//�� �����(�ʱ�)
char *make_friend(void);//ģ�� �濡 �ֱ�
void size_trans(char***room,int size_after);//�� ũ�� �ٲٱ�
void move_mate(char***room);//ģ�� �̻�(�����ϱ�)
void move_room(char**room);//�� �̻�(�ٲٱ�)
void show_room(char**room);//�� ���̱�
int input(void);//�̸� ���� �� �Է�
int mystrlen(char*str);//���ڿ� ����
int mycompare(char*str,char*str2);//���ڿ� ��
void mystring(char**str);