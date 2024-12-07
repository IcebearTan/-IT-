#include<stdio.h>
#include<stdlib.h>
#define rowIndex 3
 void cal_cir(int*p,int*q,int index){
 	if(index==0){
        *p=1;
    }
    if(index>0){
        *p=1;
    *(p + index - 1) = 1;
        cal_cir(q, p, index - 1);
        for (int n = 1; n < (index - 1); n++) {
            *(p + n) = *(q + n - 1) + *(q + n);
        
    }
    }
}

 
int main(void){ 
     int *memory1=calloc(34,4);
     int *memory2=calloc(34,4);
cal_cir(memory1,memory2,rowIndex+1);
for(int n=0;n<rowIndex+1;n++){
	printf("%d ",*(memory1+n));
}
free(memory1);
free(memory2);
}

