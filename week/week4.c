#include"head.h"

void week4(void){
	int i=0, j=0;
	int n=0;
	char *shower[6]={"��Ǫ��","�Ӹ�������","�ٵ������","�󱸱���","��Ŭ��¡��","��ġ��"};
	char *food[4]={"��","��ġ","���","����Ķ���"};
	char *subject[5]={"C���α׷���","��Ĵ����","�������","����ǽ�"};
	char *practice[3]={"����","���� �������� ��","�θ�ư"};
	char *state[5]={"�ູ��","������","�ǰ���","��θ�","���밨"};
	system("cls");

	printf("�Ϸ� �ϰ��� �����մϴ�.\n");

	while(1){
		system("cls");
		printf("������ �Ͻðڽ��ϱ�?\n");
		printf("================\n");
		printf("1.����\n");
		printf("2.��Ա�\n");
		printf("3.����\n");
		printf("4.�巳 ����\n");
		printf("5.�׸��ϰ� �ڱ�\n");
		printf("================\n");

		scanf_s("%d",&n,sizeof(n));
		if(n==5){
			printf("���� �Ϸ絵 �����߽��ϴ�. good night...\n");
			Sleep(2000);
			break;
		}
		switch(n){
		case 1:
			wash(shower,state);
			break;
		case 2:
			eat(food,state);
			break;
		case 3:
			do_study(subject,state);
			break;
		case 4:
			drum(practice,state);	
			break;
		}
	}
}
