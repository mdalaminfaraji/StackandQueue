#include<bits\stdc++.h>
using namespace std;
int main()
{
   queue <string> q;
   int n;
   cin>>n;
   while(n--){
    int Q;
    string name;
    cin>>Q;
    if(Q==0){
        cin>>name;
        q.push(name);
    }else if(Q==1){
        if(q.size()==0){
            cout<<"Invalid"<<endl;
        }else{
            cout<<q.front()<<endl;
            q.pop();
        }
    }
   }
    return 0;
}
