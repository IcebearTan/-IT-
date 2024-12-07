#include<stdio.h>
int main(){
	int n,n_letter=0,n_number=0,n_space=0,n_other=0;
	n=getchar(); 
	while(n!='\n'){
		if((n>='a'&&n<='z')||(n>='A'&&n<='Z')){
			n_letter++;
		}
		else if((n>='0'&&n<='9')){
			n_number++;
		}
		else if(n==' '){
			n_space++;
		}
		else{n_other++;
		}
	}
	printf("字母数量：%d\n数字数量：%d\n空格数量：%d\n其他字符：%d",n_letter,n_number,n_space,n_other);
	return 0;
}
