#include "Stack.h"

//typedef struct Stack
//{
//	DataType* _a;
//	int _top;		// ջ��
//	int _capacity;  // ���� 
//}Stack;

void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = (DataType*)malloc(sizeof(DataType)* 3);
	ps->_capacity = 3;
	ps->_top = 0;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

void StackPush(Stack* ps, DataType x)
{
	//����
	assert(ps);
	//�ж�ջ�Ƿ�����
	if (ps->_top == ps->_capacity)
	{
		ps->_a = realloc(ps->_a, sizeof(DataType)*(ps->_capacity + 3));
		assert(ps->_a);//���¿����ڴ�ʧ�ܻ᷵�ؿ�ָ��
		ps->_capacity += 3;
	}
	//����
	ps->_a[ps->_top] = x;
	ps->_top++;
}

void StackPop(Stack* ps)
{
	//����
	assert(ps);
	//�п�
	if (ps->_top == 0)
	{
		return;
	}
	//ɾ��
	ps->_top--;
}

DataType StackTop(const Stack* ps)
{
	//����
	assert(ps);
	//�п�
	assert(ps->_top);
	//����ջ��Ԫ��
	return ps->_a[ps->_top - 1];
}

int StackEmpty(const Stack* ps)
{
	//����
	assert(ps);
	//�п�
	if (ps->_top == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int StackSize(const Stack* ps)
{
	//����
	assert(ps);
	//����ջ���ж���Ԫ��
	return ps->_top;
}