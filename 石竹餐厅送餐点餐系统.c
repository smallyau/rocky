//�⺯�� 
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������
int flash()
 {
 	int i,j,k;
 	printf("			  		��ӭ����ʯ���������Ͳ�ϵͳ��	���ڼ����У�\n"); 					
   	for(i=1;i<=9;i++)			
	{
		printf("���ؽ���%d%%\n",i*11);
        for( j=1;j<=9-i;j++)	
		{
        	 printf("       ");		
        }
        for(k=1;k<=i;k++)		
		{
            printf("*******");		
            printf("       ");		
        }
        printf("\n");
		sleep(1);			
    }
 	system("cls");
  } 
//������� 
int  star()
{
	int i=0,j=0,a;
	char xh[12];
	char b,c[100];
	FILE*fp3=fopen("xh.txt","w");
	printf("���������ѧ�ţ�");
	gets(xh);
	for(i=0;i<12;i++)
	{
	if ((xh[i]>='0')&&(xh[i]<='9'))
		j++;
	}
	if(j==12)
	{
	printf("�������ѧ�Ÿ�ʽ��ȷ");
	fputs(xh,fp3);
	fclose(fp3); 
	FILE*fp3=fopen("xh.txt","r");
 	FILE*fp6=fopen("sy.txt","w");
 	if (fp3==NULL||fp6==NULL)
 	{
 		puts("���ܴ��ļ���"); 
 		return 0;
 	}
 	fscanf(fp3,"%d",&a);
 	b=fgetc(fp3);
 	fgets(c,100,fp3);
 	printf("%ld",ftell(fp3));
 	fputs(c,fp6);
 	fputc(b,fp6);
 	fprintf(fp6,"%d",a);
 	fclose(fp3);
 	fclose(fp6);
		system("cls");
	return 1; //�����д���ļ�xh.txt sy.txt 
	}
	else
	{
	printf("�������ѧ�Ÿ�ʽ��������������\n");
	return 0;
	} 
 } 
 //�û�����
int ui()
{
	int i;
	int a; 
	printf("**************************************************\n");
	printf("		    ��ѡ����ʳ������\n");
	for(i=1;i<4;i++)
	{
		if(i==1)
		printf("	1����ʳ\n");
		if(i==2)
		printf("	2������\n");
		if(i==3)
		printf("	3���˳����ϵͳ\n");
	}
	printf("**************************************************\n\n\n\n\n");
	printf("������ϵͳ���ܱ��: "); 
	scanf("%d",&a);
	getchar();
	system("cls"); 
	return a;
}
//��ʳ
 int czh()
 {
 	char zh[10];
 	int i=0,j=0,a;
 	char b,c[100];
	printf("**************************************************\n");
 	printf("		    ���ṩ��Ĳ�����\n");
 	printf("**************************************************\n\n\n\n\n");
 	printf("��������Ĳ����ţ�: "); 
 	gets(zh);
 		for(i=0;i<10;i++)
	{
	if ((zh[i]>='0')&&(zh[i]<='9'))
		j++;
	}
 	FILE*fp1=fopen("zh.txt","w");
 	fputs(zh,fp1);
 	fclose(fp1);
 	FILE*fp7=fopen("xh.txt","r");
 	FILE*fp6=fopen("sy.txt","w");
 	if (fp7==NULL||fp6==NULL)
 	{
 		puts("���ܴ��ļ���"); 
 		return 0;
 	}
 	fscanf(fp7,"%d",&a);
 	b=fgetc(fp7);
 	fgets(c,100,fp7);
 	printf("%ld",ftell(fp7));
 	fputs(c,fp6);
 	fputc(b,fp6);
 	fprintf(fp6,"%d",a);
 	fclose(fp7);
 	fclose(fp6);
 	system("cls"); 
 	return 0;
}

