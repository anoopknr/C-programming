#include <stdio.h>
#include <stdlib.h>


int compare(const void * a, const void * b) // comparison function for integers 
{
   return ( *(int*)a - *(int*)b );
}

int main ()
{
   int n,array[50];
   int *item;
   int key ;
   
   printf("Enter number of elements : ");
   scanf("%d",&n);
   printf("Enter elements in sorted form \n");// note bsearch() functions works only on sorted input.
   for(int i=0;i<n;i++)
   {
	   scanf("%d",&array[i]);
   }
   printf("Enter key to search : ");
   scanf("%d",&key);

   /* using bsearch() to find key in the array */
   item = (int*) bsearch (&key, array, n, sizeof (int), compare);
   if( item != NULL ) 
   {
      printf("Found item !");
   }
   else 
   {
      printf("Key could not be found !\n");
   }
   
   return(0);
}
