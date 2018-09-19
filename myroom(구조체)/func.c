#include"header.h"

int menu_list(void){
	int menu=0;
	printf("=======MY_Room_mate======\n");
	printf("1.my_room����� \n");
	printf("2.my_roomũ�� �����ϱ� \n");
	printf("3.room mate �߰��ϱ�\n");
	printf("4.room mate �̻��ϱ�\n");
	printf("5.my room �̻��ϱ�\n");
	printf("6.���� room ��Ȳ ���\n");
	printf("7.����\n");
	printf("=========================\n");
	printf("�޴��� �����Ͻÿ� : ");
	scanf_s("%d",&menu,sizeof(menu));
	return menu;
}


void make_room_p(char ***room,int size){//ó�� �� �����(�� �ּҸ� ���ڷ�)
	int i=0;
	*room=(char**)malloc(sizeof(char*)*size);// room�� ���������������� ��������⿡ (char**)malloc�� ���������ͷ�!
	memset(*room,0x0,sizeof(char*)*size);//0���� �ʱ�ȭ
	for(i=0;i<size;i++){
		(*room)[i]=make_friend();//*(*(room)+i)=make_friend()�� ����ǥ��
	}
	show_room(*room);
}

char *make_friend(void){
	int size=0,i=0;
	char*name=NULL;
	//printf("ģ�� �̸��� �� ���� �ΰ���?");
	//scanf_s("%d",&size,sizeof(size));
	//name=(char*)malloc(sizeof(char)*size*2+1);//�ѱ��̱� ����+�ι���
	printf("ģ���̸��� �Է��Ͻÿ� : ");
	printf("!!\n");
	fseek(stdin,0,SEEK_END);
	//scanf_s("%s",name,(sizeof(char)*size*2)+1);//ũ�⸸ŭ �Է¹ޱ� ����!!!
	mystring(&name);
	return name;
}

void size_trans(char***room,int size_after){//������������ �ּҸ� �޾ƾ�!(ũ�⸦ �ٲٱ�����)  (���� ��ġ�� ��������) �����
	int i=0,j=0;
	int size=0;
	size=_msize(*room)/4;//���� �� ũ��
	printf("msize ���� : %d \n",size);
	*room=(char**)realloc(*room,sizeof(char*)*size_after);
	size_after=_msize(*room)/4;//�ᱹ �Է¹��� size_after�� ����
	printf("msize ����: %d \n",size_after);
	if(size<size_after){
		for(i=size;i<size_after;i++){
			*((*room)+i)=NULL;//room[0][i], (*room)[i]=NULL�� ����ǥ��
			printf("%p\n",**room);
		}
	}
}

void move_mate(char***room){
	int i=0,length=0;
	char*friend_name=NULL;
	show_room(*room);
	printf("ģ�� �̸��� ������ΰ���?");
	scanf_s("%d",&length,sizeof(length));
	friend_name=(char*)malloc(sizeof(char)*length*2+1);//�ѱ��̱� ����+�ι��� �Է��� �� ���ϱ�2*"�۾� ����"+1 �������!!
	printf("�̻� �� ģ���̸� : ");
	scanf_s("%s",friend_name,(sizeof(char)*length*2+1));//ũ�⸸ŭ �Է¹ޱ� ����!!!
	for(i=0;i<_msize(*room)/4;i++){
		if(mycompare(*(*(room)+i),friend_name)==1){
			*(*(room)+i)=NULL;
			printf("�̻簩�ϴ�.\n");
		}
	}
	Sleep(2000);
}

void move_room(char**room){
	int i=0,j=0;
	char*temp=NULL;
	show_room(room);
	printf("�� �� �濡�ִ� ����� �������ڽ��ϱ�?");
	scanf_s("%d",&i,sizeof(i));
	printf("�� �� ������ �����ڽ��ϱ�?");
	scanf_s("%d",&j,sizeof(j));
	if(room[j]!=NULL)
		printf("�� ���� �Ұ��մϴ�. �ٽ� ����ּ���\n");
	else{
		temp=room[i];//room�� i��° ���� ����Ű�� �ִ� �ּ��� ���� ����
		room[i]=room[i];
		room[j]=temp;
		room[i]=NULL;
	}
}

void show_room(char**room){
	int i;
	for(i=0;i<_msize(room)/sizeof(char*);i++)
		printf("Room[%d] : %p %s\n",i,*(room+i),*(room+i));
}

int input(void){
	int num=0;
	printf("�� ���? : ");
	scanf_s("%d",&num,sizeof(num));
	return num;
}

int mystrlen(char*str){//���ڿ� ����
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
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

void mystring(char**str){
	char ch;
	int count=0;
	*str=(char*)malloc(sizeof(char*)*30);
	memset(*str,0x0,sizeof(char*)*30);
	while(1){
		if(count==30){
				printf("�� �̻� �Է¹��� �� �����ϴ�.\n");
				break;
		}
		ch=getche();
		if(ch==13 || ch==10){
			printf("\n");
			break;
		}
		(*str)[count]=ch;
		count++;
		if(kbhit()){
			ch=getche();
			(*str)[count]=ch;
			count++;
		}
	}
	str[count]='\0';
	//printf("���ڿ� ���� : %d\n",mystrlen(*str));
}