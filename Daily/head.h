#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

//week1
int menu_display(void);//�ָ޴��� ����ϰ� �Է°� ����
int sub_menu_display(int menu);//����޴��� ����ϰ� �Է°� ����
void coffee(void);//Ŀ�� �θ޴� ���
void juice(void);//�꽺 �θ޴� ���
void option(int price[3],int menu,int sub);//�ɼ� ���
int output(int price[3],int menu,int sub);


//week2
void gotoxy(int x, int y);
void show_board(char board[50][50],int m, int n); // ������ ���� ���
void show_board_mine(char board[50][50], int m, int n);//���ڰ� ���̴� ������ ���
void random_mine(char board[50][50],int m, int n, int mine); //���� random���� ����
int input_find(char board[50][50],int m,int n,int mine); //���� ã�� �Է�



//week3
void show_seat(char the[10][10],int i, int j);
void reserve_seat(char the[10][10],int i,int j);
void cancel_seat(char the[10][10],int i, int j);
void menu(void);

//week4
int wash(char* shower[6],char *state[5]);
int eat(char* food[4],char *state[5]);
int do_study(char* subject[4],char *state[5]);
int drum(char* practice[4],char *state[5]);