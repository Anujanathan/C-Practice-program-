#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

void add() {
    struct student *newnode;

    newnode = (struct student *)malloc(sizeof(struct student));

    scanf("%d", &newnode->id);
    scanf("%d", &newnode->Maths);
    scanf("%d", &newnode->Science);

    newnode->next = top;
    top = newnode;
}

void remove_entry() {
    struct student *temp = top, *prev = NULL;

    if (top == NULL) {
        printf("Queue Empty\n");
        return;
    }

    if (top->next == NULL) {
        printf("Removed: ID:%d Maths:%d Science:%d\n",
               top->id, top->Maths, top->Science);
        free(top);
        top = NULL;
        return;
    }

    /* Traverse to last node */
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("Removed: ID:%d Maths:%d Science:%d\n",
           temp->id, temp->Maths, temp->Science);

    prev->next = NULL;
    free(temp);
}

void display() {
    struct student *temp = top;

    if (top == NULL) {
        printf("Queue Empty\n");
        return;
    }

    while (temp != NULL) {
        printf("ID:%d Maths:%d Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    int choice;

    while (1) {
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                remove_entry();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
