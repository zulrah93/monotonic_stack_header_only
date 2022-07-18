#pragma once
#include <stack>
#include <iostream>
#include <vector>

enum MonoTonicStackType {
    Increasing,
    Decreasing
};

class MonotonicStack {
private:
    const MonoTonicStackType type;
    std::stack<int> stack;
public:
    MonotonicStack() = delete; // No default constructor
    MonotonicStack(MonoTonicStackType monotonic_stack_type) : type(monotonic_stack_type) { }
    MonotonicStack(MonoTonicStackType monotonic_stack_type, std::vector<int>& array) : type(monotonic_stack_type) {
        for (auto& value : array) {
            this->push(value);
        }
    }
    void push(int value) { 
        switch (type){
            case MonoTonicStackType::Increasing: {
                while (!stack.empty() && stack.top() < value) { // We pop until we got a monotonic increasing sequence
                    stack.pop();
                }
                break;
            }
            case MonoTonicStackType::Decreasing: {
                while (!stack.empty() && stack.top() > value) { // We pop until we got a monotonic decreasing sequence
                    stack.pop();
                }
                break;
            }
        }
        stack.push(value);
            
    }
    inline const int top() { // O(1) Space and Time Complexity
        return this->stack.top();
    }
    inline const bool is_empty() {
        return stack.empty();
    }
    std::vector<int> to_vec() { // O(N) Space and time complexity where N is the size of the stack.
        std::vector<int> array;
        while (!this->stack.empty()) {
            array.insert(array.begin(), stack.top());
            stack.pop();
        }
        return array;
    }
#ifdef DEBUG
    void print_to_stdout() { // Example STDOUT: [ 1 2 3 ]
        std::cout << "[ ";
        for (auto& x : this->to_vec()) {
            std::cout << x << " ";
        }
        std::cout << "]" << std::endl;
    }
#endif
};
