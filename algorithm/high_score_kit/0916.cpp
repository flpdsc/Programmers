//베스트앨범 https://school.programmers.co.kr/learn/courses/30/lessons/42579?language=cpp
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp1(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

bool cmp2(pair<int, int> a, pair<int, int> b)
{
    if(a.second==b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
    
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> m;
    
    for(int i=0; i<genres.size(); ++i)
    {
        m[genres[i]] += plays[i];
    }
    
    vector<pair<string, int>> genre_cnt;
    for(auto it=m.begin(); it!=m.end(); ++it)
    {
        genre_cnt.push_back(make_pair(it->first, it->second));
    }
    sort(genre_cnt.begin(), genre_cnt.end(), cmp1);
    
    for(int i=0; i<genre_cnt.size(); ++i)
    {
        vector<pair<int, int>> top_songs;
        for(int j=0; j<genres.size(); ++j)
        {
            if(genre_cnt[i].first==genres[j])
            {
                top_songs.push_back(make_pair(j, plays[j]));
            }
        }
        sort(top_songs.begin(), top_songs.end(), cmp2);
        answer.push_back(top_songs[0].first);
        if(top_songs.size()>1) answer.push_back(top_songs[1].first);
    }
 
    return answer;
}

// int main()
// {
//     vector<int> res = solution({"classic", "pop", "classic", "classic", "pop"}, {500, 600, 150, 800, 2500});
//     for(int i=0; i<res.size(); ++i)
//     {
//         cout << res[i] << ' ';
//     }
//     return 0;
// }