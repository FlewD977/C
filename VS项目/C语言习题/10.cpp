/*#include <stdio.h>
#include <string.h>

void mian() {

	char a[3][80];
	int i, m ,l,L,num,t;
	char c,j,k ;

	int countm = 0;
	int countL = 0;
	int countl = 0;
	int countnum = 0;
	int countt = 0;

	for ( i = 0; (c = a[i][80]) != '\0'; i++)
	{
		//scanf();
		for ( j = 0; (k = a[i][j]) != '\0'; j++)
		{
			if (a[i][j] == ' ')   //�ո�
			{
				m++;
				countm = m;
			}
			else if (a[i][j] >= 'A'&& a[i][j]<= 'Z') //��д��ĸ
			{
				L++;
				countL = L;
			}
			else if (a[i][j] >= 'a'&& a[i][j] <= 'z')	//Сд��ĸ
			{
				l++;
				countl = l;
			}
			else if (a[i][j] >= '0 ' && a[i][j] <= '9')		//����
			{
				num++;
				countnum = num;
			}
			else
			{
				t++;
				countt = t;
			}
		}
	}
	printf("�ո���%d��",countm);
	printf("��д��ĸ��%d��",countm);
	printf("Сд��ĸ��%d��",countm);
	printf("������%d��",countm);
	printf("�����ַ���%d��",countt);
}*/