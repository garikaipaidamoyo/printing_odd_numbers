#include <stdio.h>
	 int main(void){
	int i,start,end;

	 printf("Enter starting point:");
	 scanf("%d", &start);
	 printf("Enter ending point:");
	 scanf("%d", &end);
	 printf("your numbers start from %d to %d/n",start,end);
	if(start %2 ==0){
		start ++;
	}

	for(i=start;i<=end;1+=2){

	printf("%d", i);
	printf("  ");
	}

	   return 0;
	 }