//���ϵͳ 
int massage()
{
	float m=0;
	int n=0,i=7,a; 
	printf("�����������С�Զ�Ӧ���\n   ������һ��������-1\n"); 
	printf("#############################################\n");
	printf("	1  ��������һ���ײ͡���9Ԫ\n");
	printf("	2  ����һ�������ײ͡���13Ԫ\n"); 
	printf("	3  ����ţ��/ţ�������桪��12Ԫ\n");
	printf("	4  ��������±�桪��10Ԫ\n");
	printf("	5  ������֭��⽡���15Ԫ\n");
	printf("	6  ����ˮ�ȡ���15Ԫ\n");
	printf("	7  �������ӷۡ���12Ԫ\n");
	printf("	8  �������֡���2.5Ԫ\n");
	printf("	9  �����ȸ��桪��7Ԫ\n");
	printf("	10 ��������ը������15Ԫ\n");
	printf("	11 �����ȹ�����2Ԫ\n");
	printf("#############################################\n\n"); 
	printf("��ܰ��ʾ�� ������Ʒʱ�ÿո������0Ϊ�������롣\n"); 
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		else if(n==-1)
		return 0;
		else if(n==1)
		m=m+15;
		else if(n==2)
		m=m+18;
		else if(n==3)
		m=m+9; 
		else if(n==4)
		m=m+7;  
		else if(n==5)
		m=m+15;  
		else if(n==6)
		m=m+8;
		else if(n==7)
		m=m+8;
		else if(n==8)
		m=m+2.5;
		else if(n==9)
		m=m+7;
		else if(n==10)
		m=m+15;
		else if(n==11)
		m=m+2;
	}
	printf("�ܹ�%.1fԪ\n",m);
	FILE *fp18= fopen("je.txt", "w");
	if(fp18 == NULL)
	printf("���ļ�ʧ��");
	fprintf(fp18,"%.1fԪ",m);
	fclose(fp18);
	printf("�������������ּ���:");
	scanf("%d",&a);
	system("cls");  //������д���ļ�je.txt 
	return m;
}

void out()
{
	
	int a,f;
	char b[9];
	char n,m[100];
	set1:
	printf("#############################################\n");
	printf("���ṩ����������ƺ�\n");
	printf("��ܰ��ʾ�� �������ƺŸ�ʽΪX#XXX��\n");
	printf("#############################################\n");
	printf("����������������ƺţ�");
	gets(b);
	FILE*fp2=fopen("mp.txt","w");
	fputs(b,fp2);
	fclose(fp2); 
	FILE*fp5=fopen("mp.txt","r");
 	FILE*fp6=fopen("sy.txt","w");
 	if (fp5==NULL||fp6==NULL)
 	{
 		puts("���ܴ��ļ���"); 
 	}
 	fscanf(fp5,"%d",&f);
 	n=fgetc(fp5);
 	fgets(m,100,fp5);
 	fputs(m,fp6);
 	fputc(n,fp6);
 	fprintf(fp6,"%d",f);
 	fclose(fp5);
 	fclose(fp6);
	printf("��ȷ���������ƺ�:ȷ���밴1�����������밴2\n");
	scanf("%d",&a);
	system("cls"); 
		if (a==2)
	{
		system("cls"); 
		goto set1;
	}}
//֧����ʽ 
int pay()
{
	int i;
	printf("**************************************************\n");
	printf("		    ��ѡ����ĸ��ʽ\n");
	for(i=1;i<4;i++)
	{
		if(i==1)
		printf("	1��΢��\n");
		if(i==2)
		printf("	2��֧����\n");
		if(i==3)
		printf("	3���ֽ�֧��\n");
	}
	printf("**************************************************\n\n\n\n\n");
	printf("������ϵͳ���ܱ��: "); 
	scanf("%d",&i);
	getchar();
	system("cls"); 
	return i;
	} 

