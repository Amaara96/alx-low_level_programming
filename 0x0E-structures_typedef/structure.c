#include <stdio.h>

int main(void)
{

	struct student
	{
		int age;
		char* name;
		float score;
	};

	struct student st1 = {20, "John", 12.5};
	struct student st2 = {45, "Amarachi", 49.5};

	printf("%s\n", st1.name);
}
