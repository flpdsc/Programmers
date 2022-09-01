#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<bool> st;
    for(int i=0; i<s.size(); ++i){
        if(s[i]=='('){
            st.push(true);
        }
        else{
            if(st.empty()){
                answer = false;
                break;
            }
            st.pop();
        }
    }
    if(!st.empty()) answer = false;
    
    return answer;
}

int main()
{
    string smp[4] = {"()()", "(())()", ")()(", "(()("}; 
    for(int i=0; i<4; ++i)
        cout << solution(smp[i]) << '\n';
    return 0;
}