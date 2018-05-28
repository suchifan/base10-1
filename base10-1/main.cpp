//
//  main.cpp
//  base10-1
//
//  Created by suchao on 5/28/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[20];
    cout << "input a string:\n";
    cin >> str;
    size_t n = strlen(str);
    for(int i=1; i<=n; i++){
        cout << str[n-i];
    }
    cout << endl;
    return 0;
}
