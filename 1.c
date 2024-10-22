// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int stu_id;
//     char stu_name[100];
//     int stu_age;
//     char stu_course[100];
//     char stu_city[100];
//     int stu_standered;
//     char stu_school[100];
// };
// void main()
// {

//     struct student s1;
//     s1.stu_id = 10;
//     strcpy(s1.stu_name, "tarang");
//     s1.stu_age = 2;
//     strcpy(s1.stu_course, "full stack");
//     strcpy(s1.stu_city, "kothariya");
//     s1.stu_standered = 2;
//     strcpy(s1.stu_school, "gandhi");

//     printf("%d ", s1.stu_id);
//     printf("%s ", s1.stu_name);
//     printf("%d ", s1.stu_age);
//     printf("%s ", s1.stu_course);
//     printf("%s ", s1.stu_city);
//     printf("%d ", s1.stu_standered);
//     printf("%s ", s1.stu_school);
// }

#include <stdio.h>

struct Employee
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main()
{
    struct Employee employees[3]; // Change the size based on the number of employees you need

    // Employee 1
    employees[0].emp_id = 101;
    strcpy(employees[0].emp_name, "Alice");
    employees[0].emp_age = 30;
    strcpy(employees[0].emp_role, "Developer");
    strcpy(employees[0].emp_city, "New York");
    employees[0].emp_experience = 5;
    strcpy(employees[0].emp_company_name, "TechCorp");

    // Employee 2
    employees[1].emp_id = 102;
    strcpy(employees[1].emp_name, "Bob");
    employees[1].emp_age = 35;
    strcpy(employees[1].emp_role, "Manager");
    strcpy(employees[1].emp_city, "Los Angeles");
    employees[1].emp_experience = 10;
    strcpy(employees[1].emp_company_name, "BusinessInc");

    // Employee 3
    employees[2].emp_id = 103;
    strcpy(employees[2].emp_name, "Charlie");
    employees[2].emp_age = 28;
    strcpy(employees[2].emp_role, "Designer");
    strcpy(employees[2].emp_city, "Chicago");
    employees[2].emp_experience = 3;
    strcpy(employees[2].emp_company_name, "CreativeWorks");

    // Printing Employee Records
    printf("Employee ID: %d\n", employees[0].emp_id);
    printf("Name: %s\n", employees[0].emp_name);
    printf("Age: %d\n", employees[0].emp_age);
    printf("Role: %s\n", employees[0].emp_role);
    printf("City: %s\n", employees[0].emp_city);
    printf("Experience: %d\n", employees[0].emp_experience);
    printf("Company: %s\n\n", employees[0].emp_company_name);

    printf("Employee ID: %d\n", employees[1].emp_id);
    printf("Name: %s\n", employees[1].emp_name);
    printf("Age: %d\n", employees[1].emp_age);
    printf("Role: %s\n", employees[1].emp_role);
    printf("City: %s\n", employees[1].emp_city);
    printf("Experience: %d\n", employees[1].emp_experience);
    printf("Company: %s\n\n", employees[1].emp_company_name);

    printf("Employee ID: %d\n", employees[2].emp_id);
    printf("Name: %s\n", employees[2].emp_name);
    printf("Age: %d\n", employees[2].emp_age);
    printf("Role: %s\n", employees[2].emp_role);
    printf("City: %s\n", employees[2].emp_city);
    printf("Experience: %d\n", employees[2].emp_experience);
    printf("Company: %s\n", employees[2].emp_company_name);
}