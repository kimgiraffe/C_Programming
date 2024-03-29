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

int main() {
    int id, i;
    char name[10];
    Node* prin;

    for(i = 0; i < 5; i++){
        printf("Input student id : ");
        scanf("%d", &id);
        printf("Input student name : ");
        scanf("%s", name);

        create_Node(id, name);
    }

    prin = head;
    while(prin!= NULL) {
        printf("%d\t%s\n", prin->st_id, prin->st_name);
        prin = prin->link;
    }

    Node* cur = head;
    Node* tmp = cur;
    while(cur!=NULL){
        tmp = tmp->link;
        free(cur);
        cur = tmp;
    }

    return 0;
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