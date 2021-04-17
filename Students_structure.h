#ifndef _Students_structure_H_
#define _Students_structure_H_
typedef struct
{
	char name[30];
	short int score;
    int ID;
	short int birthdate[3];        //element #0 =day  element #2=month    element #3=year
	              //score of last year of the student
}student;
#endif
