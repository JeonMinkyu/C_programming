#include"header.h"

int main(void){
	char**room=NULL;//room�ȿ� ����� �־����

	int i=0,size=0,num=0,menu=0;
	int size_after=0;

	while(1){
		menu=menu_list();

		if(menu==7){
			printf("�����մϴ�.\n");
			break;
		}
		else{
			switch(menu){
				case 1://myroom�����(�ʱ�)
					size=input();
					make_room_p(&room,size);
					break;
				case 2://my_roomũ�� ����
					size_after=input();
					size_trans(&room,size_after);
					break;
				case 3://room_mate�߰�
					show_room(room);
					printf("�� �� �濡 �߰��Ͻðڽ��ϱ�?");
					scanf_s("%d",&i,sizeof(i));
					if(room[i]==NULL)
						room[i]=make_friend();
					else
						printf("�����Ͻ� �� �����ϴ�. �ٽ� �Է����ּ���.\n");
					break;
				case 4://room_mate�̻�
					move_mate(&room);
					break;
				case 5:
					move_room(room);
					break;
				case 6:
					show_room(room);
					Sleep(2000);
					break;
			}
		}
	}
	free(room);
}
