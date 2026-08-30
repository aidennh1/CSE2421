#include <stdlib.h>
#include <stdio.h>
int sum_array(int nums[], int len);
int sum_array(int nums[], int len){
	int sum = 0;
	for(int i = 0; i < len; i++){
		sum += nums[i];
		}
	return sum;
	}

int main(void){
	int demo[] = {2,5,9,12,23};
	int len = sizeof(demo)/sizeof(demo[0]);
	printf("Array sum is %d.", sum_array(demo,len));
return 0;
	}
	


