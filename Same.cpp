#include<bits\stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myStack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL){
           head=newNode;
           tail=newNode;
           return;
        }
        Node* tmp=tail;
        newNode->prev=tmp;
        tmp->next=newNode;
        tail=newNode;
    }
    void pop_tail(){
        sz--;
        Node* deleteNode=tail;
         tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        delete deleteNode;
    }

    int top(){
        return tail->val;
    }
      int size(){
        return sz;
      }
    bool empty(){
        if(sz==0){
            return true;
        }else{
            return false;
        }
    }

};

class myQueue{
    public:
     Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL){
           head=newNode;
           tail=newNode;
           return;
        }
        Node* tmp=tail;
        newNode->prev=tmp;
        tmp->next=newNode;
        tail=newNode;
    }

        void pop_front(){
        sz--;
        Node* deleteNode=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->prev=NULL;
        delete deleteNode;
    }
    int front(){
        return head->val;
    }
         int size(){
        return sz;
      }
    bool empty(){
        if(sz==0){
            return true;
        }else{
            return false;
        }
    }
};
int main()
{
    myStack st1, st2;
    myQueue q1, q2;
    int N, M;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        int val;
        cin>>val;
        st1.push(val);
       
    }
    for(int i=0; i<M; i++){
        int val;
        cin>>val;
       q1.push(val);
    }
    while (!st1.empty()) 
    {
         st2.push(st1.top());

          st1.pop_tail();
        
    }
//   cout<<"............"<<endl;
    while (!q1.empty()) 
    {
        st1.push(q1.front());

       q1.pop_front();
        
    }
    // while(!st1.empty()){
    //     cout<<st1.top()<<" ";
    //     st1.pop_tail();
    // }
    
    // while(!q3.empty()){
    //     cout<<q3.front()<<" ";
    //     q3.pop_front();
    // }
    //  cout<<endl; 
    // while(!q2.empty()){
    //     cout<<q2.front()<<" ";
    //     q2.pop_front();
    // }
    if(st2.size()==st1.size()){
        int flag=1;
         while(!st1.empty()){
            int v=st1.top();
            st1.pop_tail();
            int v1=st2.top();
            st2.pop_tail();
            if(v!=v1){
                flag=0;
                break;
            }
         }
         if(flag){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
    }else{
        cout<<"NO"<<endl;
    }
   
   
    return 0;
}
