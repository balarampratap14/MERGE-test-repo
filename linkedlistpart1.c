#include<stdio.h>
#include<stdlib.h>
/*----Function Prototypes-----*/    
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
/*-----------------------------*/
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
 
/* Counts the no. of occurences of a node
   (search_for) in a linked list (head)*/
int getCount(struct node* start)
{
	int count;
	struct node *temp;
	temp=start;
    while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
		
}
int main()      //main() starts
{
        int choice;      
        printf(" MENU LIST FOR OPERATIONS IN LINKED LIST");     
	printf("\n 1.Create a node     ");
                printf("\n 2.Display the dode    ");
                printf("\n 3.Insert at the beginning of node    ");
                printf("\n 4.Insert at the end of node  ");
                printf("\n 5.Insert at specified position of the node      ");
                printf("\n 6.Delete from beginning of the node      ");
                printf("\n 7.Delete from the end of the node        ");
                printf("\n 8.Delete from specified position of the node      ");
                printf("\n 9.Exit\n");                
  while(1){               
			    printf("\nEnter your choice i.e from (1-9):\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
										display();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
										display();
                                        break;
                        case 4:
                                        insert_end();
										display();
                                        break;
                        case 5:
                                        insert_pos();
										display();
                                        break;
                        case 6:
                                        delete_begin();
										display();
                                        break;
                        case 7:
                                        delete_end();
										display();
                                        break;
                        case 8:
                                        delete_pos();
										display();
                                        break;
                        case 9:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }//end of switch()
        }//end of while
        return 0;
}//end of main()
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf("Enter the data value for the node:\t");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
		else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}//end of create()
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("The List elements are:");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->info );
                        ptr=ptr->next ;
                }//end of while
        }//end of else
}//end of display()
void insert_begin(struct node *temp)
{
        //struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("Enter the data value for the node:\t" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}//end of insert_begin()

void delete_begin()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
		else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d\t",ptr->info);
                free(ptr);
        }
}//end of delete_begin()

