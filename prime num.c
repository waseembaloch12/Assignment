 /*
 				Name : Muhammad Waseem
 				Father's Name : Gull Baig Khan 
 				Department : CS
 				Semester : 1st
 				Roll No : 36
 */
 #include <stdio.h>
int isprime(int number)
{
	if(number<2)
	{
		return 0;
	}
	for(int i=2;i*i<=number;i++){
		if(number% i==0)
		{
			return 0;
		}
	}
	return 1;
	
}
int main()
{
	int a,b;
	printf("Enter any number between 2 to 100\t");
	scanf("%d",&a);
	if(a>=2 && a<=100)
	{
		b=isprime(a);
		printf("%d",b);
	}
	else if(a==1)
	{
		printf("Try to press again number between 2 to 100\t");
		scanf("%d",&a);
		b=isprime(a);
		printf("%d",b);
	}
	else
	{
		printf("%d is out of range",a);
	}
}
		
	