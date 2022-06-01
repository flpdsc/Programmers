//하샤드 수 
//https://programmers.co.kr/learn/courses/30/lessons/12947?language=cpp

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int dividend = x;
    int divisor = 0;

    while(1)
    {
        if(x<10)
        {
            divisor += x;
            break;
        }
        divisor += x%10;
        x /= 10;        
    }
    return !(dividend%divisor);
}