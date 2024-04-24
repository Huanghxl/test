#include <stdio.h>
struct data
{
	char model[10];
	char name[10];
	double longth;
	double wide;
	double wing;
	double speed;
	double high;
	double flying;
	double radius;
	double amount;
}
p[5] = { { "J-20","歼-20",20.3,2.5,12.88,2.8,18,6.5,2.2,11 },
		{ "J-31","歼-31",16.8,4.8,10,1.8,16,3,1.25,8 },
		{"J-16","歼-16",21.19,5.6,14.7,2.5,20,3.9,1.5,12},
		{"J-10","歼-10",14.27,5.3, 8.78 ,2.0,17,3.9,1.25,0.7},
		{"J-8"," 歼-8 ",21.52,5.41, 9.34 ,2.2,20.5,2,0.6,0.7} };
int main()
{
	struct data temp;
	int n;
	int m;
	int k;
	int i = 1;
	int flag = 0;
	while (i = 1)
	{
		printf("请输入需要执行的命令：\n查询请输入：1\n显示请输入：2\n排序请输入：3\n结束请输入：0\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:printf("请输入想查询飞机号码"); scanf("%d", &m); switch (m) {
		case 1:printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[0].model, p[0].name, p[0].longth, p[0].wide, p[0].wing, p[0].speed, p[0].high, p[0].flying, p[0].radius, p[0].amount); break;
		case 2:printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[1].model, p[1].name, p[1].longth, p[1].wide, p[1].wing, p[1].speed, p[1].high, p[1].flying, p[1].radius, p[1].amount); break;
		case 3:printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[2].model, p[2].name, p[2].longth, p[2].wide, p[2].wing, p[2].speed, p[2].high, p[2].flying, p[2].radius, p[2].amount); break;
		case 4:printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[3].model, p[3].name, p[3].longth, p[3].wide, p[3].wing, p[3].speed, p[3].high, p[3].flying, p[3].radius, p[3].amount); break;
		case 5:printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[4].model, p[4].name, p[4].longth, p[4].wide, p[4].wing, p[4].speed, p[4].high, p[4].flying, p[4].radius, p[4].amount); break;
		}
			  break;
		case 2:for (int i = 0; i < 5; i++)
		{
			printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
		}
			  break;
		case 3:printf("请输入想排序类型：\n机身长请输入：1\n机宽长请输入：2\n翼展请输入：3\n最大飞行速度请输入：4\n最大飞行高度请输入：5\n航程请输入：6\n作战半径请输入：7\n载弹数请输入：8\n"); scanf("%d", &k); switch (k) {
		case 1:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].longth > p[j].longth)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		case 2:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].wide > p[j].wide)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		case 3:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].wing > p[j].wing)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		case 4:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].speed > p[j].speed)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		case 5:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].high > p[j].high)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		case 6:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].flying > p[j].flying)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		case 7:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].radius > p[j].radius)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		case 8:for (int i = 4; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (p[j - 1].amount > p[j].amount)
				{
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		}
			  for (int i = 0; i < 5; i++)
			  {
				  printf("%s %s %.2f米 %.2f米 %.2f米 %.2f米、秒 %.2f米 %.2f米 %.2f米 %.2f吨\n", p[i].model, p[i].name, p[i].longth, p[i].wide, p[i].wing, p[i].speed, p[i].high, p[i].flying, p[i].radius, p[i].amount);
			  }
			  break;
		}
			  break;
		case 0:flag = 1; break;
		}
		if (flag == 1)
		{
			break;
		}
	}
	return 0;
}
