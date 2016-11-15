//
// Created by jxxiangwen on 16-8-5.
//

#include "PrintArray.h"

//int main() {
//    int **arrayData = new int *[3];
//    for (int i = 0; i < 4; i++) {
//        arrayData[i] = new int[4];;
//    }
//    int number = 1;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            arrayData[i][j] = number++;
//        }
//    }
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            cout << arrayData[i][j] << " ";
//        }
//        cout << endl;
//    }
//    PrintArray *printArray = new PrintArray();
//    printArray->print_rectangle(arrayData, 0, 0, 3, 3);
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 100
//
//void cal_next( char * str, int * next, int len )
//{
//    int i, j;
//
//    next[0] = -1;
//    for( i = 1; i < len; i++ )
//    {
//        j = next[ i - 1 ];
//        while( str[ j + 1 ] != str[ i ] && ( j >= 0 ) )
//        {
//            j = next[ j ];
//        }
//        if( str[ i ] == str[ j + 1 ] )
//        {
//            next[ i ] = j + 1;
//        }
//        else
//        {
//            next[ i ] = -1;
//        }
//    }
//}
//
//int KMP( char * str, int slen, char * ptr, int plen, int * next )
//{
//    int s_i = 0, p_i = 0;
//
//    while( s_i < slen && p_i < plen )
//    {
//        if( str[ s_i ] == ptr[ p_i ] )
//        {
//            s_i++;
//            p_i++;
//        }
//        else
//        {
//            if( p_i == 0 )
//            {
//                s_i++;
//            }
//            else
//            {
//                p_i = next[ p_i - 1 ] + 1;
//            }
//        }
//    }
//    return ( p_i == plen ) ? ( s_i - plen ) : -1;
//}
//
//int main()
//{
//    char str[ N ] = {0};
//    char ptr[ N ] = {0};
//    int slen, plen;
//    int next[ N ];
//
//    while( scanf( "%s%s", str, ptr ) )
//    {
//        slen = strlen( str );
//        plen = strlen( ptr );
//        cal_next( ptr, next, plen );
//        printf( "%d\n", KMP( str, slen, ptr, plen, next ) );
//    }
//    return 0;
//}
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <zconf.h>
#include <linux/sched.h>
#include <iostream>
#include <cstring>

int glob = 6;
char buf[] = "a write to stdout\n";


//int main()
//{
//    int var;
//    pid_t pid;
//
//    var = 88;
//
//
//    fprintf(stderr, "%s", buf);
//
//    printf("before fork\n");
//
//    if(( pid = fork() ) < 0 )
//    {
//        fprintf(stderr, "fork error\n");
//    }
//    else if(pid == 0)
//    {
//        glob++;
//        var++;
//        printf("child process\n");
//        printf("pid = %d, father pid = %d, glob = %d, var = %d\n", getpid(), getppid(), glob, var);
//        exit(0);
//    }
//    else
//    {
//        sleep(2);
//        printf("father process\n");
//        printf("pid = %d, father pid = %d, glob = %d, var = %d\n", getpid(), getppid(), glob, var);
//    }
//
//
//    return 0;
//}

typedef unsigned char *byte_pointer;

void show_byte(byte_pointer start, int len) {
    int i;
    for (int i = 0; i < len; i++) {
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_byte((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_byte((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_byte((byte_pointer) &x, sizeof(void *));
}

int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
    return ((int) word << 24) >> 24;
}

float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;
    for (i = 0; i <= length - 1; i++) {
        printf("i = %u\n", i);
        result += a[i];
    }
    return result;
}

int strlonger(char *s, char *t) {
    cout << strlen(s) - strlen(t) << endl;
    return (int) (strlen(s) - strlen(t)) > 0;
}

int main() {
    cout << (long) 200 * 300 * 400 * 500 << endl;
    cout << "----------int-----------" << endl;
    show_int(200);
    show_int(127);
    show_int(-128);
    show_int(255);
    cout << "----------float-----------" << endl;
    show_float(0.0f);
    show_float(0.1f);
    show_float(-0.1f);
    cout << "----------str-----------" << endl;
    const char *s = "abcdefg";
    const char *S = "ABCDEFG";
    show_byte((byte_pointer) s, strlen(s));
    show_byte((byte_pointer) S, strlen(S));
    cout << "----------cast-----------" << endl;
    short int v = (short) -12345;
    unsigned short int uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);
    printf("v = %x, uv = %x\n", v, uv);
    unsigned u = 4294967295u;
    int tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);
    printf("u = %x, tu = %x\n", u, tu);
    //会先转成unsigned　再比较
    if (-1 < 0U) {
        printf("true");
    }
    int a = 0x00000076;
    int b = 0x87654321;
    int c = 0x000000C9;
    int d = 0xEDCBA987;

    show_int(fun1(a));
    show_int(fun2(a));
    show_int(fun1(b));
    show_int(fun2(b));
    show_int(fun1(c));
    show_int(fun2(c));
    show_int(fun1(d));
    show_int(fun2(d));

    float fa[1] = {0.0f};
//    sum_elements(fa, 0);

    char *cs = "123";
    char *ct = "12345";
    cout << strlonger(cs, ct) << endl;

    show_int(4);
    show_int(~4);
    cout << -6170 / 8 << endl;
}
