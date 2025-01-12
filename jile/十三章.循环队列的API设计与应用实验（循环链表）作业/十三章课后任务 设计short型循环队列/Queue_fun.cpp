#include<string.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct  CirQue {
	int front;
	short* element;
	int rear;
	int element_num;
}; CirQue;


CirQue* init_Cir(int char_size, int insert_num, short* content) {
	CirQue* Que = (CirQue*)malloc(sizeof(CirQue));
	Que->element = (short*)malloc(sizeof(short) * char_size);
	Que->front = 0;
	Que->rear = 0;
	if (insert_num > 20)insert_num = 20;
	Que->element_num = char_size;
	for (int i = 0; i < insert_num; i++) {
		Que->element[Que->front++] = content[i];
	}
	return Que;
}


void EnQueue(CirQue* que, int num, short* content) {
	if (num > (que->element_num - (que->front - que->rear)))num=(que->element_num - (que->front - que->rear));
	for (int i = 0; i < num;i++) {
		que->element[que->front++] = content[i];
	}
}
void DeQueue(CirQue* que, int num) {
	if (num > (que->front - que->rear))num = (que->front - que->rear);
	if (num) {
		for (int i = 0; i < num;i++){ 
			printf("���ӵĵ�%d��Ԫ�أ�%hd\n", i+1,que->element[que->rear++]);
		}
	}
}

void CalQueue(CirQue* que) {
	printf("�����е�ǰʣ��Ԫ��Ϊ��%d", (que->front - que->rear));
}