#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////ˮ�ɻ�
//int main() {
//	
//	int a, b, c, i, num,s;
//
//	for ( i = 123; i <1000 && i >= 100 ; i++)
//	{
//		num = i;
//		//ȡ��λ
//		a = num % 10;
//		//ȡʮλ
//		num /= 10;
//		b = num % 10;
//		//ȡ��λ
//		num /= 10;
//		c = num % 10;
//
//		s = a * a * a + b * b * b + c * c * c;
//
//		if (i == s)
//		{
//			printf("ˮ�ɻ����ǣ�%d \n",s);
//		}
//	}
//	return 0;
//}

////��ӡ����
//int main() {
//
//	int i, j;
//	//��ӡ�ϰ�4��
//	for ( i = 1; i < 5; i++)
//	{
//		for (j = 1; j <=4 - i; j++) //��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for ( j = 1; j <= 2*i-1; j++)//��������
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°�����
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

//��ѡ�񷨶�ʮ����������
//int main() {
//
//	int i,j,k,arr[10];
//
//	printf("������ʮ����\n");
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
//	printf("�����:");
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
		int   id;  //ѧ��
		char name[10];   //����
		float chengji[3];  //3�Ƴɼ�
		double avg;  //ƽ���ɼ�
	}stu[n];
	//����ѧ����Ϣ
	int i, j;
	for ( i = 0; i < n; i++)
	{
		//����id name
		printf("����ѧ��ѧ��%d��",i+1);
		scanf("%d",&stu[i].id);
		printf("����ѧ������:");
		scanf("%s",&stu[i].name);
		//����3�Ƴɼ�
		for (j = 0; j < 3; j++)
		{
			printf("�������%d�Ƴɼ�: ",j+1);
			scanf("%f",&stu[i].chengji[j]);
		}
	}
	//ƽ���ܳɼ�
	float sumavg,sum,max;
	double s;
	max=0;
	int k;
	s = 0;
	for ( i = 0; i < n; i++) //��������
	{
		sum = 0;
		for ( j = 0; j < 3; j++) //3�Ƴɼ�
		{
			sum += stu[i].chengji[j];
		}
		stu[i].avg = sum / 3.0;  //��ÿ���˵�ƽ���ɼ���ֵ��avg
		sumavg = 0;
		sumavg = stu[i].avg; //���Ƚ�
		s += stu[i].avg; //ÿ���˵�ƽ���ɼ��ܺ�

		//��߷ֵ�ѧ��
		if (sumavg > max) //�ж���ߵ�ƽ����
		{
			max = sumavg;
			k = i; //��¼��߷ֵ�ѧ��
		}
	}
		s /= n; //����ƽ���ɼ�
	printf("%d����ͬѧ��ƽ���ɼ��ǣ�%lf \n",n,s);
	//���
	printf("��߷ֵ�ѧ����:%d \n",stu[k].id,stu[k].name);
	for ( j = 0; j < 3; j++)
	{
		printf("��ͬѧ�����Ƴɼ���%f��\n",stu[k].chengji[j]);
	}
	printf("ƽ���ɼ���%lf \n",stu[k].avg);
	return 0;
}*/


#include <stdio.h>

int main()
{
	const char ar[] = { 'a','\0' };
	puts(ar);
	return 0;
}

