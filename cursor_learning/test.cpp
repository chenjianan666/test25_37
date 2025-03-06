#include <iostream>
#include <cassert>
#include <cmath>

// 声明被测试的函数
void add(double num1, double num2);
void sub(double num1, double num2);

// 测试函数
void test_add() {
    std::cout << "测试加法功能..." << std::endl;
    
    // 测试用例1：正数相加
    std::cout << "测试用例1：正数相加" << std::endl;
    add(5.0, 3.0);
    
    // 测试用例2：负数相加
    std::cout << "测试用例2：负数相加" << std::endl;
    add(-5.0, -3.0);
    
    // 测试用例3：正负数相加
    std::cout << "测试用例3：正负数相加" << std::endl;
    add(5.0, -3.0);
    
    // 测试用例4：小数相加
    std::cout << "测试用例4：小数相加" << std::endl;
    add(3.14, 2.86);
}

void test_sub() {
    std::cout << "\n测试减法功能..." << std::endl;
    
    // 测试用例1：正数相减
    std::cout << "测试用例1：正数相减" << std::endl;
    sub(5.0, 3.0);
    
    // 测试用例2：负数相减
    std::cout << "测试用例2：负数相减" << std::endl;
    sub(-5.0, -3.0);
    
    // 测试用例3：正负数相减
    std::cout << "测试用例3：正负数相减" << std::endl;
    sub(5.0, -3.0);
    
    // 测试用例4：小数相减
    std::cout << "测试用例4：小数相减" << std::endl;
    sub(3.14, 2.86);
}

int main() {
    std::cout << "开始运行测试用例..." << std::endl;
    
    // 运行所有测试
    test_add();
    test_sub();
    
    std::cout << "\n所有测试用例执行完成！" << std::endl;
    return 0;
} 

//code for test_0