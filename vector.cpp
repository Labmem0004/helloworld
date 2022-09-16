#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> v1, v2(10), v3(10, 42), v4{10}, v5{10, 42};
    vector<string> v6{10}, v7{10, "hi"};

    vector<vector<int>> vi{v1, v2, v3, v4, v5};
    vector<vector<string>> vs{v6, v7};

    int i = 1;
    for (auto v:vi) {
        cout << "v" << i << "=" << '\n' << "{";
        for (auto u:v) {
            cout << u << ",";    
        };
        cout << "}" << "  容量为" << v.size() <<'\n';
        i++;
    };


    return 0;
};