//����֧��	
int olpay()
{
		int a;
		set1:
		printf("ɨ���ά�����֧��\n");
		printf("####### #######  #######\n");
		printf("#     # ####     #     #\n");
		printf("# ### # ## ##    # ### #\n");
		printf("# ### #   #  # # # ### #\n");
		printf("#     # #  #     #     #\n");
		printf("####### #######  #######\n");
		printf("   #   #  ## #     #    \n");
		printf("# ##  ##  ##  ##  #  ###\n");
		printf("  #   ###  # ####  #   #\n");
		printf("####### ######   ###  # \n");
		printf("#     # ### ##   #     #\n");
		printf("# ### # ## ## #    ###\n");
		printf("# ### # ## ## #    ###\n");
		printf("#     # #  ##    #     #\n");
		printf("####### #####     ###  # \n");
		printf("��ȷ���Ƿ����֧����ȷ���밴1��������һ���밴2\n");
		scanf("%d",&a);
			if (a==1)
			{
			system("cls");
			printf("֧���ɹ���") ;
			} 
		return a;
	}
//�ֽ�֧��	
void cashpay()
	{
	printf("**************************************************\n");
	printf("             ��һ������%.1fԪ");
	printf("       ���Ա���Ǯ������Ա�Ͳ����ź�ʹ���ֽ�֧����");
	printf("**************************************************\n");
	}
	

