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
			if (a[i][j] == ' ')   //空格
			{
				m++;
				countm = m;
			}
			else if (a[i][j] >= 'A'&& a[i][j]<= 'Z') //大写字母
			{
				L++;
				countL = L;
			}
			else if (a[i][j] >= 'a'&& a[i][j] <= 'z')	//小写字母
			{
				l++;
				countl = l;
			}
			else if (a[i][j] >= '0 ' && a[i][j] <= '9')		//数字
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
	printf("空格有%d个",countm);
	printf("大写字母有%d个",countm);
	printf("小写字母有%d个",countm);
	printf("数字有%d个",countm);
	printf("其他字符有%d个",countt);
}*/