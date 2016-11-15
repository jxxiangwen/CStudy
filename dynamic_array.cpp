#include <iostream>
#include <sys/timeb.h>

using namespace std;

//long long getSystemTime() {
//    struct timeb t;
//    ftime(&t);
//    return 1000 * t.time + t.millitm;
//}

//int main() {
//    int row = 0, column = 0;
//    int **data;
//    bool **flag;
//    while (cin >> row && cin >> column) {
//        data = new int *[row]; //设置行 或直接int **data=new int*[m]; 一个指针指向一个指针数组。
//        flag = new bool *[row]; //设置行 或直接int **data=new int*[m]; 一个指针指向一个指针数组。
//        for (int j = 0; j < row; j++) {
//            data[j] = new int[column];        //这个指针数组的每个指针元素又指向一个数组。
//            flag[j] = new bool[column];        //这个指针数组的每个指针元素又指向一个数组。
//        }
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < column; j++) {
//                cin >> data[i][j];//初始化数组元素
//                flag[i][j] = false;
//            }
//        }
//        for (int i = 0; i < row; i++) {
//            int len = 0;
//            int index = 0;
//            int min_index = 0;
//            for (int j = 0; j + index < column; j += index) {
//                while (data[i][j] == data[i][j + (min_index++)]) {
//                    len++;
//                }
//                if (len >= 3) {
//                    index = len;
//                    for (int k = 0; k < len; k++) {
//                        flag[i][j + k] = true;
//                    }
//                } else {
//                    index = 1;
//                }
//                min_index = 0;
//                len = 0;
//            }
//        }
//        for (int i = 0; i < column; i++) {
//            int len = 0;
//            int index = 0;
//            int min_index = 0;
//            for (int j = 0; j + index < row; j += index) {
//                while (data[j][i] == data[j + (min_index++)][i]) {
//                    len++;
//                }
//                if (len >= 3) {
//                    index = len;
//                    for (int k = 0; k < len; k++) {
//                        flag[j + k][i] = true;
//                    }
//                } else {
//                    index = 1;
//                }
//                min_index = 0;
//                len = 0;
//            }
//        }
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < column; j++) {
//                if (flag[i][j]) {
//                    cout << 0 << " ";
//                } else {
//                    cout << data[i][j] << " ";
//                }
//            }
//            cout << endl;
//        }
//        for (int i = 0; i < row; i++) {
//            delete[] data[i]; //先撤销指针元素所指向的数组
//            delete[] flag[i]; //先撤销指针元素所指向的数组
//        }
//        delete[] data;
//        delete[] flag;
//    }
//    int **data = new int *[10000];
//    for (int i = 0; i < 10000; i++) {
//        data[i] = new int[10000];
//    }
//    long long start=getSystemTime();
//
//    for (int i = 0; i < 10000; i++) {
//        for (int j = 0; j < 10000; j++) {
//            data[i][j] = i * j - i * j + i * j - i * j + i * j - i * j + i * j;
//        }
//    }
//    long long end=getSystemTime();
//    time_t t_start, t_end;
//    t_start = time(NULL);
//
//    t_end = time(NULL);
//    cout << end - start << endl;
//    cout << "test"<< endl;
//    return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int i;
//    while (cin >> i) {
//        int sum = 0;
//        while ((i / 10.0) >0) {
//            sum += i % 10;
//            i = i / 10;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}