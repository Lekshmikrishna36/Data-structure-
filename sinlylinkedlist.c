#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*head=NULL;
void insertFirst()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNo space available\n");
return;
}
newnode->link=NULL;
printf("\n Enter the value to insert to front\n");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else{
newnode->link=head;
head=newnode;
}
printf("\nElement inserted %d",newnode->data);
}
void insertLast()
{
struct node*temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNo Space Available\n");
return;
}
newnode->link=NULL;
printf("\n Enter the elements to insert last\n");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else
{
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=newnode;
}
printf("Element inserted successfully %d",newnode->data);}
void insertLocation()
{
int key;
struct node*temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if (newnode==NULL)
{
printf("\nNo space available\n");
return;
}
newnode->link=NULL;
if(head==NULL)
{
printf("\nList Empty\n");
}
else{
printf("\nEnter the key where you want to add element\n");
scanf("%d",&key);
while(temp!=NULL&&temp->data!=key)
{
temp=temp->link;}
if(temp==NULL)
{
printf("\n Value Not Exist\n");
}
else{
printf("\nEnter the element to be inserted\n");
scanf("%d",&newnode->data);
newnode->link=temp->link;
temp->link=newnode;
printf("Value inserted successfully %d",newnode->data);
}}}
void deleteFirst()
{
if (head==NULL)
{
printf("\nList Empty\n");
return;}
struct node*temp=head;
head=temp->link;
printf("\nValue deleted %d\n",temp->data);
free(temp);
}
void deleteLast()
{
if(head==NULL)
{
printf("\n Empty List\n");
return;}
struct node*temp=head,*prev=NULL;
if(temp->link==NULL)
{
printf("\nValue %d deleted",temp->data);
free(temp);
head=NULL;
return;
}
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
printf("\nValue %d deleted\n",temp->data);
prev->link=NULL;
free(temp);
}
void deleteLocation()
{
int key;
struct node*temp=head,*prev=NULL;
if(head==NULL)
{
printf("\nEmpty list\n");
return;}
printf("\nEnter the element that you want to delete\n");
scanf("%d",&key);
if(temp->data==key)
{head=temp->link;
printf("\nValue %d is deleted\n",temp->data);
free(temp);
return;
}
while(temp!=NULL&&temp->data!=key)
{
prev=temp;
temp=temp->link;}
if(temp==NULL){
printf("\nValue not Exist\n");
return;
}
prev->link=temp->link;
printf("value %d isdeleted",temp->data);
free(temp);}
void search()
{
struct node*temp=head;
int pos=1,found=0,val;
if(head==NULL)
{
printf("\n Empty List\n");
return;
}
printf("\nEnter the value to search:");
scanf("%d",&val);
while(temp!=NULL)
{
if(temp->data==val)
{
printf("%d value found at location %d\n",temp->data,pos);
found=1;}
pos++;
temp=temp->link;
}
if(!found)
{
printf("Value %d not exist",val);
}}
void display()
{
struct node*temp=head;
if(temp==NULL)
{
printf("\nList Empty");
return;
}
printf("\n Elements in the list\n");
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->link;
}}
void main()
{
int choice;
printf("\n SINGLY LINKED LIST\n");
do{
printf("\n1->InsertFirst\n2->Insertlast\n3->InsertLocation\n4->DeleteFirst\n5->Deletelast\n6->DeleteLocation\n7->Search\n8->Display\n9->Exit");
printf("\nEnter choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:insertFirst();
break;
case 2: insertLast();
break;
case 3: insertLocation();
break;
case 4:deleteFirst();
break;
case 5:deleteLast();
break;
case 6:deleteLocation();
break;
case 7:search();
break;
case 8:display();
break;
case 9:printf("\nExit\n");
exit(0);
default:printf("\n INVALID CHOICE\n");
}}
while(choice!=9);
}



