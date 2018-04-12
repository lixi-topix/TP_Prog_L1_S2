#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main()
{
    student *st_arr;
    date d1;
    int n;
    char l[30],f[30];
    printf("Number of students: ");
    scanf("%d",&n);
    st_arr=(student *) malloc(n*sizeof(student));
    fill_arr_stu(n,st_arr);
    sort_arr_stu(n,st_arr);
    display_arr_stu(n,st_arr);
}

int main9()
{
    student *st_arr;
    date d1;
    int n;
    char l[30],f[30];
    printf("Number of students: ");
    scanf("%d",&n);
    st_arr=(student *) malloc(n*sizeof(student));
    fill_arr_stu(n,st_arr);
    youngest(n,st_arr);
}

int main8()
{
    student *st_arr;
    int n;
    char l[30],f[30];
    printf("Number of students: ");
    scanf("%d",&n);
    st_arr=(student *) malloc(n*sizeof(student));
    fill_arr_stu(n,st_arr);
    printf("Search: First name? ");
    scanf("%s",&f);
    printf("Search: Last name? ");
    scanf("%s",&l);
    search_arr_stu(n,st_arr,f,l);
}
