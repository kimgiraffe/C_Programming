#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char mail[20];
    int mobile;
    char major[5];
    int id;
    float cgpa;
} Person;

void printPerson(Person p);

void main() {
    Person person1 = {"james" , "james@hanmail.net", 6055726, "", 0, 0.0};
    Person person2 = {"david" , "", 0, "cs", 20010123, 0.550000};

    printPerson(person1);
    printPerson(person2);
}

void printPerson(Person p){
    printf("-------------------------\n");
    if(strcmp(p.name, "") != 0){
        printf("name: %s\n", p.name);
    }
    if(strcmp(p.mail, "") != 0){
        printf("mail: %s\n", p.mail);
    }
    if(p.mobile != 0){
        printf("mobile: %d\n", p.mobile);
    }
    if(strcmp(p.major, "") != 0){
        printf("major: %s\n", p.major);
    }
    if(p.id != 0){
        printf("id: %d\n", p.id);
    }
    if(p.cgpa != 0.0){
        printf("cgpa: %f\n", p.cgpa);
    }
}