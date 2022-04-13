#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

int main(){
    node* head = NULL;
    node* temp;

   
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n--)
    {
        node *newn=new node();
        cout<<"Enter data: ";
        int t;
        cin>>t;
        newn->data=t;
        newn->next=NULL;

        if(head==NULL)
        {
            head=newn;
            temp = head;
            //free(newn);
        }
        else{
            temp->next = newn;
            temp = newn;
            //free(newn);

        }
    }
    cout<< "ENTER INSTERTING NODE:" <<endl;

    node* in = new node();
    int i; cin>>i;
    in->data = i;
    in->next = NULL;
     if(head == NULL){
        head = in;
        temp = head;
     }
     else{
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next = in;
    }

    cout<<"**printing**"<<endl;
    temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";




}