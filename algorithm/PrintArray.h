//
// Created by jxxiangwen on 16-8-5.
//

#ifndef CSTUDY_PRINTARRAY_H
#define CSTUDY_PRINTARRAY_H

#include <iostream>

using namespace std;

class PrintArray {
    /*
    * 打印数组,长方形打印
    * 比如数组为[1,2,3,4
    *          5,6,7,8
    *          9,10,11,12
    *          13,14,15,16]
    * 打印输出序列为[1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10]
    * */
public:
    void print_rectangle(int **data, int x1, int y1, int x2, int y2) {
        if (x1 > x2) {
            return;
        }
        int diff = x2 - x1;
        int direction[4][2] = {{0,  1}, {1,  0}, {0,  -1}, {-1, 0}};
        int beginX = x1, beginY = y1;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < diff; j++) {
                cout << data[beginX][beginY] << " ";
                beginX += direction[i][0];
                beginY += direction[i][1];
            }
        }
        print_rectangle(data, x1 + 1, y1 + 1, x2 - 1, y2 - 1);
        cout << endl;
    }

    /*
    * 打印数组，斜线打印
    * 比如数组为[1,2,3,4
    *          5,6,7,8
    *          9,10,11,12
    *          13,14,15,16]
    * 打印输出序列为[1,2,5,9,6,3,4,7,10,13,14,11,12,15,16]
    * */
    void print_rectangle_by_bias_line(int **data, int x1, int y1, int x2, int y2) {
        int beginX = x1, beginY = y1, endX = x2, endY = y2;

    }


    void print_bias_line(int **data, int x1, int y1, int x2, int y2, int up) {
        up %= 2;
        int direction[2][2] = {{-1, 1},
                               {1,  -1},};
        int beginX, beginY, endX;
        if (up) {
            beginX = x1;
            beginY = y1;
            endX = x2;
        } else {
            endX = x1;
            beginX = x2;
            beginY = y2;
        }
        while (beginX != endX) {
            cout << data[beginX][beginY] << " ";
            beginX += direction[up][0];
            beginY += direction[up][1];
        }
    }
};


#endif //CSTUDY_PRINTARRAY_H
