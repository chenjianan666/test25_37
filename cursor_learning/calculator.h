#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // 构造函数
    Calculator() = default;
    
    // 基本运算函数
    double add(double num1, double num2) const;
    double subtract(double num1, double num2) const;
    double multiply(double num1, double num2) const;
    double divide(double num1, double num2) const;
    
    // 显示菜单
    void showMenu() const;
    
    // 获取用户输入
    void getUserInput(double& num1, double& num2) const;
    
    // 处理用户选择的操作
    void processOperation(char choice, double num1, double num2) const;
    
    // 运行计算器
    void run();
};

#endif // CALCULATOR_H 