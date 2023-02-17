/*For Basic Salary >= 10000 and <= 20000, 10% of basic salary.
For Basic Salary > 20000 and <= 50000, 15% of basic salary.
For Basic Salary > 50000 and <= 100000, 20% of basic salary.
For Basic Salary > 100000, DA is not given.*/
#include <stdio.h>
#include <stdlib.h>
int calculate_DA(int basic_salary)
{
    int percentage=0;
    if(basic_salary >= 10000 && basic_salary<= 20000)
    {
        percentage = 10;
    }
    else if(basic_salary >= 20000 && basic_salary<= 50000)
    {
        percentage=15;
    }
    else if(basic_salary >= 50000 && basic_salary<= 100000)
    {
        percentage = 20;
    }
    else
    {
        percentage = 0;
    }
    return percentage;
}
int main()
{
    int basic_salary=0,DA_percentage=0;
    printf("Enter the basic salary:");
    scanf("%d",&basic_salary);
    DA_percentage = calculate_DA(basic_salary);
    float DA=0,total_salary=0;
    DA = (basic_salary*DA_percentage)/100;
    total_salary = basic_salary + DA;
    printf("The DA is: %.2f\n",DA);
    printf("The total salary is: %.2f\n",total_salary);

    return 0;
}