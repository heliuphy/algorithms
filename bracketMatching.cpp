//
// Created by 何柳 on 2018/11/22.
//
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    string input;
    string status = "Yes";
    vector<int> output;
    int inputLength;
    int popIndex;
    stack<char> brack;
    stack<int> index;
    cin >> input;
    inputLength = input.size();
    for (int i = 0; i < inputLength; ++i) {
        if (input[i] == '(') {
            brack.push(input[i]);
            index.push(i + 1);
        }
        else {
            if (brack.size() == 0) {
                status = "No";
                break;
            }
            if (brack.top() == ')') {
                status = "No";
                break;
            }
            brack.pop();
            popIndex = index.top();
            index.pop();
            output.push_back(popIndex);
            output.push_back(i + 1);

        }
    }
    if (brack.size() != 0)
        status = "No";
    if (status == "No")
        cout << status << endl;
    else {
        cout << status <<endl;
        for ( int i = 0 ; i < output.size(); i+=2) {
            if ( i != output.size() - 2 ) {
                cout << output[i] << " " << output[i + 1] << endl;
            } else {
                cout << output[i] << " " << output[i +1];
            }
        }
    }


    return 0;
}
