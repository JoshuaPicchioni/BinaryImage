#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

 
int main(){

	//"P6\n1000 1000\n255\n" in ASCII format
	char header[18] = {80, 54, 10, 49, 48, 48, 48, 32, 49, 48, 48, 48, 10, 50, 53, 53, 10};


    	int fd = open("generatedImage.ppm", O_WRONLY | O_CREAT | O_TRUNC, 0700); 
    	
    
    	write(fd, header, sizeof(header));

    	
    	//unsigned char RED[8] = "255 0 0 ";
    	//unsigned char GREEN[8] = "0 255 0 ";
    	//unsigned char BLUE[8] = "0 0 255 ";
    	//unsigned char WHITE[6] = "0 0 0 ";
    	//unsigned char BLACK[12] = "255 255 255 ";
    	//unsigned char SPACE[] = " ";
    	
    	
    	unsigned char RED[3] = {0xff, 0x00, 0x00};
    	unsigned char GREEN[3] = {0x00, 0xff, 0x00};
    	unsigned char BLUE[3] = {0x00, 0x00, 0xff};
    	unsigned char WHITE[3] = {0x00, 0x00, 0x00};
    	unsigned char BLACK[3] = {0xff, 0xff, 0xff};
    	unsigned char SPACE[] = "";
    
    
    	
    	int i = 0;
    	int j = 0;
    
 	
 	int k;
 	
 	int l;
 	
 	int countPlus = 499;
 	int countMinus = 501;
 	

    	
    	
    	for (i = 0; i < 1000; i++){
    	
    	
    	
    	
    		int hasNewLine = 0;
    	
    		for (j = 0; j < 1000; j++){
    		
    		
    		
    		    	if (j >= 250 && j <= 750 && i >= 250 && i <= 750){
    		    	
    		    	
    		    	
    		    		if (i <= 500){
    		    
	    		    		if (hasNewLine == 0){
	    		    		
		    		    		countMinus --;
		    		    		countPlus ++;
		    		    		hasNewLine = 1;
		    		    		
		    		    		printf("Plus: %d, Minus: %d \n" , countPlus, countMinus);
	    		    		
	    		    		}
	    		    	
	    		    	

	    			
	    			 	if ( (j >= countMinus) && (j <= countPlus) ){
	    			 	
	    			 
	    			 		write(fd, BLACK, sizeof(BLACK));
	    			 		
	    			 
	    			 	}
	    			 	
	    			 	else{
	    			 	
	    			 	
		    			 	if (i < 501){
			    			
			    				if (j > 500){
			    					write(fd, RED, sizeof(RED));
			    				}
			    				
			    				else	{
			    				
			    					write(fd, BLUE, sizeof(BLUE));
			    				
			    				}
			    			
			    			}
			    			
			    			else{
			    			
			    			    	if (j > 500){
			    					write(fd, GREEN, sizeof(GREEN));
			    				}
			    				
			    				else	{
			    				
			    					write(fd, WHITE, sizeof(WHITE));
			    				
			    				}
			    			

			    			
			    			
			    			}
			    			
			    			
			    			
	    			 	
	    			 	}
	    			 	
	    			 }
	    			 
	    			 
	    			 
	    			 
	    			 
	    			else{
    		    
	    		    		if (hasNewLine == 0){
	    		    		
		    		    		countMinus ++;
		    		    		countPlus --;
		    		    		hasNewLine = 1;
		    		    		
		    		    		printf("Plus: %d, Minus: %d \n" , countPlus, countMinus);
	    		    		
	    		    		}
	    		    	
	    		    	

	    			
	    			 	if ( (j >= countMinus) && (j <= countPlus) ){
	    			 	
	    			 
	    			 		write(fd, BLACK, sizeof(BLACK));
	    			 		
	    			 
	    			 	}
	    			 	
	    			 	else{
	    			 	
	    			 	
		    			 	if (i < 501){
			    			
			    				if (j > 500){
			    					write(fd, RED, sizeof(RED));
			    				}
			    				
			    				else	{
			    				
			    					write(fd, BLUE, sizeof(BLUE));
			    				
			    				}
			    			
			    			}
			    			
			    			else{
			    			
			    			    	if (j > 500){
			    					write(fd, GREEN, sizeof(GREEN));
			    				}
			    				
			    				else	{
			    				
			    					write(fd, WHITE, sizeof(WHITE));
			    				
			    				}
			    			

			    			
			    			
			    			}
			    			
			    			
	    			 	
	    			 	}
	    			 	
	    			 }
	    			
	    			
    		
    	
    			}
    			
    			else{
    		
    		
	    	
	    			if (i < 501){
	    			
	    				if (j > 500){
	    					write(fd, RED, sizeof(RED));
	    				}
	    				
	    				else	{
	    				
	    					write(fd, BLUE, sizeof(BLUE));
	    				
	    				}
	    			
	    			}
	    			
	    			else{
	    			
	    			    	if (j > 500){
	    					write(fd, GREEN, sizeof(GREEN));
	    				}
	    				
	    				else	{
	    				
	    					write(fd, WHITE, sizeof(WHITE));
	    				
	    				}
	    			

	    			
	    			
	    			}
	    			
	    			
	    			
    			
    			}
    		
    		}
    	
    	}
    
    
    	
    	
    	close(fd);
    	
	

    
    	return 0;

    }

 

