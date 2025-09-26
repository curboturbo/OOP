#include <iostream>
#include <string>
#include <vector>
#include "ch.h"



bool ch(std::string input) { 
    std::vector<char> stack;
    for (size_t i = 0; i < input.length(); i++) {
        if (stack.size() == 0){
            if (input[i] == ')'){
                return false;
            }
            else{
                stack.push_back(input[i]);
            }
        }
        else{
            if (stack.back() == '(' && input[i] == ')'){
                stack.pop_back();
            }
            else{
                stack.push_back(input[i]);
            }
        }
    }
    if (stack.size() == 0){
        return true;
    }
    else{
        return false;
    }
}
