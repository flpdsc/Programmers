#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int w = brown/2-3;
    for(int i=w; i>0; --i){
        int h=(brown-(i+2)*2)/2;
        if(yellow%i) continue;
        if(yellow/i==h){
            answer.push_back(i+2);
            answer.push_back(h+2);
            break;
        }
    }
    return answer;
}

int main()
{
    int smp[3][2] = {{10, 2}, {8, 1}, {24, 24}};
    for(int i=0; i<3; ++i)
    {
        vector<int> ans = solution(smp[i][0], smp[i][1]);
        cout << ans[0] << ',' << ans[1] << '\n';
    }
    return 0;
}