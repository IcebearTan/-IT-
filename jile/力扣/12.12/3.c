#include<stdio.h>
#include<string.h> 
void in_quene(char *quene, int *end, char a) {
    quene[*end] = a;
    (*end)++;
}

void q_quene(int *start) {
    (*start)++;
}

int check_in_quene(char *quene, int start, int end, char n) {
    if (start >= end) return -1; // 如果队列为空，直接返回-1
    char *i = strchr(quene + start, n);
    if (i == NULL) {
        return -1;
    } else {
        return i - quene;
    }
}

int main() {
	char *s="aabaab!bb";
    int len = strlen(s);
    if(len==0){
        return 0;
    }
    char quene[len];
    memset(quene, 0, sizeof(quene));
    int max = 0;
    int start = 0, end = 0;
    for (int i = 0; i < len; i++) {
        int n = check_in_quene(quene, start, end, s[i]);
        if (n == -1) {
            in_quene(quene, &end, s[i]);
        } else {
            start = n +1;
            in_quene(quene, &end, s[i]);
        }
        if (end - start > max) {
            max = end - start;

        }
       
    }
    return max+1;
}
