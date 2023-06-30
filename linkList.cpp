#include<iostream>
using namespace std;
struct Node{

int data;
Node *next;

};
Node *head=NULL,*temp;
int count,i=1,pos;

void createNode(){
Node *newNode= new Node();
cout<<"Enter Data:";
cin>>newNode->data;
newNode->next=NULL;
if(head==NULL){
       head=temp=newNode;
    }
else{
        temp->next=newNode;
        temp=newNode;
    }


       }

void insertAtBig(){
Node *newNode= new Node();
Node *temp2;
cout<<"Enter Data:";
cin>>newNode->data;
newNode->next=0;
temp2=head;
head=newNode;
newNode->next=temp2;
    }

void insertAtEnd(){
Node *newNode= new Node();
cout<<"Enter Data:";
cin>>newNode->data;
newNode->next=0;

        temp->next=newNode;
        temp=newNode;
    }


 void print(){

     Node *temp2;
     temp2=head;
     while(temp2!=NULL){

        cout<<temp2->data<<" ";
        temp2=temp2->next;
        count++;
     }
 }

 void askUser(){
Node *newNode= new Node();
cout<<"Enter Position:";
cin>>pos;
if(pos>count){
    cout<<"Invalid Position"<<endl;
    return ;
}
else
{
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
}
cout<<"Enter Data:";
cin>>newNode->data;
newNode->next=temp->next;
temp->next=newNode;
 }

void deleteFromBeg(){
    if(head==NULL){
        cout<<"\nList is empty";
        return ;
    }
    else{
temp=head;
head=head->next;
delete(temp);
cout<<"\nDeleted..."<<endl;
    }
}

void DeleteFromEnd(){
    Node *prev;
 if(head==NULL){
        cout<<"\nList is empty";
        return ;
    }
    else{
        temp=head;
        while(temp->next!=NULL){

        prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        delete(temp);
        cout<<"\nDeleted..."<<endl;
    }
}

void DeleteFromPos(){
temp=head; Node *nextnode;
cout<<"Enter Position:";
cin>>pos;

while(i<pos-1){
    temp=temp->next;
    i++;
}
nextnode=temp->next;
temp->next=nextnode->next;
delete(nextnode);
cout<<"\nDeleted..."<<endl;
}

void search(){
int val,c=1;
temp=head;
cout<<"Enter Value For Searching:";
cin>>val;
while(val!=temp->data){
    c++;
    temp=temp->next;
}
cout<<"\n value Found at "<<c<<endl;
}


int main(){

int ch;
int choice;


while(true){
 cout<<"\n1. Create Node";
 cout<<"\n2. Insert at Big";
 cout<<"\n3. Insert at End";
  cout<<"\n4. AskUser";
  cout<<"\n5. Delete From Beg";
  cout<<"\n6. Delete From End";
   cout<<"\n7. Delete From Position";
   cout<<"\n8. Search...";
 cout<<"\n9. Display"<<endl;
 cout<<"Enter Your Choice:";
 cin>>choice;
 switch(choice){
 case 1:
     do{
createNode();
cout<<"Continue:";
cin>>ch;
}while(ch==1);
break;

 case 2:
    do{
insertAtBig();
cout<<"Continue:";
cin>>ch;
}while(ch==1);
break;

 case 3:
    do{
insertAtEnd();
cout<<"Continue:";
cin>>ch;
}while(ch==1);

break;

case 4:
    askUser();
    break;
case 5:
    deleteFromBeg();
    break;
case 6:
    DeleteFromEnd();
    break;
case 7:
    DeleteFromPos();
    break;
case 8:
    search();
    break;
case 9:
    print();
    break;
default:
  cout  <<"\nInvalid Choice...";
 }
}
}




