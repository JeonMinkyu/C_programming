#include"head.h"

int menu_display(void){
        int num=0;
        char*main_menu[3]={"Coffee","Juice","����"};
		printf("============���� �޴�===========\n");
        for(num=0;num<3;num++){
                printf("%d. %s\n",num+1,main_menu[num]);
        }

        printf("�޴��� ���ÿ�: ");
        scanf_s("%d",&num,sizeof(num));

        return num;
}

int sub_menu_display(int menu){
        int num=0;
        system("cls");
        printf("============���� �޴�============\n");
        if(menu==1)
                coffee();
        else if(menu==2)
                juice();
        printf("������� �ֹ��Ͻðڽ��ϱ�?(����-1)");
		scanf_s("%d",&num,sizeof(num));
        return num;
}

void coffee(void){
        int i=0;
        char*coffee_1[4]={"�Ƹ޸�ī��(3000)","ī���(3500)","ī���ī(3500)","���θ޴��� �̵�"};

        for(i=0;i<4;i++){
                printf("%d. %s\n",i+1,coffee_1[i]);
        }

}
void juice(void){
        int i=0;
        char*juice_1[4]={"�������꽺(3000)","����꽺(2500)","Ű���꽺(3500)","���θ޴��� �̵�"};
        for(i=0;i<4;i++){
                printf("%d. %s\n",i+1,juice_1[i]);
        }
}

void option(int price[3],int menu,int sub){//�޴��� ����
	int i=0,n=0,num=0;
	int coffee_price[3]={3000,3500,3500};
	int juice_price[3]={3000,2500,3500};
	int hot_price[3]={0,0,0};
	int ice_price[3]={500,500,500};
	int dc_card[3]={500,500,500};

	printf("�ɼ��� �����Ͻÿ� : ");
	printf("===============\n");
	printf("0.�ɼ� �ʿ����\n");
	printf("1.hot\n");
	printf("2.ice\n");
	printf("3.coupon\n");
	printf("4.D/C card\n");
	printf("===============\n");
	scanf("%d",&num);
	system("cls");
	switch(num){
		case 0 :
			if(menu==1)
						price[sub-1]=coffee_price[sub-1];
					else if(menu==2)
						price[sub-1]=juice_price[sub-1];
			break;
		case 1 :
				if(menu==1)
					price[sub-1]=coffee_price[sub-1]+hot_price[sub-1];
				else if(menu==2)
					price[sub-1]=juice_price[sub-1]+hot_price[sub-1];
			break;
		case 2:
				if(menu==1)
					price[sub-1]=coffee_price[sub-1]+ice_price[sub-1];
				else if(menu==2)
					price[sub-1]=juice_price[sub-1]+ice_price[sub-1];
			break;
		case 3:
			printf("������ 10�� �����̽��ϱ�?");
			printf("1. yes, 2.no\n");
			scanf_s("%d",&n,sizeof(n));
			if(n==1){
				printf("�����Դϴ�.\n");
					price[sub-1]=0;
			}
			else if(n==2){
				printf("������ 10����� ��� �����մϴ�.\n");
					if(menu==1)
						price[sub-1]=coffee_price[sub-1];
					else if(menu==2)
						price[sub-1]=juice_price[sub-1];
			}
			break;

		case 4:
			for(i=0;i<3;i++){
				if(menu==1)
					price[sub-1]=(coffee_price[sub-1]-dc_card[sub-1]);
				else if(menu==2)
					price[sub-1]=(juice_price[sub-1]-dc_card[sub-1]);
			}
			break;
	}
}

int output(int price[3],int menu,int sub){
	int total=0;
		if(menu==1){
			if(sub==1){
				option(price,menu,sub);
		        printf("�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�.\n");
				printf("���� : %d\n",price[sub-1]);
				total=price[sub-1];
			}
			else if (sub==2){
				option(price,menu,sub);
				printf("ī��� �ֹ��ϼ̽��ϴ�.\n");
				printf("���� : %d\n",price[sub-1]);
				total=price[sub-1];
			}
			else if(sub==3){
				option(price,menu,sub);
				printf("ī���ī �ֹ��ϼ̽��ϴ�.\n");
				printf("���� : %d\n",price[sub-1]);
				total=price[sub-1];
			}
			else if(sub==4)
				menu_display();
		}
		else if(menu==2){
			if(sub==1){
				option(price,menu,sub);
				printf("�������꽺 �ֹ��ϼ̽��ϴ�.\n");
				printf("���� : %d\n",price[sub-1]);
				total=price[sub-1];
			}
			else if(sub==2){
				option(price,menu,sub);
				printf("����꽺 �ֹ��ϼ̽��ϴ�.\n");
				printf("���� : %d\n",price[sub-1]);
				total=price[sub-1];
			}
			else if(sub==3){
				option(price,menu,sub);
				printf("Ű���꽺 �ֹ��ϼ̽��ϴ�.\n");
				printf("���� : %d\n",price[sub-1]);
				total=price[sub-1];
			}
			else if(sub==4)
				menu_display();
		}return total;
}