int main()
 {
 	int i;
 	flash();
 	int b;
	if(star()==1)
	{
		if (ui()==1)
		{
		czh();
		b=massage();
			if (pay()==1||2)			
			olpay();
			else 
			cashpay();
			system("cls");
	printf("**************************************************\n\n\n\n\n");
	printf("       ��ͳɹ������������ں��ź󵽴���ȡ�͡�\n\n\n\n");
	printf("**************************************************\n");
	FILE *fp8= fopen("xh.txt", "r");
    FILE *fp9= fopen("zh.txt", "r");
    FILE *fp11 = fopen("�վ�.txt", "w");
    char c;
    if (fp8 == NULL || fp9 == NULL ||  fp11 == NULL)
    {
      puts("Could not open files");
       exit(0);
    }
    FILE *fp14= fopen("kg1.txt", "w");
 	FILE *fp15= fopen("kg2.txt", "w");
 	FILE *fp20= fopen("kg3.txt", "w");
 	FILE *fp22= fopen("xh2.txt", "w");
 	FILE *fp16= fopen("rq.txt", "w");
 	int argc;
    char* argv[100];
    struct tm *p;
    time_t t = time(0);
    p = localtime(&t);
 	if(fp14 == NULL || fp15 ==NULL || fp16 == NULL || fp20 == NULL || fp22 == NULL )
 	printf("�ļ���ʧ��");
 	fprintf(fp14,"         ���ţ�");
 	fprintf(fp15,"         ��");
 	fprintf(fp20,"         ���ڣ�");
 	fprintf(fp22,"ѧ�ţ�");
 	fprintf(fp16,"%d��%d��%d��%d:%d:%d\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
 	fclose(fp14);
 	fclose(fp15);
 	fclose(fp16);
 	fclose(fp20);
 	fclose(fp22);
 	FILE *fp12= fopen("kg1.txt", "r");
    FILE *fp13= fopen("kg2.txt", "r");
    FILE *fp21= fopen("kg3.txt", "r");
    FILE *fp17= fopen("rq.txt", "r");
    FILE *fp19= fopen("je.txt", "r");
    FILE *fp23= fopen("xh2.txt", "r");
    while ((c = fgetc(fp23)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp8)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp12)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp9))!= EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp13)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp19)) != EOF)
     fputc(c,fp11);
     while ((c = fgetc(fp21)) != EOF)
     fputc(c,fp11);
    while ((c = fgetc(fp17)) != EOF)
    fputc(c, fp11);
    fclose(fp8);
    fclose(fp9);
    fclose(fp11);
	fclose(fp12);
 	fclose(fp13);
 	fclose(fp17);
 	fclose(fp21);
    fclose(fp19);
	fclose(fp23);
    int u;
    system("del rq.txt");
    system("del je.txt");
    system("del kg1.txt");
    system("del kg2.txt");
    system("del kg3.txt");
    system("del zh.txt");
    system("del sy.txt");
    system("del xh.txt");
    system("del xh2.txt");
    FILE*pFile =NULL;
	char buffer[1024]={0};
	int jk=0;
	pFile = fopen("D:\\�վ�.txt","r");
    char filename;
    FILE*file=fopen("D:\\�վ�.txt","r");
    //����ɢ���ݺϳ���ͬһ���ļ� 
    while((filename=fgetc(file))!=EOF)
    {
    	printf("%c",filename);
	} 
		}
	else
	{
	out();
	b=massage();
	if (pay()==1||2)
	{
		olpay();
		
			}
			else
				cashpay();
				system("cls");
	printf("**************************************************\n\n\n\n\n");
	printf("       ��ͳɹ�����������ȴ��Ͳ�Ա���š�\n\n\n\n");
	printf("**************************************************\n");
							FILE *fp8= fopen("D:\\xh.txt", "r");
    FILE *fp9= fopen("D:\\mp.txt", "r");
    FILE *fp11 = fopen("D:\\�վ�.txt", "w");
    char c;
    if (fp8 == NULL || fp9 == NULL ||  fp11 == NULL)
    {
      puts("Could not open files");
       exit(0);
    }
    //�ڳ��������������Ϣ�Ŀո� 
    FILE *fp14= fopen("kg1.txt", "w");
 	FILE *fp15= fopen("kg2.txt", "w");
 	FILE *fp20= fopen("kg3.txt", "w");
 	FILE *fp22= fopen("xh2.txt", "w");
 	FILE *fp16= fopen("rq.txt", "w");
 	int argc;
    char* argv[100];
    struct tm *p;
    time_t t = time(0);
    p = localtime(&t);
 	if(fp14 == NULL || fp15 ==NULL || fp16 == NULL || fp20 == NULL || fp22 == NULL )
 	printf("�ļ���ʧ��");
 	//�ڳ��������ʾ�㵥��Ϣ 
 	fprintf(fp14,"           ���ƺţ�");
 	fprintf(fp15,"           ��");
 	fprintf(fp20,"           ���ڣ�");
 	fprintf(fp22,"ѧ�ţ�");
 	//�ڳ��������ʾ�㵥ʱ�� 
 	fprintf(fp16,"%d��%d��%d��%d:%d:%d\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
 	fclose(fp14);
 	fclose(fp15);
 	fclose(fp16);
 	fclose(fp20);
 	fclose(fp22);
 	FILE *fp12= fopen("kg1.txt", "r");
    FILE *fp13= fopen("kg2.txt", "r");
    FILE *fp21= fopen("kg3.txt", "r");
    FILE *fp17= fopen("rq.txt", "r");
    FILE *fp19= fopen("je.txt", "r");
    FILE *fp23= fopen("xh2.txt", "r");
    while ((c = fgetc(fp23)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp8)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp12)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp9))!= EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp13)) != EOF)
    fputc(c, fp11);
    while ((c = fgetc(fp19)) != EOF)
     fputc(c,fp11);
     while ((c = fgetc(fp21)) != EOF)
     fputc(c,fp11);
    while ((c = fgetc(fp17)) != EOF)
    fputc(c, fp11);
    fclose(fp8);
    fclose(fp9);
    fclose(fp11);
	fclose(fp12);
 	fclose(fp13);
 	fclose(fp17);
 	fclose(fp21);
    fclose(fp19);
	fclose(fp23);
    int u;
    system("del rq.txt");
    system("del je.txt");
    system("del kg1.txt");
    system("del kg2.txt");
    system("del kg3.txt");
    system("del mp.txt");
    system("del sy.txt");
    system("del xh.txt");
   
    char filename;
    FILE*file=fopen("�վ�.txt","r");
    while((filename=fgetc(file))!=EOF)
    {
    	printf("%c",filename);
	} 
	 }
	}
	} 
