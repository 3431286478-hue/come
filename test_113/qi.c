#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*int age = 17;
	scanf("%d", & age);
	if (age > 18)
	{
		printf("hey,man\n");
		printf("keep your heart pure\n");
	}
	else
	{
		printf("hey,kid\n");
		printf("enjoy your teenager life\n");
	}*/
	/*int num = 1;
	while (num <= 100)
	{
		
		if(num%2==1)
		printf("%d ", num);
		num++;
	}*/
	/*int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saterday");
		break;
	case 7:
		printf("Sunday");
		break;
	}*/
	/*int i = 0;
	while (i <= 10)
	{
		if (5 == i)
			break;
		printf("%d ", i);
		i++;
	}*/

	//int ch = 0;
	//while((ch=getchar())!=EOF)
	//printf("%c", ch);
	//putchar(ch);
	char password[20] = { 0 };
	printf("ÇëÊäÈëÃÜÂë:>");
	scanf("%s", password);
	//getchar();
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("ÇëÈ·ÈÏÃÜÂë(Y/N):>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No");
	}
	return 0;
}