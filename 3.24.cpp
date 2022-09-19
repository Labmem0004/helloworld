#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    //读取一组数，输出相邻2个数的和
    vector<int> v;
    int value = 0;
    while (cin >> value) {
        v.push_back(value);
    };
    for (int i=0; i+1 < v.size(); ++i) {
        cout << v[i] + v[i+1] << "\t";
    };
    cout << endl;

    //还是刚才那组数，输出第1个数和倒数第1个数的和，然后第2个数和倒数第2个数的和
    vector<int> v2;
    auto beg = v.begin(), end = v.end() - 1;
    for (; beg <= end;) {
        auto sum = *beg + *end;
        v2.push_back(sum);
        cout << *beg << " + " << *end << " = " << sum << endl;
        beg += 1;
        end -= 1;
    };
    cout << endl;

    return 0;
};