#include <iostream>
#include <stack>

int main() {
    // ��������� ����� ��� ����� �����
    std::stack<int> numberStack;

    // ��������� ����� �� �����
    numberStack.push(10);
    numberStack.push(20);
    numberStack.push(30);
    numberStack.push(40);
    numberStack.push(50);
    numberStack.push(60);
    numberStack.push(30); // ������ �� 30 ��� ��������

    // �������� ����� ��� ������
    int searchNumber;
    std::cout << "Write number to search: ";
    std::cin >> searchNumber;

    // ����� ����� � �����
    bool found = false;
    while (!numberStack.empty()) {
        if (numberStack.top() == searchNumber) {
            found = true;
            break;
        }
        numberStack.pop(); // ����������� ��������
    }

    // ��������� ���������� ������
    if (found) {
        std::cout << "It is a " << searchNumber << " in stack." << std::endl;
    }
    else {
        std::cout << "There is no " << searchNumber << " in stack." << std::endl;
    }

    return 0;
}
