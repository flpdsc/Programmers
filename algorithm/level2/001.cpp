#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;

void Cnvrt(int n){
    if(n>1) Cnvrt(n/2);
    if(n%2==0) str += '0';
    else str += '1';
}

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    while(s!="1"){
        int cnt=0;
        for(int i=0; i<s.size(); ++i){
            if(s[i]=='1') cnt++;
            else ++answer[1];
        }
        str = "";
        Cnvrt(cnt);
        s = str;
        ++answer[0];
    }
    return answer;
}

int main()
{
    vector<int> ans;
    string smp[3] = {"110010101001", "01110", "1111111"};
    for(int i=0; i<3; ++i){
        ans = solution(smp[i]);
        cout << ans[0] << ',' << ans[1] << '\n';
    }
    return 0;
}