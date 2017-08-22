#include <stdlib.h>
#include<stdio.h>

/* Comparison function. Receives two generic (void) pointers to the items under comparison. */
int compare_function(const void *p, const void *q) {
    int x = *(const int *)p;
    int y = *(const int *)q;

    /* Avoid return x - y, which can cause undefined behaviour
       because of signed integer overflow. */
    if (x < y)
        return -1;  // Return -1 if you want ascending, 1 if you want descending order. 
    else if (x > y)
        return 1;   // Return 1 if you want ascending, -1 if you want descending order. 

    return 0;
}

int main()
{
	int n,arr[10];
	printf("\n Enter Size of array :");
	scanf("%d",&n);
	
	printf("\n Enter unsorted array \n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	
/* Sort an array of n integers, pointed to by arr. */
    qsort(arr,n, sizeof (int), &compare_function);
    
    printf("Sorted array \n");
	
	for(int i=0;i<n;i++)
		printf(" %d",arr[i]);
return 0;
}
