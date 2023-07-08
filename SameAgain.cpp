#include<bits\stdc++.h>
using namespace std;
int main()
{
   stack <int>st1, st2;
   queue <int> q1, q2;
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
   while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
   }
   while(!q1.empty()){
    st1.push(q1.front());
    q1.pop();
   }
       if(st2.size()==st1.size()){
        int flag=1;
         while(!st1.empty()){
            int v=st1.top();
            st1.pop();
            int v1=st2.top();
            st2.pop();
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
