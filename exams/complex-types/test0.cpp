#include <string>

class A {
private:
    int data;
public:
    void func1(const std::string s) const;
    void func2(std::string s) const;

    void func3(const std::string s);
};

int main() {
	A sample;
	return 0;
}
