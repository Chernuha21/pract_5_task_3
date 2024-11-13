#include <iostream>
#include <stack>

int main() {
    // Створення стека для цілих чисел
    std::stack<int> numberStack;

    // Додавання чисел до стека
    numberStack.push(10);
    numberStack.push(20);
    numberStack.push(30);
    numberStack.push(40);
    numberStack.push(50);
    numberStack.push(60);
    numberStack.push(30); // Додаємо ще 30 для прикладу

    // Введення числа для пошуку
    int searchNumber;
    std::cout << "Write number to search: ";
    std::cin >> searchNumber;

    // Пошук числа у стеці
    bool found = false;
    while (!numberStack.empty()) {
        if (numberStack.top() == searchNumber) {
            found = true;
            break;
        }
        numberStack.pop(); // Витягування елемента
    }

    // Виведення результату пошуку
    if (found) {
        std::cout << "It is a " << searchNumber << " in stack." << std::endl;
    }
    else {
        std::cout << "There is no " << searchNumber << " in stack." << std::endl;
    }

    return 0;
}
