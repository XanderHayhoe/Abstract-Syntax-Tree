#include <iostream>
#include <string>
#include <vector>
#include "helper.h"

using namespace std;

// determine if these are branches or nodes in the AST
bool operation(char op) {
    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^' || op == '(' || op == ')')
        return true;
    return false;
}
bool var(char s) {
    if (operation(s) == false)
        return true;
    return false;
}
// ostream operator overload


int main() {
    Variable x = Variable();
    float var;
    cout << "Please enter a number in the decimal system: " << endl;
    cin >> var;
    x.val = var;
    return 0;
}
