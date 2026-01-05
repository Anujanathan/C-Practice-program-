#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

void push() {
    struct student *newnode;

    newnode = (struct student *)malloc(sizeof(struct student));

    scanf("%d", &newnode->id);
    scanf("%d", &newnode->Maths);
    scanf("%d", &newnode->Science);

    newnode->next = top;
    top = newnode;
}

void pop() {
    struct student *temp;

    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Popped: ID:%d Maths:%d Science:%d\n",
           temp->id, temp->Maths, temp->Science);

    top = top->next;
    free(temp);
}

void display() {
    struct student *temp = top;

    if (top == NULL) {
        printf("Stack Empty\n");
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
                push();
                break;
            case 2:
                pop();
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
