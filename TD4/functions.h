#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

typedef struct
{
    int day;
    int month;
    int year;
}date;

typedef struct
{
    char fName[30];
    char lName[30];
    date bDate;
    long studNumber;
}student;

void readate(date *dateX);

void displaydate(date dateX);

int compare_date(date *d1, date *d2);

void read_stu(student *std1);

void display_stu(student *std1);

void fill_arr_stu(int n,student *st);

void display_arr_stu(int n, student *st);

void search_arr_stu(int n, student *st, char fN[],char lN[]);

void youngest(int n, student *st);

void sort_arr_stu(int n, student *st);

#endif // MAIN_H_INCLUDED
