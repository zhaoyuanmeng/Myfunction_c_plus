#include <stdio.h>
int main(void)
{

	/*************** ��һ���Ĳ��Դ��� *******************

int myfunc1(int n);  //����˵������

int n,flag;          //flagΪ��־λ

printf("Please enter your number");

scanf("%d",&n);

//����myfunc1�������ж�

flag = myfunc1(n);

if(flag){
	printf("\n%d is sushu",n);

}else printf("\n no sushu");

************** end **********************************/

	/*************** �ڶ����Ĳ��Դ��� *******************

int a[10] = {2,3,2,5,6};
void myfunc2(int *a,int n);

int i;

printf("Befor number is :");

for(i=0;i<10;i++){
	printf("%2d",a[i]);
}
myfunc2(a,10);

printf("\nAfter number is :");

for(i=0;i<10;i++){
	printf("%2d",a[i]);
}

************** end **********************************/

	/*************** �������Ĳ��Դ��� *******************

int a[10] = {2,3,2,5,6};
void myfunc3(int *a,int n);

int i;

printf("Befor number is :");

for(i=0;i<10;i++){
	printf("%2d",a[i]);
}
myfunc3(a,10);

printf("\nAfter number is :");

for(i=0;i<10;i++){
	printf("%2d",a[i]);
}

************** end **********************************/

	/*************** ���ĸ��Ĳ��Դ��� *******************

int a[10] = {2,3,2,5,6};
void myfunc4(int *a,int n);

myfunc4(a,10);

************** end **********************************/

	/*************** ������Ĳ��Դ��� *******************

int a[5]={1,2,3,4,5};
int i;
void myfunc5(int *a,int n);
myfunc5(a,5);
for(i=0;i<5;i++){
printf("%2d",a[i]);
}

************** end **********************************/

	return 0;
}

/*************************ONE FUNCTION**************************/

/*
	
	@param:�ú����������Ǽ���Ƿ�������
	@param:�ú�����һ������Ϊ������
	@param:�ú�����һ������ֵ0��1 0���������� 1����������
	@param:�ú����Ѿ����Թ���Ŷ ������Ŷ�� �����ر���ã�����


*/
int myfunc1(int n)
{

	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			break;
		}
	}
	if (i >= n)
	{
		//˵��������
		return 1;
	}
	else
		return 0;
}

/*************************TWO FUNCTION**************************/

/*
	
	@param:�ú�������������ð�ݷ�����������
	@param:�ú��������������� ��һ��Ϊ������ �ڶ���Ϊ����
	@param:�ú���û�з���ֵŶ
	@param:�ú����Ѿ����Բ���û�д���Ŷ ���Է���ʹ��



*/
void myfunc2(int *a, int n)
{

	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{

		for (j = 0; j < n - 1 - i; j++)
		{

			if (a[j] < a[j + 1])
			{

				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

/*************************THERE FUNCTION**************************/

/*
	
	@param:�ú�������������ѡ�񷨽���������
	@param:�ú��������������� ��һ��Ϊ������ �ڶ���Ϊ����
	@param:�ú���û�з���ֵŶ
	@param:�ú����Ѿ����Բ���û�д���Ŷ ���Է���ʹ��

*/

void myfunc3(int *a, int n)
{

	int i, j, temp, k;
	for (i = 0; i < n - 1; i++)
	{

		k = i;
		for (j = i + 1; j <= n - 1; j++)
		{

			if (a[k] < a[j])
			{
				k = j;
			}
		}

		if (k != i)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}

/*************************FOUR FUNCTION**************************/

/*
	
	@param:�ú�����������ѡ�������е������ ����С��
	@param:�ú��������������� ��һ��Ϊ������ �ڶ���Ϊ����
	@param:�ú���û�з���ֵŶ
	@param:�ú����Ѿ����Բ���û�д���Ŷ ���Է���ʹ��

*/

void myfunc4(int *a, int n)
{

	int i, max, min;
	max = a[0];
	min = a[0];
	for (i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	for (i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("Max is %d\n", max);
	printf("Min is %d\n", min);
}

/*************************Five FUNCTION**************************/

/*
	
	@param:�ú�����������ѡ��������������λ���λ��� 12345 -�� 54321
	@param:�ú��������������� ��һ��Ϊ������ �ڶ���Ϊ����
	@param:�ú���û�з���ֵŶ
	@param:�ú����Ѿ����Բ���û�д���Ŷ ���Է���ʹ��

*/

void myfunc5(int *a, int n)
{

	int i, j, t;
	for (i = 0, j = n - 1; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j--] = t;
	}
}

/*************************Six FUNCTION**************************/

/*
	
	@param:�ú�����������ѡ��������������λ���λ��� 12345 -�� 54321  ����whlieд
	@param:�ú��������������� ��һ��Ϊ������ �ڶ���Ϊ����
	@param:�ú���û�з���ֵŶ
	@param:�ú����Ѿ����Բ���û�д���Ŷ ���Է���ʹ��

*/
