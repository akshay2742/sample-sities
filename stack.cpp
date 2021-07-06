#include<iostream>
using namespace std;
 


class Stack{
public:
     int MAX_N;
     int *S;
     int tos;
     /*contructor of stack class*/
     Stack(int n)
     {
         tos=0;
         MAX_N=n;
         S=new int[MAX_N];
     }
     
     bool isfull()
     {
         if(tos==(MAX_N))
         {
            
             return true;
         }
         else
         {
             
             return false;
         }
     }
     bool isempty()
     {
         if(tos==0)
         {
             
             return true;
         }
         else
         {
            
             return false;
         }
     }
     bool push(int element)
     {
         
        if(!isfull())
         {
             
             S[tos]=element;
             tos++;
             return true;
         }
        else
        {
            return false;
        }
     }
     bool pop()
     {
         if(!isempty())
         {
             tos--;
             return true;
         }
         else
         {
             return false;
         }
     }
     int topel()
     {
         
       if(!isempty())
       {
           cout<<S[tos-1];
       
       }
       else
       {
         return 0;
       }
       
     }
};
int main()
{
    int elmts,n,q;
    cout<<"Enter the size of the stack: ";
    cin>>q; 
    Stack st(q);
    char c,a,e;
    
    
       

    cout<<"\nEnter the elements in the stack:\n";
    cin>>elmts;
    st.push(elmts);
    while(1) 
    {
      if(st.tos!=st.MAX_N)
      {  
      
          cin>>elmts;
          st.push(elmts);
      }
        
      
      else
      {
          break;
      }
      
    } 
    
    for(int i=0;i<st.tos;i++)
    {
      cout<<st.S[i]<<" ";
    }
     cout<<"\n\n1. Want to pop the element\n"<<"2. Want to show the top element\n"<<"3.Is stack full?\n"<<"4.Is stack empty?\n\n";
    cout<<"Enter your choice: ";
    cin>>n;
    switch(n)
    {
    case 1:
        st.pop();
        cout<<"If you want to push the elements press y or If you want to exit press n: ";
        cin>>a;
        if(a=='y')
        {
              
          cin>>elmts;
          st.push(elmts);
          
           for(int i=0;i<st.tos;i++)
           {
             cout<<st.S[i]<<" ";
           }
                   
        }
        else
        {
           for(int i=0;i<st.tos;i++)
           {
             cout<<st.S[i]<<" ";
           }
        }
        
        break;
    
    case 2:
        st.topel();
        break;
    case 3:
        if(st.isfull()){
            cout<<"Stack is full\n";
        }else
        {
          cout<<"Stack is not full\n";
        }
        
        break;
    case 4:
        if(st.isempty()){
            cout<<"Stack is empty\n";
        }else
        {
            cout<<"Is not empty\n";
        }
        break;
    }
   
    
}

void addatend(int value){


       Node* temp=new Node();
       temp->data=value;

     if (head == NULL) {
        temp->prev = NULL;
        temp->next=NULL;
        head = temp;
        tail=temp;
        return;
       }
     else{
       Node *s;
       s=head;
       while(s->next!=NULL){
        s=s->next;
       }
       temp->next=NULL;
       s->next=temp;
       temp->prev=s;
       tail=temp;

       cout<<"add at end  ";

      }
    }

