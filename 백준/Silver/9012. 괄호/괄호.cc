#include <iostream>
#include <stack>
#include <cstring>
// 스택은 LIFO 스택을 다 쌓아놓고 front 부터 뺌
int main() {
    int Case;
    std::cin >> Case;
    while (Case--) {
        std::string s;
        std::stack<char> stack;
        std::cin >> s;
        bool isAnswered = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stack.push('(');
            }
            else {
                if (!stack.empty()) {
                    char c = stack.top();
                    stack.pop();
                    if (c != '(') {
                        std::cout << "NO" << '\n';
                        isAnswered = true;
                        break;
                    }
                }
                else {
                    std::cout << "NO" << '\n';
                    isAnswered = true;
                    break;
                }
            }
        }
        if (!isAnswered && !stack.empty()) std::cout << "NO" << '\n';
        else if (!isAnswered && stack.empty()) std::cout << "YES" << '\n';
    }
    return 0;
}