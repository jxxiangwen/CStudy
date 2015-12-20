#include <iostream>

using namespace std;

int main() {
    int row = 0,column = 0;
    double **data;
    cin >> row >> column;
    data = new double *[row]; //设置行 或直接double **data=new double*[m]; 一个指针指向一个指针数组。
    for (int j = 0; j < row; j++) {
        data[j] = new double[column];        //这个指针数组的每个指针元素又指向一个数组。
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            data[i][j] = i * column + j;//初始化数组元素
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << data[i][j] << " ";//输出数组元素
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) {
        delete[] data[i]; //先撤销指针元素所指向的数组
    }
    delete[] data;
    return 0;
}