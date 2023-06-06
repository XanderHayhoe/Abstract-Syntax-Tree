//
// Created by xande on 5/10/2023.
//

#ifndef CALCULATOR_HELPER_H
#define CALCULATOR_HELPER_H
#include <string>

using namespace std;
struct Variable {
    Variable() {
        val = "";
        coefficent = 0;
    }
    string val;
    float coefficent;
};
struct Node {
    Node() {
        left = nullptr;
        right = nullptr;
        var.val = "";
    }
    Variable var;
    Node* left;
    Node* right;
};
Node* add(Node* left, Node* right);
Node* subtract(Node* left, Node* right);
Node* Multiply(Node* left, Node* right);
Node* Divide(Node* left, Node* right);
Node* exponential(Node* left, Node* right);
#endif //CALCULATOR_HELPER_H
