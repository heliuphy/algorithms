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
    string fruitName, placeName;
    int saleNum;
    map<string, string> origin;
    map<string, int> sales;
    map<string, set<string> > fruitsInThisPlace;
//    set<string> fruitList;
    set<string> placeList;
    cin >> n;
    // apple shandong 3
    for (int i = 0; i < n; ++i) {
        cin >> fruitName >> placeName >> saleNum;
//        fruitList.insert(fruitName);
        placeList.insert(placeName);
        fruitsInThisPlace[placeName].insert(fruitName);
        origin[fruitName] = placeName;
        if (sales.count(fruitName)) {
            sales[fruitName] += saleNum;
        }
        else {
            sales[fruitName] = saleNum;
        }
    }
    for (auto i = placeList.begin(); i != placeList.end(); ++i) {
        cout << *i << endl;
        for (set<string>::iterator j = fruitsInThisPlace[*i].begin(); j != fruitsInThisPlace[*i].end(); ++j){
            cout << "   |----" << *j << "(" << sales[*j] << ")" << endl;

        }
    }
//    guangdong
//    |----pineapple(5)
//    |----sugarcane(1)
//    shandong
//    |----apple(3)

    return 0;
}