#include<bits\stdc++.h>
using namespace std;
bool valid(string &s){
    stack <char> st;
    for(char c:s){
    if(st.size()==0){
        st.push(c);
    }
    else if(st.top()==c){
        st.push(c);
    }
    else if(st.top()!=c){
        st.pop();
    }
}
return st.empty();
    
}
int main()
{
   stack <char> st;
   int n;
   cin>>n;
 
   for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(valid(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
   }
    return 0;
}
