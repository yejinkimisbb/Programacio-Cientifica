#include<stdio.h>

void FindMcdAndMcm(int*, int*);

int main(void){

	int n1, n2;

	printf("Enter first number : ");
	scanf("%d", &n1);	

	printf("Enter second  number : ");
	scanf("%d", &n2);
	
	if(n1 > 0 && n2 > 0){FindMcdAndMcm(&n1, &n2);}

	printf("Mcd is %d\n", n1);
	printf("Mcm is %d\n", n2);	

	return 0;
}

void FindMcdAndMcm(int *num1, int *num2){

	int min, max, i;
	min = *num1;
	max = *num2;
	(*num1 > *num2) ? (max = *num1) : (min = *num2);
	
	/*find Mcd*/
	i = min;
	while(i > 0){
		if((*num1)%i==0 && (*num2)%i==0){
			min=i;
			break;
		}
		i--;
	}
	/*find Mcm*/
	i=max;
	while(1){
		if(i%(*num1)==0 && i%(*num2)==0){
			max=i;
			break;
		}
		i++;
	}

	*num1 = min;
	*num2 = max;
}

