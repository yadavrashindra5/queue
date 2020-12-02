/*implementing queue using linked list is best because it size increase dynamically , we don't have to fixed it's size like array implentation*/
#include<iostream>
using namespace std;
 class Node{
 int data;
 Node *next;
 public:
     void push(int x);
     void display();
     void deleted();
 };
 Node *front=nullptr,*rare=nullptr;
 void Node::push(int x)
 {
     Node *newnode=new Node();
     newnode->data=x;
     newnode->next=nullptr;
     if(front==nullptr)
     {
         front=rare=newnode;

     }
     else{
        rare->next=newnode;
        rare=newnode;
     }
 }
 void Node::display()
 {
     Node *temp=front;
     if(front==nullptr)
     {
         cout<<"No Data is Available\n";
     }
     else{
     while(temp!=rare)
     {
         cout<<"Data : "<<temp->data<<"\n";
         temp=temp->next;
     }
     cout<<"Data : "<<temp->data<<"\n";
 }
 }

 void Node::deleted()
 {   if(front==nullptr)
                 {
                     cout<<"underflow\n";
                     front=rare=nullptr;
                 }
                 else{
     front=front->next;
     }
 }

 int main()
 {
     Node n;
     do{ cout<<"*************************\n";
        cout<<"1:Push Function\n";
        cout<<"2:Display Function\n";
        cout<<"3:Delete Function\n";
        cout<<"4:Exit\n";
        cout<<"**************************\n";
        cout<<"Enter your choice\n";
        int choice;
        cin>>choice;
        if(choice==4)
            break;
        else{
            switch(choice)
            {
            case 1:
                int x;
                cout<<"Enter the data\n";
                cin>>x;
                n.push(x);
                break;

            case 2:
                n.display();
                break;
            case 3:
                n.deleted();
                break;
            }
        }
        cout<<"\n\n";

     }while(true);

 }
