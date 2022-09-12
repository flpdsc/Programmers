#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> s(phone_book.begin(), phone_book.end());

    for(int i=0; i<phone_book.size(); ++i)
    {
        for(int j=1; j<phone_book[i].size(); ++j)
        {
            string phone_num = phone_book[i].substr(0, j);
            if(s.find(phone_num)!=s.end()) return false; 
        }
    }
    return true;
}

// int main()
// {
//     vector<string> phone_book[3] = {{"119", "97674223", "1195524421"}, {"123","456","789"}, {"12","123","1235","567","88"}};
//     for(int i=0; i<3; ++i)
//     {
//         cout << solution(phone_book[i]) << '\n';
//     }
//     return 0;
// }