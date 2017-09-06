# sangu
include<stdio.h>

int main() {
   int i, j, temp;
   printf("Enter the value of i and j: ");
   scanf("%d %d", &i, &j);
   printf("Before swapping i=%d, j=%d ", i, j);
   temp = i;
   i = j;
   j = temp;
   printf("After swapping i=%d, j=%d", i, j);
   return 0; 
}
