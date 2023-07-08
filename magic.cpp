#include<bits\stdc++.h>
using namespace std;
int main()
{
    stack <char> st, st1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int N;
        cin>>N;
        while(N--){
            char c;
            cin>>c;
           if(st.size()==0){
            st.push(c);
           }
           else if(c=='R'){
            if(st.top()=='B'){
                st.pop();
                if(!st.empty()&&st.top()=='P'){
                    st.pop();
                }else{
                    st.push('P');
                }
            }else if(st.top()=='G'){
                st.pop();
                if(!st.empty() && st.top()=='Y'){
                    st.pop();
                }else{
                    st.push('Y');
                }
            }
            else{
                if(st.top()!='R'){
                    st.push(c);
                }else{
                    st.pop();
                }
            }
               
           }
           else if(c=='B'){

             if(st.top()=='R'){
                st.pop();
                if(!st.empty()&&st.top()=='P'){
                    st.pop();
                }else{
                    st.push('P');
                }
            }else if(st.top()=='G'){
                st.pop();
                if(!st.empty() && st.top()=='C'){
                    st.pop();
                }else{
                    st.push('C');
                }
            }
            else {
               if(st.top()!='B'){
                st.push(c);
               }else{
                st.pop();
               }
            }

           }
           else if(c=='G'){
                if(st.top()=='R'){
                st.pop();
                if(!st.empty()&&st.top()=='Y'){
                    st.pop();
                }else{
                    st.push('Y');
                }
             }
            
            else if(st.top()=='B'){
                st.pop();
                if(!st.empty() && st.top()=='C'){
                    st.pop();
                }else{
                    st.push('C');
                }
            }
            else {
                if(st.top()!='G'){
                    st.push(c);
                }else{
                     st.pop();
                }
               
            }

           }
        }
        while(!st.empty()){
            st1.push(st.top());
            st.pop();
        }
        while(!st1.empty()){
            cout<<st1.top();
            st1.pop();
        }
        cout<<endl;
    }
   
    return 0;
}
