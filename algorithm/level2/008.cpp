#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> people, int limit)
{
    int answer=0, p=0;
    sort(people.begin(), people.end());
    while(people.size()>p)
    {
        if(people[p]+people.back()<=limit) ++p;
        ++answer;
        people.pop_back();
    }
    return answer;
}

int main()
{
    vector<vector<int> > smp_p = {{70, 50, 80, 50}, {70, 80, 50}};
    for(int i=0; i<2; ++i)
        cout << solution(smp_p[i], 100) << '\n';
    return 0;
}