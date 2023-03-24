#include <stdio.h>
 
//function to check leap year
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}

int main()
{
    int i,rango1,rango2;
 
    printf("Ingrese el rango de years que desea ");
    scanf("%d %d",&rango1,&rango2);
    
  
    printf("Leap years from %d to %d:\n",rango1,rango2);
    for(i=rango1;i<=rango2;i++)
    {
        
        if(checkLeapYear(i))
            printf("%d\t",i);
    }
     
    return 0;
}
