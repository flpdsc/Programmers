#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(int n) 
{
    long long answer = 1;
    int a = 1;
    for(int i=2; i<=n; ++i)
    {
        int tmp = answer;
        answer = (answer+a)%1234567;
        a = tmp;
    }
    
    return answer;
}

int main()
{
    cout << solution(4) << '\n';
    cout << solution(3) << '\n';
    return 0;
}