//selection sorting
//sicoli piersilvio uniba

#include <stdio.h>

int a[] = {5, 2, 3, 6, 9, 1, 7};
int n = sizeof(a) / sizeof(a[0]);
int k, i, j, min, t;

void sort(){
	

	for(i = 0; i < n - 1; i++){
		min = a[i];
		k = i;
		for(j = i + 1; j < n; j++){
			if(min > a[j]){
				min = a[j];
				k = j;
			}
		}

		t = a[k];   
        a[k] = a[i];
        a[i] = t;
	}
}

int main(){

	sort();

	for(i = 0; i < n; i++){
		printf(" %d", a[i]);
	}

	return 0;
}
