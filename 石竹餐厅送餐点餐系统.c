//库函数 
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//开机动画
int flash()
 {
 	int i,j,k;
 	printf("			  		欢迎来到石竹餐厅点餐送餐系统！	正在加载中！\n"); 					
   	for(i=1;i<=9;i++)			
	{
		printf("加载进度%d%%\n",i*11);
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
//登入界面 
int  star()
{
	int i=0,j=0,a;
	char xh[12];
	char b,c[100];
	FILE*fp3=fopen("xh.txt","w");
	printf("请输入你的学号：");
	gets(xh);
	for(i=0;i<12;i++)
	{
	if ((xh[i]>='0')&&(xh[i]<='9'))
		j++;
	}
	if(j==12)
	{
	printf("您输入的学号格式正确");
	fputs(xh,fp3);
	fclose(fp3); 
	FILE*fp3=fopen("xh.txt","r");
 	FILE*fp6=fopen("sy.txt","w");
 	if (fp3==NULL||fp6==NULL)
 	{
 		puts("不能打开文件！"); 
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
	return 1; //将结果写入文件xh.txt sy.txt 
	}
	else
	{
	printf("您输入的学号格式错误请重新输入\n");
	return 0;
	} 
 } 
 //用户界面
int ui()
{
	int i;
	int a; 
	printf("**************************************************\n");
	printf("		    请选择堂食或外送\n");
	for(i=1;i<4;i++)
	{
		if(i==1)
		printf("	1：堂食\n");
		if(i==2)
		printf("	2：外送\n");
		if(i==3)
		printf("	3：退出点餐系统\n");
	}
	printf("**************************************************\n\n\n\n\n");
	printf("请输入系统功能编号: "); 
	scanf("%d",&a);
	getchar();
	system("cls"); 
	return a;
}
//堂食
 int czh()
 {
 	char zh[10];
 	int i=0,j=0,a;
 	char b,c[100];
	printf("**************************************************\n");
 	printf("		    请提供你的餐桌号\n");
 	printf("**************************************************\n\n\n\n\n");
 	printf("请输入你的餐桌号：: "); 
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
 		puts("不能打开文件！"); 
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

//点餐系统 
int massage()
{
	float m=0;
	int n=0,i=7,a; 
	printf("请输入所点的小吃对应编号\n   返回上一层请输入-1\n"); 
	printf("#############################################\n");
	printf("	1  ——两素一荤套餐——9元\n");
	printf("	2  ——一素两荤套餐——13元\n"); 
	printf("	3  ——牛肉/牛肉丸拉面——12元\n");
	printf("	4  ——莆田卤面——10元\n");
	printf("	5  ——鲜汁馄饨——15元\n");
	printf("	6  ——水饺——15元\n");
	printf("	7  ——炒河粉——12元\n");
	printf("	8  ——可乐——2.5元\n");
	printf("	9  ——热干面——7元\n");
	printf("	10 ——快乐炸鸡——15元\n");
	printf("	11 ——热狗——2元\n");
	printf("#############################################\n\n"); 
	printf("温馨提示： 输入多菜品时用空格隔开，0为结束输入。\n"); 
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
	printf("总共%.1f元\n",m);
	FILE *fp18= fopen("je.txt", "w");
	if(fp18 == NULL)
	printf("打开文件失败");
	fprintf(fp18,"%.1f元",m);
	fclose(fp18);
	printf("请输入任意数字继续:");
	scanf("%d",&a);
	system("cls");  //将数据写入文件je.txt 
	return m;
}

void out()
{
	
	int a,f;
	char b[9];
	char n,m[100];
	set1:
	printf("#############################################\n");
	printf("请提供你的宿舍门牌号\n");
	printf("温馨提示： 宿舍门牌号格式为X#XXX。\n");
	printf("#############################################\n");
	printf("请输入你的宿舍门牌号：");
	gets(b);
	FILE*fp2=fopen("mp.txt","w");
	fputs(b,fp2);
	fclose(fp2); 
	FILE*fp5=fopen("mp.txt","r");
 	FILE*fp6=fopen("sy.txt","w");
 	if (fp5==NULL||fp6==NULL)
 	{
 		puts("不能打开文件！"); 
 	}
 	fscanf(fp5,"%d",&f);
 	n=fgetc(fp5);
 	fgets(m,100,fp5);
 	fputs(m,fp6);
 	fputc(n,fp6);
 	fprintf(fp6,"%d",f);
 	fclose(fp5);
 	fclose(fp6);
	printf("请确认您的门牌号:确认请按1，重新输入请按2\n");
	scanf("%d",&a);
	system("cls"); 
		if (a==2)
	{
		system("cls"); 
		goto set1;
	}}
//支付方式 
int pay()
{
	int i;
	printf("**************************************************\n");
	printf("		    请选择你的付款方式\n");
	for(i=1;i<4;i++)
	{
		if(i==1)
		printf("	1：微信\n");
		if(i==2)
		printf("	2：支付宝\n");
		if(i==3)
		printf("	3：现金支付\n");
	}
	printf("**************************************************\n\n\n\n\n");
	printf("请输入系统功能编号: "); 
	scanf("%d",&i);
	getchar();
	system("cls"); 
	return i;
	} 

//在线支付	
int olpay()
{
		int a;
		set1:
		printf("扫描二维码进行支付\n");
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
		printf("请确认是否完成支付：确认请按1，返回上一层请按2\n");
		scanf("%d",&a);
			if (a==1)
			{
			system("cls");
			printf("支付成功！") ;
			} 
		return a;
	}
//现金支付	
void cashpay()
	{
	printf("**************************************************\n");
	printf("             您一共消费%.1f元");
	printf("       请自备零钱在外送员送餐上门后使用现金支付。");
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
	printf("       点餐成功，请听到窗口呼号后到窗口取餐。\n\n\n\n");
	printf("**************************************************\n");
	FILE *fp8= fopen("xh.txt", "r");
    FILE *fp9= fopen("zh.txt", "r");
    FILE *fp11 = fopen("收据.txt", "w");
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
 	printf("文件打开失败");
 	fprintf(fp14,"         桌号：");
 	fprintf(fp15,"         金额：");
 	fprintf(fp20,"         日期：");
 	fprintf(fp22,"学号：");
 	fprintf(fp16,"%d年%d月%d日%d:%d:%d\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
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
	pFile = fopen("D:\\收据.txt","r");
    char filename;
    FILE*file=fopen("D:\\收据.txt","r");
    //将零散数据合成于同一个文件 
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
	printf("       点餐成功，请在宿舍等待送餐员上门。\n\n\n\n");
	printf("**************************************************\n");
							FILE *fp8= fopen("D:\\xh.txt", "r");
    FILE *fp9= fopen("D:\\mp.txt", "r");
    FILE *fp11 = fopen("D:\\收据.txt", "w");
    char c;
    if (fp8 == NULL || fp9 == NULL ||  fp11 == NULL)
    {
      puts("Could not open files");
       exit(0);
    }
    //在程序最后插入隔开信息的空格 
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
 	printf("文件打开失败");
 	//在程序最后显示点单信息 
 	fprintf(fp14,"           门牌号：");
 	fprintf(fp15,"           金额：");
 	fprintf(fp20,"           日期：");
 	fprintf(fp22,"学号：");
 	//在程序最后显示点单时间 
 	fprintf(fp16,"%d年%d月%d日%d:%d:%d\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
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
    FILE*file=fopen("收据.txt","r");
    while((filename=fgetc(file))!=EOF)
    {
    	printf("%c",filename);
	} 
	 }
	}
	} 
