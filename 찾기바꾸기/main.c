#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(void){
        int a;
        printf("wordfinder_201411802 ���α�\n");
        for(a=1;a<=5;a++){

                int wordcount=0;
                int wordcount1=0;
                int h,i,j,k,b,d,e,f,g;
                int c=0;
                FILE*fp=NULL;
                fp=fopen("sample.txt","r");
                char word[30];//�Է��� ���ڿ� �߿� �ܾ�
                char strTemp[255];//����
                char*token;//�� ���忡�� �ܾ������ ���� �ܾ�
                int linecount=0;//���� ��
                int front=0;//�ձ���
                char front1[10]={0};
                char back1[10]={0};
                int back=0;//�ޱ���
                char str[20];//�� ó���� �Է��ϴ� ���ڿ�
                printf("%d��° �˻� �ܾ �Է��ϼ��� : ",a);

                //input �޴°� �ڵ��غ���
                gets(str);//�Է¹޾Ƽ�
                for(b=0;;b++){//{front}word{back}
                        if(isalpha(str[0]))//ù���ڰ� ���ĺ�
                                break;
                        else if(isdigit(str[b])){//b��°�� ���ڰ� ����
                                front1[c]=str[b];
                                c++;
                        }
                        else if(str[b]=='}'){
                                front1[c]='\0';//���� ã��
                                b++;
                                c=0;
                                break;
                        }
                }
                for(;;b++){
                        if(str[b]=='{' || str[b]=='\0'){
                                word[c]='\0';
                                c=0;
                                break;
                        }
                        else{
							 word[c]=str[b];
                                c++;
                        }
                }
                for(;;b++){
                        if(str[b]=='\0')
                                break;
                        if(str[b]!='{' && isdigit(str[b])){
                                back1[c]=str[b];
                                c++;
                        }
                        else if(str[b]=='}'){
                                back1[c]='\0';
                                break;
                        }
                }
                front=atoi(front1);
                back=atoi(back1);

                printf("\nfront : %d       back : %d ",front,back);

                while(!feof(fp)){//������ ������ �ݺ������� �о����
                        linecount++;//���� ���� ��
                        wordcount1=0;
                        fgets(strTemp,sizeof(strTemp),fp);//���Ͽ��� fgets�� ���پ� �޾ƿ���
                        char*token=strtok(strTemp," ");//������ �ܾ������ ������
                        while(token!=NULL){//���� �ܾ ������ ����

                                //if(token[strlen(token)]=='\0'){
                                //
                                //}

                                int flag=0;//��ġ ���θ� �����ϱ� ���� ����
                                int tm=0;
                                for(k=0;k<strlen(word);k++){
                                        if(word[k]==token[front+k]){//token ù��°���� front��ŭ �ڿ��ִ°� word / flag�� ���������� 0�� �����ϰԵ�, ��� 0�� �����ؾ���..     
                                        }//��ġ�� ���

                                        else{
                                                flag=1;
                                               break;   //��ġ���� ���� ��� (�ѹ��̶� ��ġ���� �ʴ´ٸ� flag���� 0���� 1�� �����
                                        }
                                }

                                if(flag==0){
                                        if(strlen(token)==(front+back+strlen(word))){
                                                for(int t=0;t<strlen(token);t++){
                                                        if(token[t]=='\n'){
															     tm=1;
                                                        }
                                                        else{
                                                        }
                                                }
                                                        if(tm!=1){
                                                        if(wordcount1==0){
                                                                printf("\nline#%d: %s",linecount, token);
                                                                wordcount1++;
                                                        }
                                                        else{
                                                                printf(", %s",token);
                                                                wordcount1++;
                                                        }
                                                        wordcount++;
                                                }
                                        }

                                }
                                token=strtok(NULL," ");
                        }
                }

                fclose(fp);
                printf("\n\n�� %d���� %s�� ã�ҽ��ϴ�.\n",wordcount,str);
        }

        return 0;
}
                                                                  