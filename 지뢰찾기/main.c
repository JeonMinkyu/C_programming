#include"head.h"

int main(void){
	int i=0,j=0;
	int a=0;
	int m=0,n=0;//m�� n��
	int num=0;
	int mine=0;
	char board[50][50]={""};
	srand((unsigned)time(NULL));
	system("cls");
    printf("�ڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
	printf("�ڡ��� �� ã �� �� ��!�ڡ�\n");
	printf("�ڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
	Sleep(2000);
	system("cls");
	while(1){
		gotoxy(1,n+1);//�׸� �Ʒ��� �Է��� �ޱ� ���� Ŀ���� �ű�
		printf("ũ�⸦ �����Ͻÿ�(���� : -2)\n");
		printf("���� : ");
		scanf_s("%d",&m,sizeof(m));
		if(m==-2){
			printf("�����մϴ�.\n");
			break;
		}
		printf("���� : ");
		scanf_s("%d",&n,sizeof(n));

		for(i=0;i<m;i++){//m*n�迭
			for(j=0;j<n;j++){
				board[i][j]='0';
			}
		}
		printf("������ ������ �����Ͻÿ� : ");
		scanf_s("%d",&mine,sizeof(mine));
		system("cls");

		show_board(board,m,n);//ó�� �� ���
		random_mine(board,m, n, mine);//���� mine�� ��ŭ ���� ��ġ
		show_board_mine(board,m,n);//���ڰ� ���Ե� �� ���(main�� �����ʿ�)
		
		a=input_find(board,m,n,mine);
		system("cls");

		show_board(board,m,n);
		show_board_mine(board,m,n);
		
		//gotoxy(1,50);
		//printf("ã�� ���� ���� : %d\n",num);
	}
}
