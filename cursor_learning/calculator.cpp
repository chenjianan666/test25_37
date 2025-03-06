#include "calculator.h"
#include <iostream>

// 加法函数实现
double Calculator::add(double num1, double num2) const {
    return num1 + num2;
}

// 减法函数实现
double Calculator::subtract(double num1, double num2) const {
    return num1 - num2;
}

// 乘法函数实现
double Calculator::multiply(double num1, double num2) const {
    return num1 * num2;
}

// 除法函数实现
double Calculator::divide(double num1, double num2) const {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        throw std::runtime_error("错误：除数不能为零！");
    }
}

// 显示菜单实现
void Calculator::showMenu() const {
    std::cout << "\n=== 简单计算器 ===" << std::endl;
    std::cout << "1. 加法" << std::endl;
    std::cout << "2. 减法" << std::endl;
    std::cout << "3. 乘法" << std::endl;
    std::cout << "4. 除法" << std::endl;
    std::cout << "5. 退出" << std::endl;
    std::cout << "请选择操作 (1-5): ";
}

// 获取用户输入实现
void Calculator::getUserInput(double& num1, double& num2) const {
    std::cout << "请输入第一个数字: ";
    std::cin >> num1;
    
    std::cout << "请输入第二个数字: ";
    std::cin >> num2;
}

// 处理用户选择的操作实现
void Calculator::processOperation(char choice, double num1, double num2) const {
    try {
        switch (choice) {
            case '1':
                std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
                break;
            case '2':
                std::cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << std::endl;
                break;
            case '3':
                std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl;
                break;
            case '4':
                std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << std::endl;
                break;
            default:
                std::cout << "无效的选择！" << std::endl;
        }
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

// 运行计算器实现
void Calculator::run() {
    char choice;
    double num1, num2;
    
    while (true) {
        showMenu();
        std::cin >> choice;
        
        if (choice == '5') {
            std::cout << "感谢使用！再见！" << std::endl;
            break;
        }
        
        getUserInput(num1, num2);
        processOperation(choice, num1, num2);
        
        std::cout << "\n按回车键继续...";
        std::cin.ignore();
        std::cin.get();
    }
} 