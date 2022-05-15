#include "Stack.h"
#include"Queue.h"
void TestStack1()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	//printf("%d", StackTop(&st));
	StackDestory(&st);
}
void TestStack2()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 5);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	StackDestory(&st);
}
void TestQueue1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2); 
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
}
int main()
{
	TestQueue1();
	//TestStack1();
	//TestStack2();
		return 0;
}