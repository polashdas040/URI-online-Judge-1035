#include <stdio.h>
int main() {
 
    int N,i,X;
    scanf("%d",&N);
    
   	for(i=0; i<N; i++){
   		
   		scanf("%d",&X);	
	   	
   		if(X==0){
   				printf("NULL\n");
   				
			}else if(X%2==0){
			   		if(X<0){
		   			 printf("EVEN NEGATIVE\n");
					}
					else{
					 printf("EVEN POSITIVE\n");	
					}
			    }else{
					if(X<0){
   				     printf("ODD NEGATIVE\n");
			        }
			  	    else{
			   	     printf("ODD POSITIVE\n");
			        }
				}
		   		
		   }
	
    return 0;
}
