#include <iostream>
using namespace std;

int main() {
    //编写3个不同版本的程序，均能输出ia的元素。
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    //版本1使用范围for语句管理迭代过程，使用指针的版本
    cout << "int *i : ia" << endl;
    for (int *i : ia) {
        cout << *i << ' ';
        i++;
        cout << *i << ' ';
        i++;
        cout << *i << ' ';
        i++;
        cout << *i << '\n';
    }
    cout << '\n' << endl;
    //版本1使用范围for，但是引用
    cout << "int (&i)[4] : ia" << endl;
    for (int (&i)[4] : ia) {
        for (int &j : i) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    cout << endl;

    //版本2使用下标运算符
    for (size_t i=0; i<3; i++) {
        for (size_t j=0; j < 4; j++) {
            cout << ia[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << endl;

    //版本3使用指针
    cout << "使用指针，但不用范围for" << endl;
    for (int (*row)[4] = ia; row<end(ia); row++) {
        for (int *col = *row; col<end(*row); col++) {
            cout << *col << ' ';
        }
        cout << '\n';
    }
    cout << endl;

    return 0;
}