//가운데 글자 가져오기
//https://programmers.co.kr/learn/courses/30/lessons/12903?language=cpp

#include <string>
#include <vector>
// #include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";

    if(s.size()%2==0)
        answer = s.substr(s.size()/2-1, 2);        
    else
        answer = s.substr(s.size()/2, 1);        

    return answer;
}

// int main()
// {

//     string input[] = {"abcde", "qwer"};

//     for(int i=0; i<2; ++i)
//         cout << solution(input[i]) << '\n';

//     return 0; 
// }