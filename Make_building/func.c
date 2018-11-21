#include"header.h"

int get_only_num(int limit)
{
	//���ڸ� �Է¹޵��� �ϴ� �Լ�
   char str[11] = "";
   char c = '0';
   int ok = 0;
   unsigned int num = 0;
   int i = 0, j = 0;

   while (!ok)
   {
      for (i = 0;; i++)
      {
         c = getchar();
         if (c == 10 || c == 13)
         {
            break;
         }

         if (c < '0' || c > '9')
         {
            printf("���ڰ� �ƴ� ���� �ֽ��ϴ�. �ٽ� �Է��ϼ��� \n");
            ok = 0;
            break;
         }

         if (i > limit)
         {
            printf("�ڸ��� �ʰ��Դϴ�. �ٽ� �Է��ϼ��� \n");
            ok = 0;
            break;
         }
         str[i] = c;
         ok = 1;
      }
      fflush(stdin);
   }

   //str���� ���ڸ� ����Ǿ� �����Ƿ�,  ���ڷ� ��ȯ. return 
   for (j = 0; j < i; j++)
   {
      num += str[j] - '0';
      num *= 10;
   }
   num = num / 10;

   return num;
}

int show_menu()
{
	//�޴� ���
   int menu = 0;

   printf("##############################################\n");
   printf("1. ģ�� ����Ʈ ������ ��2. ģ�� ó���� �߰�\n");
   printf("3. ģ�� �߰��� �߰���   4. ģ�� ����\n");
   printf("5. ���� ���� ���̱�     6. ����\n");
   printf("##############################################\n");

   menu = get_only_num(1);
   return menu;
}

int mycompare(char*str,char*str2){
	int i=0,a=0;
	if(mystrlen(str)!=mystrlen(str2))
		a=0;
	else{
		for(i=0;i<mystrlen(str);i++)
			if(str[i]==str2[i])
				a=1;
			else
				a=2;
	}
	return a;//a�� 1�̸� �ΰ��� ����
}

int mystrlen(char*str){//���ڿ� ����
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}

void make_friend(Friend*Friends,Friend**head,Friend**tail){
	//list�� ģ�� �߰�
	Friends=(Friend*)malloc(sizeof(Friend));
	if(Friends==NULL){
		printf("����!\n");
		exit(1);
	}
	printf("�̸�? ");
	fgets(Friends->name,20,stdin);
	printf("����? ");
	Friends->age=get_only_num(1);
	printf("���� ��?(���� ����,999�������� ����) ");
	Friends->have_money=get_only_num(2);
	printf("��?(M,F�� �� �ϳ��� �Է����ּ���)");
	scanf_s("%c",&Friends->sex,sizeof(Friends->sex));
	getchar();//���� �����
	Friends->next=NULL;

	if(*head==NULL)
		(*head)=(*tail)=Friends;
	else{
		(*tail)->next=Friends;
		(*tail)=Friends;
	}
}

void add_friend_front(Friend**head){
	//ģ���� list �պκп� �߰��ϱ�
	Friend*new_Friend;
	new_Friend=(Friend*)malloc(sizeof(Friend));

	printf("�̸�? ");
	fgets(new_Friend->name,20,stdin);
	printf("����? ");
	new_Friend->age=get_only_num(1);
	printf("���� ��?(���� ����,999�������� ����) ");
	new_Friend->have_money=get_only_num(2);
	printf("��?(M,F�� �� �ϳ��� �Է����ּ���)");
	scanf_s("%c",&new_Friend->sex,sizeof(new_Friend->sex));
	getchar();
	new_Friend->next=*head; //���� head�ڸ��� �ִ� ���� �տ� �߰��� friend�� next�� ����Ű����
	*head=new_Friend;
}

void add_friend_mid(Friend*pre){
	//ģ���� list �߰��� �߰��ϱ�
	Friend*new_Friend=(Friend*)malloc(sizeof(Friend));
	Friend*Friends_pre=(Friend*)malloc(sizeof(Friend));
	Friends_pre=NULL;

	printf("�̸�? ");
	fgets(new_Friend->name,20,stdin);
	printf("����? ");
	new_Friend->age=get_only_num(1);
	printf("���� ��?(���� ����,999�������� ����) ");
	new_Friend->have_money=get_only_num(2);
	printf("��?(M,F�� �� �ϳ��� �Է����ּ���)");
	scanf_s("%c",&new_Friend->sex,sizeof(new_Friend->sex));
	getchar();

	new_Friend->next=Friends_pre->next;
	Friends_pre->next=new_Friend;
}

void delete_friend(Friend*Friends,Friend**head,Friend**tail){
	//ģ�� ����
	Friend*Friends_pre=(Friend*)malloc(sizeof(Friend));
	char fname[20];//������ ģ�� �Է�
	Friends_pre=NULL;

	printf("���� �� ģ�� �̸���?");
	fgets(fname,20,stdin);
	Friends=*head;//ó������ ã�� ����

	while(Friends!=NULL){
		//if(mycompare(fname,Friends->name)==1){
		if(strcmp(fname,Friends->name)==0){
			printf("%s\n",Friends->name);
			if(Friends==*head)//�ٷ� ó�� ��ġ�� �ִ� ģ�� ����
				*head=Friends->next; //���� ģ���� ����Ű����
			else if(Friends==*tail){//�������� �ִ� ģ�� ����
				Friends_pre->next=NULL;//�� ������ �������� next�� ����Ű�� �Ϳ� Null�� ä���
				*tail=Friends_pre;//tail�� ��ġ�� �ٲ�
			}
			else//�߰��� �ִ� ģ�� ����
				Friends_pre->next=Friends->next;

			free(Friends);
			break;//���� �����ؼ� ã���� break
		}
		Friends_pre=Friends;
		Friends=Friends->next;//��ã���� �������� �Ѿ
	}
}

void show_friend(Friend*Friends,Friend**head){
	//ģ�� list ���
	Friends=*head;//ó������ ����
	if(*head==NULL)
		printf("����Ʈ�� �������� �ʽ��ϴ�.\n");
	else{
		while(Friends!=NULL){
			printf("~~~\n");
			printf("�̸� : %s",Friends->name);
			printf("����? : %d\n",Friends->age);
			printf("���� ��? : %d\n",Friends->have_money);
			printf("��? : %c\n",Friends->sex);
			printf("\n");
			Friends=Friends->next;
		}
	}
}
