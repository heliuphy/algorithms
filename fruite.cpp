//
// Created by 何柳 on 2018/11/21.
//

#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> places;
    set<string> fruits;

    string fruitName, placeName;
    int saleNum;

    for (int i = 0; i < n ; ++ i) {
        cin >> fruitName >> placeName >> saleNum;
        places.insert(placeName);
        fruits.insert(fruitName);
    }
//    guangdong
//    |----pineapple(5)
//    |----sugarcane(1)
//    shandong
//    |----apple(3)

    return 0;
}