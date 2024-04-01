#include <stdio.h>

int main(void)
{

	typedef struct student
	{
		int age;
		char* name;
		float score;
	}student;

	student st1;
	student st2;
	st1.name = "John";
	st1.age = 12;
	st1.score = 10.5;

	printf("%s\n", st1.name);
}
