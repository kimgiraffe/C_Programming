#include <stdio.h>
#include <math.h> 
void main(void) {
	int N; 			//N = number of input_data
	float data; 
	float M2 = 0, E2 = 0; 	//initialize
	float std_dev;
	printf("�������� ������ �Է��Ͻÿ�: ");
	scanf("%d", &N);		  	//input N
	printf("�����͸� %d�� �Է��Ͻÿ�: ",N);
	int i;
	for (i = 1; i <= N; i++) {
		scanf("%f", &data);	 	//input data
		M2 += data * data;		//accumulate data square
		E2 += data;		//accumulate data
	}
	M2 = M2 / N;			//average of sum (data^2)
	E2 = (E2 / N) * (E2 / N);			//average^2
	std_dev = sqrt(M2 - E2);
	printf("ǥ������ = %f\n", std_dev);
}
