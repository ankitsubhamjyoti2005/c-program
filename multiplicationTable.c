#include<stdio.h>
#include<string.h>
// Question : Print Multiplication table of any number entered by user
int main(){
//we are using for loop to print the table
	int table;
	printf("\nEnter the number you want multiplication table of : ");
	scanf("%d", &table);

	printf("Multiplication table of %d is as follows:\n\n", table);

	for (int i = 0; i < 11; i++)
	{
		printf("%d*%d = %d\n", table, i, table*i );
	}
	
	return 0;
}