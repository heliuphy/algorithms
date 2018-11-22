//
// Created by 何柳 on 2018/11/22.
//
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int n;
    string operate;
    string url = "";
    stack<string> urls;
    stack<string> forwards;
    cin >> n;
    for ( int i = 0; i < n; ++i) {
        cin >> operate;
        if (operate == "VISIT") {
            while ( !forwards.empty() ) {
                forwards.pop();
            }
            if (url != "") {
                urls.push(url);
            }
            cin >> url;
            cout << url << endl;

        }
        if (operate == "BACK") {
            if(urls.size() == 0)
                cout << "Ignore" << endl;
            else {

                forwards.push(url);
                url = urls.top();
                cout << url << endl;
                urls.pop();


            }
        }
        if (operate == "FORWARD") {
            if (forwards.size() == 0) {
                cout << "Ignore" << endl;
            } else {
                urls.push(url);
                url = forwards.top();
                cout << url << endl;
                forwards.pop();

            }
        }

    }
    return 0;
}



