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
    
    int n;cout<<"Enter size: "<<endl; cin>>n; int a = n-1;
    while(n--){
        node* newn = new node();
        int num; cout<<"Enter num:"<<((a-n)+1)<<" :"<<endl; cin>>num;
        newn->data = num;
        newn->next = NULL;
        if(head == NULL){
            head = newn;
            temp = head;
        }
        else{
            temp->next = newn;
            temp = newn;
        }
    }

    cout<<" Enter inserting element:"<<endl;
        node* in = new node();
        int x; cin>>x; 
        in->data = x;
        in->next = NULL;
    node* f;
    temp=head;
    f = temp->next;
        
    cout<<" Enter inserting Position:"<<endl;
        int pos; cin>>pos;
    if(pos==1){
            in->next=temp;
            head = in;
            temp=head;
    }


    else{
        int k=1;
        while(k<pos-1){
            temp=temp->next;
            f=f->next;
            ++k;
        }
        temp->next = in;
        in->next=f;
        temp = head;
    }

    cout<<"*********** Printing **********"<<endl;
        while(temp->next!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<"->NULL";
    }
