#include <stdio.h> 
int count_digit(int n);
int main()
 {
    printf("enter n");
    scanf("%d",&n); 
    printf("Number of digits : %d", count_digit( n));
            
    return 0; 
} 
int count_digit(int n) 
{ 
    if (n == 0) 
        return 0; 
    return 1 + count_digit(n / 10); 
} 
  
// Driver code 
