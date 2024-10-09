#include<stdio.h>
#include<stdlib.h>

int prodpol(int , double *, int , double *, double *);

int main(){
	
	int p_degree, q_degree, total_degree, i;
	double *p=NULL, *q=NULL, *pq=NULL;

	scanf("%d", &p_degree);
	p=(double*)malloc((p_degree+1)*sizeof(double));

	scanf("%d", &q_degree);
	q=(double*)malloc((p_degree+1)*sizeof(double));

	printf("Enter polynomial p");
	for(i=0; i<= p_degree; i++){
		scanf("%lf", (p+i));
	}

	printf("Enter polynomial q");
	for(i=0; i<= q_degree; i++){
		scanf("%lf", (q+i));
	}
	
	total_degree = prodpol(p_degree, p, q_degree, q, pq);

	for(i=0; i< total_degree; i++){
		printf("%lf ", *(pq+i));
	}

	free(p);	
	free(q);
	return 0;
}
int prodpol(int n, double *p, int m, double *q, double  *pq){

	int total_length, index, i, j;
	total_length = n+m;
	pq = (double*)malloc((total_length+1)*sizeof(double));

	index = total_length;
	for(i=n; i>=0; i--){
		for(j=m; j>=0; j--){
			*(pq+index)+=(*(p+i))*((*q+j));
		}
		index--;
	}	

	return total_length;

}

