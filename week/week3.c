#include"head.h"
//1.�¼� ���̱�
//2.�¼� �����ϱ�  -> �޴����� �����
//3.�¼� ����ϱ�
void week3(void){
	int i=0,j=0;
	int m=0,n=0;//m�� n��
	int num=0;
	char the[10][10]={""};
	for(i=0;i<10;i++){//10*10�迭
		for(j=0;j<10;j++){
			the[i][j]='0';
		}
	}
	system("cls");
	while(1){
		menu();

		printf("�޴��� �Է��Ͻÿ� : ");
		scanf_s("%d",&num,sizeof(num));
		if(num==4)
			break;
		system("cls");
		switch(num){
		case 1:
			printf("1.�¼� ���̱�\n");
			show_seat(the,m,n);
			break;
	
		case 2:
			printf("2.�¼� �����ϱ�\n");
			reserve_seat(the,m,n);
			
			break;
		case 3:
			printf("3.�¼� ����ϱ�\n");
			cancel_seat(the,m,n);
			break;		
		}
	}	
}