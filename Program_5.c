//You will be given two numbers stored in variables 'a' and 'b'. Your task is to swap the values present and print them.
//Example
//input: 
//4 5
//output: 
//5 4

#include<stdio.h>

int main()
{
    int a, b, temp;
    
    printf("Enter 2 numbrs\n");
    scanf("%d%d", &a, &b);
    printf("numbers before swap = %d %d\n", a,b);

    //Write your code here
    temp=a;
    a=b;
    b=temp;
    

  
    printf("numbers after swap = %d %d\n", a,b);
  
    return 0;
}
