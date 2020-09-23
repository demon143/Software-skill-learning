//
// Created by Theming Wang on 2020/9/19.
//
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0) return true;
        if(x%10==0||x<0) return false;
        int right=0;
        while (right<x){
            right=right*10+x%10;
            x/=10;
        }
        return x==right||x==right/10;
    }
};
