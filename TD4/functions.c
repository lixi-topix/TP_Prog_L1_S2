#include <string.h>
#include "functions.h"

void readate(date *dateX)
{
    printf("Day, Month, Year? ");
    scanf("%d %d %d",&dateX->day,&dateX->month,&dateX->year);
}

void displaydate(date dateX)
{
    printf("%d/%d/%d",dateX.day,dateX.month,dateX.year);
}

int compare_date(date *d1, date *d2)
{
    if(d1->year>d2->year || d1->year==d2->year && (d1->month>d2->month || d1->month==d2->month && (d1->day>d2->day)))
        return 1;
    else if(d1->year<d2->year || d1->year==d2->year && (d1->month<d2->month || d1->month==d2->month && (d1->day<d2->day)))
        return -1;
    return 0;
}

void read_stu(student *std1)
{
    printf("First name? ");
    scanf("%s",&std1->fName);
    printf("Last name? ");
    scanf("%s",&std1->lName);
    printf("Date of birth: \n");
    readate(&std1->bDate);
    printf("Student number: ");
    scanf(" %ld",&std1->studNumber);
}

void display_stu(student *std1)
{
    printf("First name: %s\n",std1->fName);
    printf("Last name: %s\n",std1->lName);
    printf("Birth date (dd/mm/yy): ");
    displaydate(std1->bDate);
    printf("\nStudent number: %ld\n",std1->studNumber);
}

void fill_arr_stu(int n,student *st)
{
    for(int i=0;i<n;i++)
    {
        printf("Student n%d:\n",i);
        read_stu(&st[i]);
    }
}

void display_arr_stu(int n, student *st)
{
    for(int i=0;i<n;i++)
    {
        printf("Student n%d:\n",i);
        display_stu(&st[i]);
    }
}

void search_arr_stu(int n, student *st, char fN[],char lN[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(fN,st[i].fName)==0 && strcmp(lN,st[i].lName)==0)
            display_stu(&st[i]);
    }
}

void youngest(int n, student *st)
{
    student temp;
    temp=st[0];
    for(int i=1;i<n;i++)
    {
        if(compare_date(&temp.bDate,&st[i].bDate)==-1)
            temp=st[i];
    }
    display_stu(&temp);
}

void sort_arr_stu(int n, student *st)
{
    int unsorted;
    student temp;
    do
    {
        unsorted=0;
        for(int i=1;i<n;i++)
        {
            if(strcmp(st[i-1].lName,st[i].lName)>0)
            {
                temp=st[i-1];
                st[i-1]=st[i];
                st[i]=temp;
                unsorted=1;
            }
        }

    }while(unsorted);
}
