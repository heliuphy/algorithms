//
// Created by 何柳 on 2018/11/21.
//

#include <iostream>
#include <map>

using namespace std;

map<int, int> findMax(map<int, int> dict) {
    map<int, int> max;
    int maxKey = 0;
    int maxValue = 0;
    for(auto i = dict.begin(); i != dict.end(); ++i) {
        if ( i -> second > maxValue ) {
            maxKey = i -> first;
            maxValue = i -> second;
        }
        if ( i -> second == maxValue ) {
            if ( i -> first > maxKey ) {
                maxKey = i -> first;
                maxValue = i -> second;
            }
        }
    }
    max[maxKey] = maxValue;
    return max;

}

int main(){
    int n;
    int key;
    map<int, int> dict, maxDict;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> key;
        if (dict.count(key))
            ++ dict[key];
        else
            dict[key] = 1;
    }
    maxDict = findMax(dict);
    cout << maxDict.begin() -> first << " " << maxDict.begin() -> second ;


    return 0;
}