#include "student.h"
#include <stdio.h>
#include <stdlib.h>
void student_printAll(struct student*arr,int size);


void student_print(struct student s)
{
    printf("name:");
    string_print(s.name);
    printf("age:%d\n",s.age);
    printf("grade:%c",s.grade);
}

void student_printByRef(struct student*p)
{
    printf("name:");
    string_print((*p).name);
    printf("age:%d\n",(*p).age);
    printf("grade:%c\n",(*p).grade);
}

struct student student_scan(void)
{
    struct student s;
    printf("name:");
    scan_string(s.name);
    printf("age:");
    scanf("%d",&s.age);
    fflush(stdin);
    printf("grade:");
    scanf("%c",&s.grade);
    return s;
}
void student_printAll(struct student*arr,int size)
{
    int i;
    printf("name           |age|grade \n");
    printf("--------------------------\n");
    for(i=0;i<size;i++)
    {

        printf("%-15s|%d |%c\n",arr[i],arr[i].age,arr[i].grade);

    }
}
void struct_swap(struct student*arr,int j,int max)
{
   struct student temp;
   temp = arr[j];
   arr[j]=arr[max];
   arr[max]=temp;

}
void selection_sort_struct(struct student*arr,int size)
{

    int i,j,max,temp,l=0;
    for(j=0;j<size;j++)
    {
        max = size-1;
        for(i=l;i<size;i++)
        {
            if(arr[i].age>arr[max].age)
            {
                max = i;
            }
        }
        struct_swap(arr,j,max);
        l++;
    }
}



