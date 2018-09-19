#include"head.h"

void gotoxy(int x, int y){//Ŀ���̵�
        COORD Pos;//(1,1)~(80,25)�� ���
		Pos.X=x-1;
		Pos.Y=y-1;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void show_board(char board[50][50],int m, int n){ // ������ ���� ���
	int i=0,j=0;		
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(board[i][j]=='1') printf("��");
			else if(board[i][j]=='3') printf("��");
			else printf("��");
		}printf("\n");
	}
}



void show_board_mine(char board[50][50],int m, int n){ // ���� ��ġ ����
	int i=0,j=0;		
	for(i=0;i<m;i++){
			gotoxy(30,i+1);
				for(j=0;j<n;j++){
					if(board[i][j]=='2'||board[i][j]=='3')printf("��");
					else printf("��");
				}printf("\n");
		}
}

void random_mine(char board[50][50],int m, int n, int mine){ //���� random���� ���� (������, ���� ����)
	int i=0,j=0;
	int a=0,b=0;
	int count=0;

	for(i=0;i<mine;i++){
		while(1){
			a=rand()%m;
			b=rand()%n;
			if(board[a][b]=='2')
				a;//���ǹ��� �Ѿ�� ���� �׳� ������
			else{
				board[a][b]='2';
				break;
			}
		}
		board[a][b]='2';
	}
}

int input_find(char board[50][50],int m,int n,int mine){ //���� ã�� �Է�

	int i=0, j=0;
	int x=0,y=0;
	int num=0;

	while(1){
		//system("cls");
		printf("�Է�(�����Ϸ��� -1) : \n");
		printf("�� : "); scanf_s("%d",&x,sizeof(x));
			if(x==-1){
				printf("�Է��� �����մϴ�.\n");
				break;
			}
		printf("�� : "); scanf_s("%d",&y,sizeof(y));
		if(x>m || y>n)
			printf("������ ������ϴ�. �ٽ� �Է��� �ּ���\n");
		if(board[x-1][y-1]=='2'){
			printf("���ڸ� ��ҽ��ϴ� (3�� �� ����)");
			Sleep(3000);
			//system("cls");
			break;
		}
		
		//���� �α��� �Է����� �� ���ڸ� �ݷ� ��Ÿ����
		if(board[x-2][y-2]=='2'){//�Է�[x-1][y-1]
			board[x-2][y-2]='3';
			num++;
		}
		if(board[x-2][y-1]=='2'){ 
			board[x-2][y-1]='3';
			num++;
		}
		if(board[x-2][y]=='2'){
			board[x-2][y]='3';
			num++;
		}
		if(board[x-1][y-2]=='2'){
			board[x-1][y-2]='3';
			num++;
		}
		if(board[x-1][y]=='2'){
			board[x-1][y]='3';
			num++;
		}
		if(board[x][y-2]=='2'){
			board[x][y-2]='3';
			num++;
		}
		if(board[x][y-1]=='3'){
			board[x][y-1]='3';
			num++;
		}
		if(board[x][y]=='2'){
			board[x][y]='3';
			num++;
		}
		
		for(i=0;i<m;i++){ //�Է��� ���� 1�� ����
			for(j=0;j<n;j++){
				if(i==(x-1) && j==(y-1))
					board[i][j]='1';
			}
		}
		printf("ã�� ���� ���� : %d\n",num);
		if(num==mine){
			printf("you win!!!\n");
			Sleep(2000);
			break;
		}
	}
}