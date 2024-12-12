#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> 
#include<stdio.h>
int main() {
	int a1[3] = { 0 };
	int a2[3] = { 0 };
	//	int a3[4]={0};
	//	int a4[4]={0};
	//	int a5[4]={0};
	int cur = 0;
	int answer[100000] = { 0 };
	for (int a11 = 2; a11 < 10; a11 += 2) {
		for (int a12 = 0; a12 < 10; a12 += 2) {
			for (int a13 = 0; a12 < 10; a12 += 2) {
				for (int a21 = 2; a21 < 10; a21 += 2) {
					for (int a22 = 0; a22 < 10; a22 += 2) {
						for (int a23 = 0; a23 < 10; a23 += 2) {
							int result[6] = { 0 };
							int i = a11 * 100 + a12 * 10 + a13;
							int j = a21 * 100 + a22 * 10 + a23;
							int a[3] = { 0 };
							a[0] = i * a21;
							a[1] = i * a22;
							a[2] = i * a23;
							if ((!(a[0] > 999)) || (!(a[1] > 999)) || (!(a[2] > 999))) {
								continue;
							}
							int space1[4] = { 0 };
							space1[0] = a[0] % 10;
							space1[1] = (a[0] / 10) % 10;
							space1[2] = (a[0] / 100) % 10;
							space1[3] = a[0] / 1000;

							int mult = i * j;
							result[0] = mult % 10;
							result[1] = (mult / 10) % 10;
							result[2] = (mult / 100) % 10;
							result[3] = (mult / 1000) % 10;
							result[4] = (mult / 10000) % 10;
							result[5] = mult / 100000;
							int key[5] = { 0 };
							int key1[5] = { 0 };
							if ((((space1[0] + 1) % 2) == 0) ||( ((space1[1] + 1) % 2) == 0) || (((space1[2] + 1) % 2) == 0) || (((space1[3] + 1) % 2) == 0) || (((space1[4] + 1) % 2) == 0)  ){
								continue;
							}
							int space2[4] = { 0 };
							space2[0] = a[1] % 10;
							space2[1] = (a[1] / 10) % 10;
							space2[2] = (a[1] / 100) % 10;
							space2[3] = a[1] / 1000;
							if ((((space2[0] + 1) % 2) == 0) || (((space2[1] + 1) % 2) == 0) || (((space2[2] + 1) % 2) == 0) || (((space2[3] + 1) % 2) == 0) || (((space2[4] + 1) % 2) == 0)) {
								continue;
							}
							int space3[4] = { 0 };
							space3[0] = a[2] % 10;
							space3[1] = (a[2] / 10) % 10;
							space3[2] = (a[2] / 100) % 10;
							space3[3] = a[2] / 1000;
							if ((((space3[0] + 1) % 2) == 0) || (((space3[1] + 1) % 2) == 0) || (((space3[2] + 1) % 2) == 0) || (((space3[3] + 1) % 2) == 0) || (((space3[4] + 1) % 2) == 0)) {
								continue;
							}
							for (int h = 0; h < 5; h++) {
								switch (result[h]) {
								case 0:key[0] = 1; break;
								case 2:key[1] = 1; break;
								case 4:key[2] = 1; break;
								case 6:key[3] = 1; break;
								case 8:key[4] = 1; break;
								}
							}
							switch (result[5]) {
							case 2:key[1] = 1; break;
							case 4:key[2] = 1; break;
							case 6:key[3] = 1; break;
							case 8:key[4] = 1; break;
							}
							for (int h = 0; h < 5; h++) {
								if (key[h] == 0) {
									goto next;
								}
							}
							answer[2 * cur] = i;
							answer[2 * cur + 1] = j;
							cur++;
						next:;
						}
					}
				}
			}
		}
	}
	for (int n = 0; n < cur; n++) {
		printf("%d %d\n", answer[n * 2 + 1], answer[n * 2]);
	}
	printf("总共有%d对数对符合题意", cur);
	return 0;
}
