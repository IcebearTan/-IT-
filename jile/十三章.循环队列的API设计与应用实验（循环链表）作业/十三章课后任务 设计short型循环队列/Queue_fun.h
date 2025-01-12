#pragma once

typedef struct  CirQue {
	int front;
	short *element;
	int rear;
	int element_num;
}; CirQue;

CirQue* init_Cir(int char_size, int insert_num, short* content);
void EnQueue(CirQue* que, int num, short* content);
void DeQueue(CirQue* que, int num);
void CalQueue(CirQue* que);
