#include <stdio.h>
#include <string.h>
typedef struct {
	char name[20];
	char mail[20];
	int mobile;
} PROFESSOR;
typedef struct {
	char name[20];
	char major[10];
	int ID;
	float cgpa;
} STUDENT;
typedef struct {
	char type;
	union {
		PROFESSOR prof;
		STUDENT stu;
	}u;
}PERSON;

void printPerson(PERSON p);

void main() {
	PERSON person1, person2;
	person1.type = 1;
	strcpy(person1.u.prof.name, "james");
	strcpy(person1.u.prof.mail, "james@hanmail.net");
	person1.u.prof.mobile = 027063456;

	person2.type = 2;
	strcpy(person2.u.stu.name, "david");
	strcpy(person2.u.stu.major, "cs");
	person2.u.stu.ID = 20010123;
	person2.u.stu.cgpa = 0.55f;

	printPerson(person1);
	printPerson(person2);
}

void printPerson(PERSON p) {

	if (p.type == 1) {
		printf("-------------------------\n");
		printf("name: %s\n", p.u.prof.name);
		printf("mail: %s\n", p.u.prof.mail);
		printf("mobile: %d\n", p.u.prof.mobile);
	}
	else {
		printf("-------------------------\n");
		printf("name: %s\n", p.u.stu.name);
		printf("major: %s\n", p.u.stu.major);
		printf("id: %d\n", p.u.stu.ID);
		printf("cgpa: %f\n", p.u.stu.cgpa);
	}
}