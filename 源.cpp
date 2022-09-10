#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// int main()
//{
//	 int a, b, c;
//	 float Average;
//	 scanf("%d%d%d", &a, &b, &c);
//	 Average = (a + b + c) / 3;
//	 printf("%.1f\n", Average);
//	return 0;
//}

int main()
{
	int a = 0;
	int i = 0;
	int b = 0;
	scanf("%d", &a);
	static int arr[] = { 0 };

	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < a; j++)
		{	

			int c = arr[i];
			int d = arr[j];
			//printf("%d\n", c);
			if (c % d == 0 && d != 0)
				b = b + 1;
		}

	}
	printf("%d\n", b);
	printf("%d\n", arr[0]);
	return 0;
}