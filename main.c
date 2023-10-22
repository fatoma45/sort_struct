#include <stdio.h>
#include <stdlib.h>
#include "student.h"
int main()
{
     struct student s1={"Fatma Elsayed",23,'A'},s2={"Mariam Elsayed",20,'A'},s3={"Aya Elsayed Ahmed",18,'A'};
     struct student course[10]={{"fatma elsayed",23,'A'},
                               {"Mariam Elsayed",20,'A'},
                               {"Aya Elsayed",18,'A'},
                               {"MOhamed Elsayed",12,'A'},
                               {"Mohamed Ehab",11,'B'},
                               {"Sara Ehab",16,'A'}};

    student_printAll(course,6);
    selection_sort_struct(course,6);
    student_printAll(course,6);

	return 0;
}
