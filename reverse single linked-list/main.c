#include <stdio.h>
#include <stdlib.h>

void display();
void create_list();
int length();

int menu();
struct node
{
    int data;
    struct node* link;
};
struct node* root=NULL;

int main()
{
    while(1)
    {
    system("cls");
    int choice,count=0,data,del,d1,d2;
    choice=menu();
    switch(choice)
    {
        case 1:
            create_list();
            printf("\nNode Created");
            break;
        case 2:
          reverse();
break;


        case 5:
            display();
            break;



        case 7:
            exit(0);
        default:
            printf("\nInvalid input ......Try again");
    }
    getch();
    }
}

int menu()
{
    int choice;
    printf("\n1.create list\n");



    printf("5.Display\n");

    printf("7.Exit\n");
    printf("\n\n\nEnter your choice : ");
    scanf("%d",&choice);
    return (choice);
}

void create_list()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    else
    {
        struct node* t;
        t=root;
        while(t->link!=NULL)
        {
          t=t->link;
        }
        t->link=temp;
    }

}

void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("NO nodes");
        return ;
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}
int length()
{
    int count=0;
    struct node* temp;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return(count);
}
void reverse()
{
    struct node* temp;
    if(root==NULL)
    {
        printf("empty\n");
        return;
    }
    else{
        int len = length();
        while(len>0){
            int i;
            temp = root;
            for(i=0;i<len-1;i++){
                temp = temp->link;
            }
            printf("%d\t", temp->data);
            len--;
        }

    }
}

