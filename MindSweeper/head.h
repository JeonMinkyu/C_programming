#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

void gotoxy(int x, int y);
void show_board(char board[50][50],int m, int n); // ������ ���� ���
void show_board_mine(char board[50][50], int m, int n);//���ڰ� ���̴� ������ ���
void random_mine(char board[50][50],int m, int n, int mine); //���� random���� ����
int input_find(char board[50][50],int m,int n,int mine); //���� ã�� �Է�

