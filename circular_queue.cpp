#include<iostream>
#include<string>
using namespace std;
class Circular_Queue{
    private:
        int front;
        int rear; 
        int arr[5];
        int itemCount;
    public:
        Circular_Queue(){
            itemCount=0;
            front=-1;
            rear=-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }

        bool isEmpty(){
            if(front==-1 && rear==-1)
                return true;
            else
                return false;
        }

        bool isFull(){
            if((rear+1)%5==front)
                return true;
            else
                return false;
        }

        void Enqueue(int val){
            if(isFull()){
                cout<<"Queue is full."<<endl;
            }
            else if(isEmpty()){
                rear=0;
                front=0;
                arr[rear]=val;
                itemCount++;
            }
            else{
                rear=(rear+1)%5;
                arr[rear]=val;
                itemCount++;
            }
        }

        int Dequeue(){
            int x;
            if(isEmpty()){
                cout<<"Queue is Empty."<<endl;
                return 0;
            }
            else if(front==rear){
                x=arr[front];
                rear=-1;
                front=-1;
                arr[front]=0;
                itemCount--;
                return x;        
            }
            else{
                x=arr[front];
                arr[front]=0;
                front=(front+1)%5;
                itemCount--;
                return x;
            }
        }

        int count(){
            return(itemCount);
        }

        void display(){
        cout<<"all values in the Queue are:"<<endl;
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Circular_Queue q1;
    int option,value;
    do{
        cout<<"\n choose the option what you want.enter 0 to exit"<<endl;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.count()"<<endl;
        cout<<"6.display"<<endl;
        cout<<"7.clear screen"<<endl<<endl;
        
        cin>>option;
        switch(option){
            case 1: // Enqueue function
                cout<<"Enqueue operation \n Enter an item to Enqueue in the queue"<<endl;
                cin>>value;
                q1.Enqueue(value);
                break;

            case 2: // Dequeue function
                cout<<"Dequeue operation \n Dequeue value:"<<q1.Dequeue()<<endl;
                break;

            case 3: // isEmpty function
                if(q1.isEmpty())
                    cout<<"Queue is empty."<<endl;
                else
                    cout<<"Queue is not empty."<<endl;
                break;

            case 4: //isFull function
                if(q1.isFull())
                    cout<<"Queue is full."<<endl;
                else
                    cout<<"Queue is not full."<<endl;
                break;

            case 5: // count function
                cout<<"count operation \n count of items in Queue:"<<q1.count()<<endl;
                break;

            case 6: // display function
                cout<<"display function called:"<<endl;
                q1.display();
                break;

            case 7: // clear screen function
                system("cls");
                break;

            default:
                cout<<"enter the proper option."<<endl;
        }
    }while(option!=0);
    return 0;
}
