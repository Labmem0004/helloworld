#include <iostream>
using namespace std;

int main() {
    //编写3个不同版本的程序，均能输出ia的元素。
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    //版本1使用范围for语句管理迭代过程
    for (int *i : ia) {
        cout << i << '\0';
    }
    cout << '\n' << endl;

    //版本2使用下标运算符
    for (size_t i=0; i<3; i++) {
        for (size_t j=0; j < 4; j++) {
            cout << ia[i][j] << '\0';
        }
        cout << '\n';
    }
    cout << endl;

    //版本3使用指针
    for (int (*row)[4] = ia; row<end(ia); row++) {
        for (int *col = *row; col<end(*row); col++) {
            cout << *col << '\0';
        }
        cout << '\n';
    }
    cout << endl;

    return 0;
}