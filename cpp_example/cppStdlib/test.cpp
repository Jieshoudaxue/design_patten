#include <iostream>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main(void) {
    //printf("hello ycao\n");

/*    
    cout << "hello ycao in cout" << endl;
    
    int num = 18;
    cout << "dec num is " << num << endl;
    cout << "hex num is " << hex << num << endl;
    
    double num1 = 123.432657;
    cout << "num1 is " << num1 << endl;
    cout << "num1 is " << setprecision(9) << num1 << endl;
*/

/*    
    int val1;
    int val2;
    
    cout << "please input val1: ";
    cin >> val1;
    cout << "vals is: " << dec << val1 << endl;
    
    cout << "please input val1: ";
    cin >> hex >> val1;
    cout << "vals is: " << dec << val1 << endl;    

    cout << "please input val1 and val2: ";
    cin >> val1 >> val2;
    cout << "val1 and val2 is: " << dec << val1 << " " << val2 << endl;    
*/

/*
    string str1;

    cout << "please input a string: ";
    cin >> str1;
    cout << "string is: " << str1 << endl;

    str1 = "ycao studies c++ again";
    cout << "str1 is: " << str1 << endl;
*/

/*    
    fstream fs;
    char filename[20] = "1.txt";
    char input[30] = "ycao studies c++ again";
    char output[30] = {0};
    
    fs.open(filename);
    if ( !fs.is_open() ) {
        cout << "open 1.txt failed" << endl;
    }
    
    //fs.write(input, sizeof(input));
    
    fs.read(output, sizeof(output));
    cout << "content is: " << output << endl;

    fs.close();
*/
    
    string s1, s2, s3;
    s1 = "ycao";
    s2 = "miao";
    
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    
    cout << "length of s1 = " << s1.length() << endl;
    cout << "length of s2 = " << s2.length() << endl;
    
    for (int i = 0; i < s1.length(); i++) {
        cout << s1[i] << " ";
    }
    cout << endl;
    
    //s1 += s2;
    //s1.append(s2);
    //s3 = s1 + s2;
    //cout << "s1 appends s2 is: " << s1 << endl;
    
    swap(s1, s2);
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;    
    
    return 0;
}



