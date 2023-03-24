#include <stdio.h>

struct Student
{
    char *name;
    char *email;
    float scores;
};
typedef struct Student student_t;

int main()
{
student_t student1;
student_t student2;
student_t student3;

student1.name  = "Nzekwe Vivian";
student1.email = "vivianpatrick458@gmail.com";
student1.scores = 145.5;

student2.name  = "Sandra Ike";
student2.email = "sandraike@gmail.com";
student2.scores = 156.5;

student3.name  = "Emeka Kanu";
student3.email = "emekakanu@gmail.com";
student3.scores = 126.5;

printf("\tName: %s\n", student1.name);
printf("\tEmail: %s\n", student1.email);
printf("\tScore: %f\n", student1.scores);

printf("\tName: %s\n", student2.name);
printf("\tEmail: %s\n", student2.email);
printf("\tScore: %f\n", student2.scores);

printf("\tName: %s\n", student3.name);
printf("\tEmail: %s\n", student3.email);
printf("\tScore: %f\n", student3.scores);

return 0;


}