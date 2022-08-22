#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////水仙花
//int main() {
//	
//	int a, b, c, i, num,s;
//
//	for ( i = 123; i <1000 && i >= 100 ; i++)
//	{
//		num = i;
//		//取个位
//		a = num % 10;
//		//取十位
//		num /= 10;
//		b = num % 10;
//		//取百位
//		num /= 10;
//		c = num % 10;
//
//		s = a * a * a + b * b * b + c * c * c;
//
//		if (i == s)
//		{
//			printf("水仙花数是：%d \n",s);
//		}
//	}
//	return 0;
//}

////打印菱形
//int main() {
//
//	int i, j;
//	//打印上半4行
//	for ( i = 1; i < 5; i++)
//	{
//		for (j = 1; j <=4 - i; j++) //打印空格
//		{
//			printf(" ");
//		}
//		for ( j = 1; j <= 2*i-1; j++)//奇数递增
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半三行
//	for ( i = 3; i > 0; i--)
//	{
//		for ( j = 1;j<=4-i; j++ )
//		{
//			printf(" ");
//		}
//		for ( j = 0; j < 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//用选择法对十个整型排序
//int main() {
//
//	int i,j,k,arr[10];
//
//	printf("请输入十个数\n");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[i]>arr[j])
//			{
//				k = arr[i];
//				arr[i] = arr[j];
//				arr[j] = k;
//			}
//		}
//	}
//	printf("排序后:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

/*#define n 3
int main()
{
	struct student
	{
		int   id;  //学号
		char name[10];   //名字
		float chengji[3];  //3科成绩
		double avg;  //平均成绩
	}stu[n];
	//输入学生信息
	int i, j;
	for ( i = 0; i < n; i++)
	{
		//输入id name
		printf("输入学生学号%d：",i+1);
		scanf("%d",&stu[i].id);
		printf("输入学生姓名:");
		scanf("%s",&stu[i].name);
		//输入3科成绩
		for (j = 0; j < 3; j++)
		{
			printf("请输入第%d科成绩: ",j+1);
			scanf("%f",&stu[i].chengji[j]);
		}
	}
	//平均总成绩
	float sumavg,sum,max;
	double s;
	max=0;
	int k;
	s = 0;
	for ( i = 0; i < n; i++) //控制人数
	{
		sum = 0;
		for ( j = 0; j < 3; j++) //3科成绩
		{
			sum += stu[i].chengji[j];
		}
		stu[i].avg = sum / 3.0;  //将每个人的平均成绩赋值给avg
		sumavg = 0;
		sumavg = stu[i].avg; //作比较
		s += stu[i].avg; //每个人的平均成绩总合

		//最高分的学生
		if (sumavg > max) //判断最高的平均分
		{
			max = sumavg;
			k = i; //记录最高分的学号
		}
	}
		s /= n; //求总平均成绩
	printf("%d名的同学总平均成绩是：%lf \n",n,s);
	//输出
	printf("最高分的学生是:%d \n",stu[k].id,stu[k].name);
	for ( j = 0; j < 3; j++)
	{
		printf("该同学的三科成绩是%f：\n",stu[k].chengji[j]);
	}
	printf("平均成绩是%lf \n",stu[k].avg);
	return 0;
}*/


#include <stdio.h>

int main()
{
	const char ar[] = { 'a','\0' };
	puts(ar);
	return 0;
}

