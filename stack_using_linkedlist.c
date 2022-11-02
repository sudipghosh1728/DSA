#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void push(int value){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=value;
    if(top==NULL){
        new_node->next=NULL;
    }
    else{
        new_node->next=top;
    }
    top=new_node;
    printf("Node is Inserted\n");
}
void pop(){
    if(top==NULL){
        printf("Stack Underflow\n");
    }
    else{
        struct node *temp=top;
        int temp_data=top->data;
        top=top->next;
        free(temp);
        printf("Popped element is: %d\n",temp_data);
    }
}
void display(){
    if(top==NULL){
        printf("Stack Underflow\n");
    }
    else{
        printf("The stack is: \n");
        struct node *temp=top;
        while(temp->next!=NULL){
            printf("%d--->",temp->data);
            temp=temp->next;
        }
        printf("%d--->NULL\n\n",temp->data);
    }
}
int main(){
    int choice, value;
    printf("Implementation of Stack using Linked List\n");
    while(1){
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("What is your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
        }
    }
}
