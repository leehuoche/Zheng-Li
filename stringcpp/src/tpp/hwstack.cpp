
/*
����2��Ŀ
��ջ
����C��������ʵ��һ����ջ�Ļ������ܣ����100������Ϊint����������
��ʼ��һ��ջ
ʵ��������ջ����
��ѯ���ݳ�ջ����
��ѯջ�е����ݸ���
��ȡջ��Ԫ��
�ͷ�ջ

*/


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_NUM     100


typedef struct  Stackh_
{
	int size;
	int* s;
	int top;
}Stackh;


int initStack(Stackh* st) {
	memset(st,0,sizeof(Stackh));

	int* val = (int*)malloc(sizeof(int)* MAX_NUM);
	if (val) {
		st->s = val;
	}
	else {
		printf("malloc failed");
		return -1;
	}

	st->size = MAX_NUM;
	st->top = -1;
	return 0;

}


int pushInStack(Stackh* st,int val) {
	if (st->top < st->size -1) {
		st->top++;
		st->s[st->top] = val;
	}
	else {
		printf("stack is full max=%d\n",MAX_NUM);
		return -1;
	}
	return 0;

}

int popOutStack(Stackh* st) {
	if (st->top>=0) {
		
		return st->s[st->top--];
	}
	else {
		printf("stack is empty\n");
		return -1;
	}
}


int getTop(Stackh* st) {
	if (st->top>=0) {
		return st->s[st->top];
	}
	else {
		printf("stack is empty\n");
		return -1;
	}
}


int getSize(Stackh* st) {
	return st->top + 1;
}

void UninitStack(Stackh* st) {
	if (st->s) {
		free(st->s);
	}
}