#ifndef _Students_structure_H_
#define _Students_structure_H_
typedef struct
{
	char name[32];
	short int score;//score of last year of the student
	short int birthdate[3];        //element #0 =day  element #2=month    element #3=year
    int ID;	              
}student;
#endif
