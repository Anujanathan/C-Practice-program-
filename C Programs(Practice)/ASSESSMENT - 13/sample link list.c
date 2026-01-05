#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void create_sample_list() {
    int i;
    struct student *temp, *newnode;

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
    int target, choice;
    struct student *newnode, *temp = head, *prev = NULL;

    newnode = (struct student *)malloc(sizeof(struct student));
    scanf("%d", &newnode->id);
    scanf("%d", &newnode->Maths);
    scanf("%d", &newnode->Science);

    scanf("%d", &target);   
    scanf("%d", &choice);   

    while (temp != NULL && temp->id != target) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("ID not found\n");
        free(newnode);
        return;
    }

    if (choice == 1) {   
        if (prev == NULL) {
            newnode->next = head;
            head = newnode;
        } else {
            prev->next = newnode;
            newnode->next = temp;
        }
    } else if (choice == 2) {   
        newnode->next = temp->next;
        temp->next = newnode;
    } else {
        printf("Invalid choice\n");
        free(newnode);
    }
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
    int ch;

    create_sample_list();   

    while (1) {
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert_entry();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}
