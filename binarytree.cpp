#include <bits/stdc++.h>
using namespace std;
#define SPACE 10

class node{
    public:
        int data;
        node* leftn ;
        node* rightn ;

        
    

};

void print2D(node * r, int space) {
    if (r == NULL) // Base case  1
      return;
    space += SPACE; // Increase distance between levels   2
    print2D(r -> rightn, space); // Process right child first 3 
    cout << endl;
    for (int i = SPACE; i < space; i++) // 5 
      cout << " "; // 5.1  
    cout << r -> data << "\n"; // 6
    print2D(r -> leftn, space); // Process left child  7
  }


void insert(node* &newn,int k){
        node* temp1;
        node* temp;
        
        if(newn==NULL){
            newn=new node();
            newn->data=k;
            cout << "Value Inserted to the root" << endl;
        }
        else {cout<<"yes";
            temp=newn;temp1=temp;
            while(temp!=NULL){
                if(newn->data < k ){
                    temp1=temp;
                    temp= temp->rightn;
                    //
                    //temp=newn;
                    //break;
                }
                else{
                    temp1=temp;
                    temp = temp->leftn;
                    //
                    //temp = newn;
                    //break;
                }
            }
            node* newnode=new node();
            newnode->data=k;
            if(temp1->data<k){
                cout << "Value Inserted to the right" << endl;
                temp1->rightn=newnode;
            }
            else {
                temp1->leftn=newnode;
                cout << "Value Inserted to the left" << endl;
            }
        }
}



int main(){
    int option ; 
    node* newn = NULL;
    do{
    cout<<endl<<"*******************************"<<endl;
    cout<<"ENTER 1 TO INSER "<<endl;
    cout<<"ENTER 2 TO DELETE"<<endl;
    cout<<"ENTER 3 TO SEARCH"<<endl;
    cout<<"ENTER 4 TO PRINT"<<endl;
    cout<<"ENTER 5 TO CLEAR"<<endl;
    cout<<"ENTER 0 TO EXIT"<<endl;
    cin>>option;
    
    
    switch (option){
        case 1:
            cout<<"Inster:"<<endl;
            cout<<"enter element:"<<endl;
            int k;  cin>>k;
           // newn->data = k;
            insert(newn,k);
            break;
        case 4:
            cout << "PRINT 2D: " << endl;
            print2D(newn, 5);
            cout << endl;
            break;
        case 0:
            break;
    }
    }while(option!=0);
}