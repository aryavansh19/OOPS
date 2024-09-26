#include <iostream>
#include <string>

class NonRepeatingCharacters {
public:
    void findNonRepeating(const std::string &str) {
        int charCount[256] = {0};
        for (char ch : str) {
            if (ch != ' ') {
                charCount[ch]++;
            }
        }

        for (char ch : str) {
            if (ch != ' ' && charCount[ch] == 1) {
                std::cout << ch << ' ';
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    NonRepeatingCharacters nrc;
    std::string input = "graphic era university";
    nrc.findNonRepeating(input);

    return 0;
}
