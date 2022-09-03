#include <string>
#include <vector>
#include <iostream>
using namespace std;

int cnt;

void B(int num)
{
    if(num>1) B(num/2);
    if(num%2==1) ++cnt;
}

int solution(int n) 
{
    B(n);
    int b = cnt;
    while(1)
    {
        cnt = 0;
        B(++n);
        if(b==cnt) break;
    }   
    return n;
}

int main()
{
    cout << solution(78) << '\n';
    cnt = 0;
    cout << solution(15) << '\n';
    return 0;
}