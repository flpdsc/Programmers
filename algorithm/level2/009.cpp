#include <iostream>
using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    while(a!=b)
    {
        ++answer;
        if(a%2) a = (a+1)/2;
        else a /= 2;
        if(b%2) b = (b+1)/2;
        else b /= 2;
    }
    return answer;
}

int main()
{
    cout << solution(8, 4, 7) << '\n';
    return 0;
}