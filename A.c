
#include <stdio.h>

int main() {
   for(int i = 1;i<=5;i++){
	
       for(int k =1;k<=5-i;k++){
           printf(" ");
        
       }
       for(int j=1;j<=i;j++){
           printf("*");
        
       }
       for(int j=1;j<=i-1;j++){
           printf("*");
       }
       printf("\n");
   }
   for(int i = 4;i>=1;i--){
       for(int k =1;k<=5-i;k++){
           printf(" ");
        
       }
       for(int j=1;j<=i;j++){
           printf("*");
        
       }
       for(int j=1;j<=i-1;j++){
           printf("*");
       }
       printf("\n");
   }

    return 0;
}