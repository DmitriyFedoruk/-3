#include "pch.h"
#include "LibrarySPO.h"
#include <iostream>
#include <string.h>
using namespace std;
void stringlib(char* stroka1, char* stroka2) {
    int len1 = strlen(stroka1);
    int len2 = strlen(stroka2);
    int length = len1+len2+1;
    int z = 0;
    int u = 0;
    char* stroka3 = new char[len1 + len2 + 1];
    for (int i = 0; i <length; i++) {
        if (i % 2 == 0 ) {
            stroka3[i] = stroka1[z];
            z++;
        }
        else {
            stroka3[i] = stroka2[u];
            u++;
        }
    
    }
    cout << stroka3 << endl;
}

