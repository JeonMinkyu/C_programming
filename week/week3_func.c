#include"head.h"

void menu(void){
	printf("=======�޴�=======\n");
		printf("1.�¼� ���̱�\n");
		printf("2.�¼� �����ϱ�\n");
		printf("3.�¼� ����ϱ�\n");
		printf("4.����\n");
		printf("==================\n");
}		
		
void show_seat(char the[10][10]){
	int i=0,j=0;		
	for(i=0;i<10;i++){
				for(j=0;j<10;j++){
					if(the[i][j]=='1')printf("��");
					else printf("��");
				}printf("\n");
			}
}

void reserve_seat(char the[10][10],int m,int n){
	int i=0, j=0;
	while(1){
		printf("�¼��� �Է����ּ���(�����Ϸ��� -1)\n");
		printf("�� : "); scanf_s("%d",&m,sizeof(m));
			if(m==-1){
				printf("�����մϴ�.\n");
				break;
			}
		printf("�� : "); scanf_s("%d",&n,sizeof(n));
		if(m>10 || n>10)
			printf("�ڸ��� �������� �ʽ��ϴ�. �ٽ� �Է��� �ּ���\n");
		if(the[m-1][n-1]=='1'){
			printf("�̹� ���ֽ��ϴ�.\n");
		}		
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(i==m && j==n)
					the[i-1][j-1]='1';
			}
		}
	}
}

void cancel_seat(char the[10][10],int m, int n){
	int i=0,j=0;
	printf("��� �ڸ��� ����Ͻðڽ��ϱ�\n");
			printf("��:");scanf_s("%d",&m,sizeof(m));
			printf("��:");scanf_s("%d",&n,sizeof(n));
			for(i=0;i<10;i++){
				for(j=0;j<10;j++){
					if(i==m && j==n)
						the[i-1][j-1]='0';
				}
		}
}