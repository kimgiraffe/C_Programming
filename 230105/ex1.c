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
	}status;
}PERSON;

void printPerson(PERSON p);

void main() {
	PERSON person1, person2;
	person1.type = 1;
	strcpy(person1.status.prof.name, "james");
	strcpy(person1.status.prof.mail, "james@hanmail.net");
	person1.status.prof.mobile = 027063456;

	person2.type = 2;
	strcpy(person2.status.stu.name, "david");
	strcpy(person2.status.stu.major, "cs");
	person2.status.stu.ID = 20010123;
	person2.status.stu.cgpa = 0.55f;

	printPerson(person1);
	printPerson(person2);
}

void printPerson(PERSON p) {
	if (p.type == 1) {
		printf("-------------------------\n");
		printf("name: %s\n", p.status.prof.name);
		printf("mail: %s\n", p.status.prof.mail);
		printf("mobile: %d\n", p.status.prof.mobile);
	}
	else {
		printf("-------------------------\n");
		printf("name: %s\n", p.status.stu.name);
		printf("major: %s\n", p.status.stu.major);
		printf("id: %d\n", p.status.stu.ID);
		printf("cgpa: %f\n", p.status.stu.cgpa);
	}
}