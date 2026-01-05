#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;
void create_list() {
    struct student *temp, *newnode;
    int i;

    for (i = 1; i <= 5; i++) {
        newnode = (struct student *)malloc(sizeof(struct student));
        newnode->id = i;
        newnode->Maths = 70 + i;
        newnode->Science = 80 + i;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}
void insert_entry() {
    struct student *newnode, *temp = head, *prev = NULL;
    int target, pos;

    newnode = (struct student *)malloc(sizeof(struct student));
    scanf("%d", &newnode->id);
    scanf("%d", &newnode->Maths);
    scanf("%d", &newnode->Science);

    scanf("%d", &target);  
    scanf("%d", &pos);     

    while (temp != NULL && temp->id != target) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("ID not found\n");
        free(newnode);
        return;
    }

    if (pos == 1) {  
        if (prev == NULL) {
            newnode->next = head;
            head = newnode;
        } else {
            prev->next = newnode;
            newnode->next = temp;
        }
    } else if (pos == 2) {  
        newnode->next = temp->next;
        temp->next = newnode;
    } else {
        printf("Invalid option\n");
        free(newnode);
    }
}

void delete_entry() {
    struct student *temp = head, *prev = NULL;
    int del_id;

    scanf("%d", &del_id);

    while (temp != NULL && temp->id != del_id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("ID not found\n");
        return;
    }

    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
}

void display() {
    struct student *temp = head;
    while (temp != NULL) {
        printf("ID:%d Maths:%d Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    int choice;

    create_list();  

    while (1) {
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_entry();
                break;
            case 2:
                delete_entry();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
