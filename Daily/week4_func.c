#include"head.h"

int wash(char* shower[6],char *state[5]){
	int i=0;
	printf("������ �����մϴ�.\n");
	for(i=0;i<6;i++){
		printf("%s... \n",*(shower+i));		
		Sleep(1000);
	}
	printf("%s!!\n",*(state+1));
	printf("�� �ľ����ϴ�. ���� �۰� �����ϴ�.\n");
	Sleep(2000);

}

int eat(char* food[4],char *state[5]){
	int i=0;
	int num=0;
	printf("�Ļ縦 �����մϴ�.\n");
	while(1){
	printf("������ ��ðڽ��ϱ�?\n");
	printf("================\n");
	printf("1.��\n");
	printf("2.��ġ\n");
	printf("3.���\n");
	printf("4.����Ķ���\n");
	printf("5.����\n");
	printf("================\n");

	scanf_s("%d",&num,sizeof(num));
	
	if(num==5){
		printf("�� �Ծ����ϴ�.\n");
		break;
	}
		switch(num){
		case 1:
			printf("%s�� �Դ����Դϴ�. \n",*(food+(num-1)));
			Sleep(1000);
			break;
		case 2:
			printf("%s�� �Դ� ���Դϴ�.\n",*(food+(num-1)));
			Sleep(1000);
			break;
		case 3:
		printf("%s�� �Դ� ���Դϴ�.\n",*(food+(num-1)));
			Sleep(1000);
			break;
		case 4:
			printf("%s�� �Դ� ���Դϴ�.\n",*(food+(num-1)));
			Sleep(1000);
			break;
		}
	}
	printf("%s!!\n",*(state+3));
	printf("%s!!\n",*(state));
	Sleep(2000);
}
int do_study(char* subject[4],char *state[5]){
	int i=0, num=0;
	printf("���θ� �����մϴ�.\n");
	while(1){
		printf("� ������ �����ϰڽ��ϱ�?\n");
		printf("======================\n");
		printf("1.C���α׷���\n");
		printf("2.��Ĵ����\n");
		printf("3.�������\n");
		printf("4.����ǽ�\n");
		printf("5.�׸�\n");
		printf("======================\n");

		scanf_s("%d",&num,sizeof(num));
		if(num==5){
			printf("�ʹ� �ǰ��մϴ�. �� ���°� ���� �� �����ϴ�.\n");
			break;
		}
	switch(num){
		case 1:
			printf("%s ������ �����մϴ� \n",*(subject+(num-1)));
			printf("��Ʈ�� ������...\n");
			Sleep(1000);
			printf("visual C++�� �մϴ�\n");
			printf("����ã�� ������ �����ϱ� ���� ����մϴ�.\n");
			Sleep(1000);
			printf("�ڵ��� �����մϴ�.\n");
			Sleep(2000);
			printf("������ �Ϸ��Ͽ����ϴ�.\n");
			printf("%s!!\n",*(state+2));
			printf("%s!!\n",*(state+4));
			Sleep(2000);
			break;
		case 2:
			printf("%s ���θ� �����մϴ�.\n",*(subject+(num-1)));
			printf("���������å�� ��ϴ�.\n");
			printf("linearly independent�� ���� ������ �����մϴ�.\n");
			Sleep(1000);
			printf("%s!!\n",*(state+2));
			printf("%s!!\n",*(state+4));
			Sleep(2000);
			break;
		case 3:
			printf("%s�� �����մϴ�.\n",*(subject+(num-1)));
			printf("�������� å�� ��ϴ�.\n");
			printf("�ʱ� ����� �Բ� ���� ��\n");
			Sleep(1000);
			printf("�������� Ǯ�̷� �Ѿ�ϴ�.\n");
			Sleep(1000);
			printf("%s!!\n",*(state+2));
			printf("%s!!\n",*(state+4));
			Sleep(2000);
			break;
		case 4:
			printf("%s�� �����մϴ�.\n",*(subject+(num-1)));
			printf("��Ʈ���� �����մϴ�.\n");
			Sleep(1000);
			printf("r studio ���α׷��� �մϴ�.\n");
			Sleep(1000);
			printf("å�� �ִ� ������������ �ڵ��غ��ϴ�.\n");
			Sleep(1000);
			printf("%s!!\n",*(state+2));
			printf("%s!!\n",*(state+4));
			Sleep(2000);
			break;
		}
	}
}


int drum(char* practice[4],char *state[5]){
	int num=0;
	printf("�巳 ������ �����մϴ�.\n");
	printf("���Ƹ��� ������...\n");
	Sleep(1000);
	printf("���Ƹ��濡 �����߽��ϴ�.\n");
	while(1){
		printf("� ���� ���� �ϰڽ��ϱ�?\n");
		printf("===================\n");
		printf("1.����\n");
		printf("2.���� �������� ��\n");
		printf("3.�θ�ư\n");
		printf("4.�׸�\n");
		printf("===================\n");
	
		scanf_s("%d",&num,sizeof(num));
		printf("�巳 ��ƽ�� �����ϴ�.\n");
		Sleep(1000);
		if(num==4){
			printf("����� �����߽��ϴ�. ������ �����ϴ�.\n");
			printf("%s!!\n",*(state+0));
			printf("%s!!\n",*(state+4));
			Sleep(2000);
			break;
		}
			switch(num){
			case 1:
				printf("%s�� �����մϴ�. \n",*(practice+(num-1)));
				printf("�Ǻ��� �����ϴ�.\n");
				Sleep(1000);
				printf("�뷡�� Ƶ�ϴ�.\n");
				printf("%s��� �뷡�� ���߾� �巳�� Ĩ�ϴ�.\n",*(practice+(num-1)));
				Sleep(1000);
				break;
			case 2:
				printf("%s�� �����մϴ�. \n",*(practice+(num-1)));
				printf("�Ǻ��� �����ϴ�.\n");
				Sleep(1000);
				printf("�뷡�� Ƶ�ϴ�.\n");
				printf("%s��� �뷡�� ���߾� �巳�� Ĩ�ϴ�.\n",*(practice+(num-1)));
				Sleep(1000);
				break;
			case 3:
				printf("%s�� �����մϴ�. \n",*(practice+(num-1)));
				printf("�Ǻ��� �����ϴ�.\n");
				Sleep(1000);
				printf("�뷡�� Ƶ�ϴ�.\n");
				printf("%s��� �뷡�� ���߾� �巳�� Ĩ�ϴ�.\n",*(practice+(num-1)));
				Sleep(1000);
				break;
			}
	}
}
