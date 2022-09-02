#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=n; i>0; --i){
        int num = i;
        int sum = 0;
        while(num!=0){
            sum += num;
            --num;
            if(sum==n){
                ++answer;
                break;
            }
            if(sum>n){
                break;
            }
        }
        if(sum<n) break;
    }
    return answer;
}

int main()
{
    cout << solution(15);
    return 0;
}