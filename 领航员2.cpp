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

    // ����������������
    for (int i = 0; i < count; ++i) {
        int num = rand() % max_num + 1;
        numbers[i] = use_decimals ? to_string(num) + "." + to_string(rand() % 10) : to_string(num);
        if (i < count - 1) {
            ops[i] = operators[rand() % operators.size()];
        }
    }

    // ����������ţ�����������ŵ�λ��
    if (use_parentheses && count > 1) {
        int startPos = rand() % (count - 1);
        int endPos = startPos + 1 + rand() % (count - startPos - 1);
        numbers[startPos] = "(" + numbers[startPos];
        numbers[endPos] = numbers[endPos] + ")";
    }

    // ��ϱ��ʽ
    string expression = numbers[0];
    for (int i = 0; i < count - 1; ++i) {
        expression += " " + string(1, ops[i]) + " " + numbers[i + 1];
    }

    return expression;
}

int main() {
    srand(time(0));

    int num_problems;
    cout << "��������Ŀ����: ";
    cin >> num_problems;

    string operators;
    cout << "������������ţ���������һ���������� +, -, *, /��: ";
    cin >> operators;

    int max_num;
    cout << "�������������: ";
    cin >> max_num;

    bool use_parentheses;
    cout << "�Ƿ��������? (1������, 0�����): ";
    cin >> use_parentheses;

    bool use_decimals;
    cout << "�Ƿ����С��? (1������, 0�����): ";
    cin >> use_decimals;

    int output_option;
    cout << "ѡ�������ʽ��1. ����̨ 2. �ļ� (���� 1 �� 2): ";
    cin >> output_option;

    vector<string> problems;
    for (int i = 0; i < num_problems; i++) {
        int num_elements = rand() % 3 + 2;  // ���ѡ��2��4�����ֲ�������
        problems.push_back(generate_expression(max_num, operators, use_parentheses, use_decimals, num_elements) + " = ?");
    }

    if (output_option == 1) {
        cout << "�����б�:" << endl;
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
        cout << "��Ŀ�����ɲ�д�뵽�ļ� problems.txt ��" << endl;
    }
    else {
        cout << "��Ч�����ѡ��" << endl;
    }

    return 0;
}
