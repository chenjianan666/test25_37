#include "calculator.h"
#include <iostream>
#include <cassert>

// 测试函数
void testCalculator() {
    Calculator calc;
    
    std::cout << "开始测试计算器功能..." << std::endl;
    
    // 测试加法
    std::cout << "\n测试加法功能：" << std::endl;
    assert(calc.add(5.0, 3.0) == 8.0);
    assert(calc.add(-5.0, 3.0) == -2.0);
    assert(calc.add(0.0, 0.0) == 0.0);
    std::cout << "加法测试通过！" << std::endl;
    
    // 测试减法
    std::cout << "\n测试减法功能：" << std::endl;
    assert(calc.subtract(5.0, 3.0) == 2.0);
    assert(calc.subtract(-5.0, 3.0) == -8.0);
    assert(calc.subtract(0.0, 0.0) == 0.0);
    std::cout << "减法测试通过！" << std::endl;
    
    // 测试乘法
    std::cout << "\n测试乘法功能：" << std::endl;
    assert(calc.multiply(5.0, 3.0) == 15.0);
    assert(calc.multiply(-5.0, 3.0) == -15.0);
    assert(calc.multiply(0.0, 5.0) == 0.0);
    std::cout << "乘法测试通过！" << std::endl;
    
    // 测试除法
    std::cout << "\n测试除法功能：" << std::endl;
    assert(calc.divide(6.0, 2.0) == 3.0);
    assert(calc.divide(-6.0, 2.0) == -3.0);
    assert(calc.divide(0.0, 5.0) == 0.0);
    std::cout << "除法测试通过！" << std::endl;
    
    // 测试除零异常
    std::cout << "\n测试除零异常：" << std::endl;
    try {
        calc.divide(5.0, 0.0);
        assert(false); // 如果执行到这里，说明没有抛出异常，测试失败
    } catch (const std::exception& e) {
        std::cout << "成功捕获除零异常：" << e.what() << std::endl;
    }
    
    std::cout << "\n所有测试用例通过！" << std::endl;
}

int main() {
    // 运行单元测试
    testCalculator();
    
    // 运行交互式计算器
    std::cout << "\n开始运行交互式计算器..." << std::endl;
    Calculator calc;
    calc.run();
    
    return 0;
}
