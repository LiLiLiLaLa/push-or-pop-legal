#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

typedef int DataType;

typedef struct Stack
{
	DataType* _a;
	int _top;		// ջ��
	int _capacity;  // ���� 
}Stack;

void StackInit(Stack* ps);//��ʼ��ջ
void StackDestory(Stack* ps);//����ջ
void StackPush(Stack* ps, DataType x);//����Ԫ��
void StackPop(Stack* ps);//����Ԫ��
DataType StackTop(const Stack* ps);//����ջ����Ԫ�أ�������������Ԫ�أ�
int StackEmpty(const Stack* ps);//�ж�ջ�Ƿ�Ϊ��
int StackSize(const Stack* ps);//����ջ���ж��ٸ�Ԫ��
void TestStack();

