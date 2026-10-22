#include<iostream>
using namespace std;
#define Q_size 6



class queue{
     int* q ;
    int head,tail;
public:
    queue();
    void enqueue();
    void dequeue();
    void display();
};

queue :: queue(){
  head=0;
  tail=0;
  q=nullptr/*NULL*/;
  q=(int*)malloc(Q_size);
  if(!q){
      cout<<"Allocation error!"<<endl;
      exit(1);
  }

}


void queue :: enqueue()
{

    if((tail+1) % (Q_size)== head)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        int p;
        cout<<"Enter value:";
        cin>>p;

        q[tail] =p;
        tail =(tail+1)%(Q_size);
    }
}


void queue :: dequeue()
{
    if(tail ==head)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<endl<<"Deleted item is : "<<q[head]<<endl;
        head =(head +1)%(Q_size);
    }
}


void queue :: display()
{
    if(tail == head)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i= head;
        while(i!=tail)
        {
            {
                cout<<q[i]<<" ";
                i=(i+1)%(Q_size);
            }
        }
    }
}




int main ()
{
   queue ob;
   while(1){
       cout<<endl<<"1.enqueue"<<endl;
       cout<<"2.dequeue"<<endl;
       cout<<"3.display"<<endl;
       cout<<"4.exit"<<endl;
       int ch;
       cin>>ch;
       switch(ch){
           case 1:
                 ob.enqueue();
                 break;
           case 2:
                 ob.dequeue();
                 break;
           case 3:
                 ob.display();
                 break;
           case 4:
                 exit(1);
            default:
              cout<<"wrong choice";
              break;
            
       }
       
   }
   

}


