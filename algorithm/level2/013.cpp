//캐시 https://school.programmers.co.kr/learn/courses/30/lessons/17680?language=cpp
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    
    if(cacheSize==0) return cities.size()*5; //캐시사이즈가 0인 경우
    
    int answer = 0;
    unordered_map<string, int> cache;
    
    for(int i=0; i<cities.size(); ++i)
    {
        //대소문자통합
        for(int j=0; j<cities[i].size(); ++j)
        {
            cities[i][j] = toupper(cities[i][j]);
        }
        
        if(cache.find(cities[i]) != cache.end())
        {
            answer += 1; //cache hit
            cache.erase(cities[i]);
        }
        else if(cache.find(cities[i]) == cache.end())
        {
            answer += 5; //cache miss
            //LRU
            if(cache.size()==cacheSize)
            {
                int c=2147000000;
                string s="";
                for(auto it : cache)
                {
                    if(c>it.second)
                    {
                        c = it.second;
                        s = it.first;
                    } 
                }
                cache.erase(s);                                      
            }
        }
        cache.insert({cities[i], i});
    }
    return answer;
}

int main()
{
    cout << solution(3, {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "Jeju", "Pangyo", "Seoul", "NewYork", "LA"}) << '\n'; //50
    cout << solution(3, {"Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul"}) << '\n'; //21
    cout << solution(2, {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome"}) << '\n'; //60
    cout << solution(5, {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome"}) << '\n'; //52
    cout << solution(2, {"Jeju", "Pangyo", "NewYork", "newyork"}) << '\n'; //16
    cout << solution(0, {"Jeju", "Pangyo", "Seoul", "NewYork", "LA"}) << '\n'; //25

    return 0;
}