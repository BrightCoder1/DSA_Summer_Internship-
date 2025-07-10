#include <STDIO.H>
struct employee
{
    int age;
    int salary;
    int id;
};

int main()
{
    struct employee vishal;
    vishal.age = 20;
    vishal.salary = 500000;
    vishal.id = 1;

    printf("Employee age: %d \n", vishal.age);

    if (vishal.salary >= 10000 && vishal.salary < 50000)
    {
        printf("(Employee) salary: %d \n", vishal.salary);
    }
    else if (vishal.salary >= 50000 && vishal.salary <= 10000)
    {
        printf("Manager salary: %d \n", vishal.salary);
    }
    else if (vishal.salary > 100000)
    {
        printf("C.M salary: %d \n", vishal.salary);
    }
    else
    {
        printf("You enter wrong salary.");
    }

    printf("Employee id: %d \n", vishal.id);
    return 0;
}