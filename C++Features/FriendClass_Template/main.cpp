//
//  main.cpp
//  Comp530
//
//  Created by Li Zhu on 11/01/2018.
//  Copyright © 2018 Li Zhu. All rights reserved.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Stack<int> stack = *new Stack<int>();
    for (int i = 0; i < 10; i++) {
        stack.push(i);
    }
    while (!stack.isEmpty()) {
        int num = stack.pop();
        cout << "pop --" << "num: " << num << endl;
    }
    
    return 0;
}
