#include <stdio.h>

void mulMatrix(int(*p)[3], int x, int(*q)[4], int y, int(*r)[4], int z);

void main(void) {
	int z, zz;
	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[3][4] = { 1, 4, 7, 10, 2, 5, 8, 11, 3, 6, 9, 12 };
	int result[3][4] = { 0 };

	//배열 a, b 출력
	for (z = 0; z < 3; z++) {
		for (zz = 0; zz < 3; zz++) {
			printf("%d ", a[z][zz]);
		}
		printf("\n");
	}
	printf("\n");
	for (z = 0; z < 3; z++) {
		for (zz = 0; zz < 4; zz++) {
			printf("%d ", b[z][zz]);
		}
		printf("\n");
	}
	printf("\n");

	mulMatrix(a, 3, b, 3, result, 3); // 배열 3개 넘기는 부분 

	//배열 result 출력
	for (z = 0; z < 3; z++) {
		for (zz = 0; zz < 4; zz++) {
			printf("%d ", result[z][zz]);
		}
		printf("\n");
	}
}

void mulMatrix(int(*p)[3], int x, int(*q)[4], int y, int(*r)[4], int z) {
	int i, j, k;
	int a, b, c;

	//첫번째 반복 횟수 i 구하기, p의 행
    i = sizeof(*p)/sizeof(int);

	//두번째 반복 횟수 j 구하기, q의 열
    j = sizeof(q[0])/sizeof(int);


	//세번째 반복 횟수 k 구하기
    k = sizeof(*p)/sizeof(int);

	for (a = 0; a < i; a++) {
		for (b = 0; b < j; b++) {
			for (c = 0; c < k; c++)
				r[a][b] += p[a][c] * q[c][b];
		}
	}
}
