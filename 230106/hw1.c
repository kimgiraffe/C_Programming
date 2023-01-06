#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Node {
    int st_id;
    char* st_name;
    struct _Node* link;
}Node;

Node* head = NULL;

void create_Node(int id, char* name);

void main() {
    Node* prev = head;
    int i;
    int id;
    char* name;
    name = (char*)malloc(sizeof(char) * 10);

    for(i = 0; i < 5; i++){
        printf("Input student id : ");
        scanf("%d", &id);
        printf("Input student name : ");
        scanf("%s", name);
        create_Node(id, name);
    }

    for(i = 0; i < 5; i++){
        printf("%d\t%s\n", head->st_id, head->st_name);
        head = head->link;
    }

    for(prev; prev!= NULL; prev= prev->link){
        free(prev);
    }
    free(name);
}

void create_Node(int id, char* name) {
    Node* new;
    new = (Node*)malloc(sizeof(Node));
    new->st_name = (char*)malloc(sizeof(char) * 10);
    new->link = NULL;
    new->st_id = id;
    strcpy(new->st_name, name);

    if(head == NULL) {
        head = new;
    }
    else {
        Node* tmp = NULL;
        for(tmp = head; tmp->link != NULL; tmp = tmp->link);
        tmp->link = new;
    }
}