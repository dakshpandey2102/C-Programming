#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main(){

struct node *head,*newnode,*temp;
head = NULL; int choice = 1 ; 
while (choice){
    newnode = (struct node*)malloc (sizeof(struct node));
    printf("enter data");
    scanf("%d", &newnode->data);
    newnode -> next = NULL;
    if(head == NULL){
        head = temp = newnode ;
    }else{
      temp -> next = newnode ;
      temp = newnode;
    //   newnode->next=head; //link new node to prev head 
    //   head = newnode;     // move head to new node 
    }
    printf("do you want to continue (0,1)?");
    scanf("%d",&choice);
}
temp = head;
printf("\nList :");
while (temp != NULL){
    printf("%d",temp ->data);
    temp = temp->next;
}
printf("NULL\n");
return 0;


}