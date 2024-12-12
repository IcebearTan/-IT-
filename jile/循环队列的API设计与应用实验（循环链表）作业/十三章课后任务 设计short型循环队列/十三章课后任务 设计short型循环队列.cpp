#include <iostream>
#include<stdio.h>
#include"Queue_fun.h"

int main()
{
	short content1[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		content1[i] = i+1;
	}
	short content2[5] = { 1,5,10,20,25 };
	CirQue* Que= init_Cir(20, 10, content1);
	EnQueue(Que, 5, content2);
	DeQueue(Que, 12);
	CalQueue(Que);
	return 0;
}

