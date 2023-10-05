 #include<stdio.h>
 int main(){
	int num, sum, temp, rem;
	printf("Enter number = ");
	scanf("%i", &num);
	
	temp=num;
	while(num>0){
		rem=num%10;
		sum = sum+rem*rem*rem;
		num = num/10;
		
	}
	if (temp==sum)
	     printf("\nArmstrong");
	else
	     printf("\nNot Armstrong");
	
	return 0;
}


