void gotoxy(int x, int y){//Ŀ���̵�
        COORD Pos;//(1,1)~(80,25)�� ���
		Pos.X=x-1;
		Pos.Y=y-1;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

int print_box(void){//�׵θ�
        int i=0, j=0;//i:��, j;��
                for(i=MINY;i<=MAXY;i+=2){
                        for(j=MINX;j<=MAXX;j+=1){
                                if(i==MINY || j==MINX || j==MAXX || i==MAXY-1){//�糡�ʸ� ��
                                        gotoxy(i,j);
										Color(6);//�׵θ��� ���������
										printf("��");
                                }
                        }
                printf("\n");
        }
        return 0;
}

void print_dot(int x, int y,char*c){//�ش� ��ġ�� �� ����ϱ�
	gotoxy(x,y);
	printf("%s",c);
}

void bar(int x, char c){//�� �׸���
	int i=0;
		gotoxy(x,23);
		for(i=0;i<15;i++)//ũ�� 15�� ��
			printf("%c",c);
}

void delete_bar(int bar_x){//�� �̵��� ���� �� ����
	int i=0;
	//print_dot(x,y," ");
	
	for(i=bar_x; i<bar_x+15;i++){
		print_dot(i,23," "); 
	}	
}


void Color(int x){//text���� �ٲٴ� �Լ�
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
}
void brick(int x, int y){ // ���� �߰�
	int i=0, j=0;
	int block[4][4]={
		{1,1,1,1},
		{1,1,1,1},
		{1,1,1,1},
		{1,1,1,1},
	};
	
	for(i=0;i<4;i++){
		gotoxy(x,y+i);//y�� i��ŭ ������� �׸� 4*4�������� ��µ�(�ٹٲ�)
		for(j=0;j<4;j++){
			if(block[i][j]==1)
				printf("��");
		}
		printf("\n");
	}
}

int random(void){
	int rand_num=0;
	srand((unsigned)time(NULL));
	rand_num=rand()%45+15;
	return rand_num;
}



void cursor(void){ // Ŀ�� �����
    HANDLE hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor;
 
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 
    ConsoleCursor.bVisible = 0;
    ConsoleCursor.dwSize = 1;
 
    SetConsoleCursorInfo(hConsole , &ConsoleCursor);
}