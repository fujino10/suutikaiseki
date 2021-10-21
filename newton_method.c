#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{

	double x, esp, delta, abs_delta;
	int n_max, n;
	double fx, gx;
	
	x = 1.0;
        esp = 0.000000000001;
	
	
	n_max = 300;
	n = 0;

	do{

	fx =   2 * x * x * x + 7 * x * x + 8 * x + 3;
	gx =  6 * x * x + 14 * x + 8;

	delta = -1 * (fx)/(gx);
	x = x + delta;
	
	abs_delta = fabs(delta);

	n = n + 1;

	printf("第%d回目\nx = %0.10f\n",n, x);

	if(n == n_max){
	printf("近似失敗！");
	exit(0);
	}

	}while(abs_delta > esp && n <= n_max);



	return 0;

}
