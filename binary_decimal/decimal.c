//10���� �Է�, 2������ ��ȯ
#include<stdio.h>

void trans_to_binary(int num){
	int i=0,j=0,n=0;
	char bin[32]={0};
	int a=0;
	
	while(1){
		if(num<1)
			break;
		else
			bin[n]=num%2+'0';
		num=(num/2);//�Է¹��� 10������ 2�� ���� ��
		n++;
		//printf("num : %d\n",num);
	}
	for(i=n;i>=0;i--)
		printf("%c ",bin[i]);
}
