#include <stdio.h>
#include "Students structure.h"
student stud;
int main()
{
	printf("Welcome\n");
	stud.birthdate[2]=2004;
	stud.name[0]='M';
	stud.name[1]='o';
	stud.name[2]='h';
	stud.name[3]=' ';
	stud.name[4]='T';
	printf("birthyear: %d\n",stud.birthdate[2]);
	printf("Name: %s",stud.name);
}
