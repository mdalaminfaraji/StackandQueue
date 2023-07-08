#include<bits\stdc++.h>
using namespace std;
bool valid(string & s){
    stack <char> st;

        for(char c:s){
           if(c=='A'){
              if(!st.empty() && st.top()=='B'){
                st.pop();
              }else{
                st.push(c);
              }
           }else if(c=='B'){
            if(!st.empty() && st.top()=='A'){
                st.pop();
            }else{
                st.push(c);
            }
           }
        }
   return st.empty();
}
int main()
{
   stack <char> st;
   int n;
   cin>>n;
   cin.ignore();
   for(int i=0; i<n; i++){
        string s;
         getline(cin, s);
      

        if(valid(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
   }
    return 0;
}
