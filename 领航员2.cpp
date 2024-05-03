#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sstream>

using namespace std;


template <typename T>
string to_string(T value) {
    std::ostringstream os;
    os << value;
    return os.str();
}


string generate_expression(int max_num, const string& operators, bool use_parentheses, bool use_decimals, int count) {
    vector<string> numbers(count);
    vector<char> ops(count - 1);

    // 生成随机数和运算符
    for (int i = 0; i < count; ++i) {
        int num = rand() % max_num + 1;
        numbers[i] = use_decimals ? to_string(num) + "." + to_string(rand() % 10) : to_string(num);
        if (i < count - 1) {
            ops[i] = operators[rand() % operators.size()];
        }
    }

    // 如果启用括号，随机决定括号的位置
    if (use_parentheses && count > 1) {
        int startPos = rand() % (count - 1);
        int endPos = startPos + 1 + rand() % (count - startPos - 1);
        numbers[startPos] = "(" + numbers[startPos];
        numbers[endPos] = numbers[endPos] + ")";
    }

    // 组合表达式
    string expression = numbers[0];
    for (int i = 0; i < count - 1; ++i) {
        expression += " " + string(1, ops[i]) + " " + numbers[i + 1];
    }

    return expression;
}

int main() {
    srand(time(0));

    int num_problems;
    cout << "请输入题目数量: ";
    cin >> num_problems;

    string operators;
    cout << "请输入运算符号（可以输入一个或多个，如 +, -, *, /）: ";
    cin >> operators;

    int max_num;
    cout << "请输入最大数字: ";
    cin >> max_num;

    bool use_parentheses;
    cout << "是否包含括号? (1代表是, 0代表否): ";
    cin >> use_parentheses;

    bool use_decimals;
    cout << "是否包含小数? (1代表是, 0代表否): ";
    cin >> use_decimals;

    int output_option;
    cout << "选择输出方式：1. 控制台 2. 文件 (输入 1 或 2): ";
    cin >> output_option;

    vector<string> problems;
    for (int i = 0; i < num_problems; i++) {
        int num_elements = rand() % 3 + 2;  // 随机选择2至4个数字参与运算
        problems.push_back(generate_expression(max_num, operators, use_parentheses, use_decimals, num_elements) + " = ?");
    }

    if (output_option == 1) {
        cout << "问题列表:" << endl;
        for (const auto& problem : problems) {
            cout << problem << endl;
        }
    }
    else if (output_option == 2) {
        ofstream outfile("problems.txt");
        for (const auto& problem : problems) {
            outfile << problem << endl;
        }
        outfile.close();
        cout << "题目已生成并写入到文件 problems.txt 中" << endl;
    }
    else {
        cout << "无效的输出选项" << endl;
    }

    return 0;
}
