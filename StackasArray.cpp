#include<iostream>
using namespace std;

#define max 3
int stack [max];
int top=-1;
int val;
void push(){
 cout<<"\nEnter Data:";
    cin>>val;
if(top==max-1){
    cout<<"Stack Overflow"<<endl;
   return ;}
else{

    top++;
stack[top]=val;
}
}

void pop(){
int x;
if(top==-1)
    cout<<"Under Flow";
else
    x=stack[top];
top--;
cout<<"Deleted item "<<x<<endl;
}

peek(){
if(top==-1){
        cout<<"\nStack empty";
return 0;}
else{
    cout<<"Top="<<stack[top];
}
}

void display(){
for(int i=top;i>=0;i--){
    cout<<stack[i]<<" ";
}
}
int main(){
    int ch,option;
    while(true){
            cout<<"\n1 Push";
            cout<<"\n2 Pop";
            cout<<"\n3 Peek";
             cout<<"\n4 Display"<<endl;
            cin>>option;
            switch(option){
        case 1:
    do{
push();
cout<<"Continue:";
cin>>ch;
    }while(ch==1);
    break;
        case 2:
              do{
pop();
cout<<"Continue:";
cin>>ch;
    }while(ch==1);
    break;
        case 3:
            peek();
            break;
            case 4:
            display();
            break;
return 0;
}
}
}
