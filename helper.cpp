//
// Created by xande on 5/10/2023.
//
#include <string>
#include <vector>
#include <math.h>
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
    }
    Variable var;
    Node* left;
    Node* right;
};
Node* add(Node* left, Node* right) {
    Node* sum = new Node();
    sum->var.val = stof(left->var.val) + stof(right->var.val);
    return sum;
}

Node* subtract(Node* left, Node* right) {
    Node* remainder = new Node();
    remainder->var.val = stof(left->var.val) + stof(right->var.val);
    return remainder;
}

Node* Multiply(Node* left, Node* right) {
    Node* remainder = new Node();
    remainder->var.val = stof(left->var.val) * stof(right->var.val);
    return remainder;
}
Node* Divide(Node* left, Node* right) {
    Node* remainder = new Node();
    remainder->var.val = stof(left->var.val) / stof(right->var.val);
    return remainder;
}
Node* exponential(Node* left, Node* right) {
    Node* product = new Node();
    product->var.val = pow(stof(left->var.val), stof(right->var.val));
    return product;
}
Node* differentiate(Node* left, Node* right) {
    // do symbolic math, later tho
}