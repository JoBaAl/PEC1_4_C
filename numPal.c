#include <stdio.h>

int main(int argc, char **argv)
{
	//Variable definition
	int i,j,l,m,n,o,r;
	i = 0;
	r = 0;
	
	//Enter a 5 digits number
	printf("Enter a 5 digits number: ");
	scanf("%d",&n);
	
	//Save original number
	m = n;
	j = n;
	
	//Check length of the number
	l = n;
	while(l != 0)
    {
        l /= 10;
        ++i;
    }

	
	//Check if the number is bigger than 5 digits
	if(i==5){
		
		//Generate reverse number (r)
		while(j!=0)
		{
			o = (j%10);
			r=r*10+o;
			j/=10;		
		}
		
		//Check if the original number is equal than the reversed number
		if (m == r){
			printf("The number is Palindrome \n");			
		}else{
			printf("The number is not Palindrome \n");
		}
	}else{
		
		printf("Number different than 5 digits \n");
		
	}
	return 0;
}
