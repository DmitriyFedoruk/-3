#include <iostream>
 #include <Windows.h> 
#include "LibrarySPO.h" 
 
using namespace std; 
 
int main() {    
    char* stroka1, * stroka2; 
    stroka1 = new char[255];  
    stroka2 = new char[255]; 
    cout << "Enter first string "<< endl;
    cin >> stroka1;
    cout << "Enter second string " << endl;   
    cin >> stroka2;  
    HMODULE library = LoadLibrary(TEXT("LibrarySPO.dll"));  
    typedef void (*stringlibrary)(char* stroka1, char* stroka2);    
    stringlibrary stringlib = (stringlibrary)GetProcAddress(library, "stringlib"); 
    stringlib(stroka1, stroka2); 
    FreeLibrary(library); } 