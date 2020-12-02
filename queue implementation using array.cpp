#include<iostream>
#define max 10
using namespace std;
int queue[max];
void insert(int x);
void display();
void deleted();
int front=-1,rare=-1;
void deleted()
{
    if(front==-1 || front>rare)
    {
        cout<<"underflow\n";
    }
    else{
        queue[front];
        front++;
    }

}

void insert(int x)
{
    if(rare==(max-1))
        cout<<"overflow\n";
    else if(rare==-1 && front==-1)
    {
        rare=front=0;
        queue[rare]=x;
    }
    else{
        rare++;
        queue[rare]=x;
    }
}
void display()
{  int i=front;
    for(i;i<=rare;++i)
    {
        cout<<"Data : "<<queue[i]<<"\n";
    }
}

int main()
{
do{
cout<<" 1 : Insert Data into the queue\n";
cout<<" 2 : Delete Data from the queue\n";
cout<<" 3 : Display Data from queue\n";
cout<<" 4 : Exit\n";
cout<<"Enter your choice\n";
int choice;
cin>>choice;
if(choice==4)
{
    break;
}
else{
switch(choice)
{
   case 1:
       cout<<"Enter data\n";
       int data;
       cin>>data;
       insert(data);
       break;
   case 2:
       deleted();
    break;
   case 3:
       display();
    break;

}
}

}while(true);
}
