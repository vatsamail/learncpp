#include <iostream>
#include <cmath>
#include <string>
#include <array>

// g++ .\proceedural.cpp -o proceedural.exe; .\proceedural.exe

using std::endl;

void section(std::string start)
{
    std::cout << "\n****** begin: " << start << " ******" << std::endl;
}
void section(void)
{
    std::cout << "****** end ******" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::string name, line;
    float n, x, z;
    name = "world";

    // -----------------
    section("arguments");
    std::cout << "The arguments count: " << argc << ". The code: " << argv[0] << std::endl;
    section();
    // -----------------

    // -----------------
    section("strings");
    std::cout << "A line about yourself: ";
    std::getline(std::cin, line);
    std::cout << "Hi " << name << ", You said: " << line << std::endl;
    line = "I always want to say Hello: Hello!";
    std::string copy_line = line;
    std::cout << "line: " << line << endl;
    line.insert(33, name);
    std::cout << "new line after the insert: " << line << endl;
    n = name.length();
    std::cout << line << std::endl;
    std::cout << "Length of the name: " << name << " is " << n << std::endl;
    std::cout << "Comparing line with the name: " << line.compare(name) << std::endl;
    std::cout << "Finding Hello: " << line.find("Hello") << std::endl;
    std::cout << "Reverse Finding Hello: " << line.rfind("Hello") << std::endl;
    std::cout << "Erase: " << line.erase() << endl;
    line = copy_line;
    std::cout << "Find first of Hello: " << line.find_first_of("Hello") << endl;
    std::cout << "Find first not of Hello: " << line.find_first_not_of("Hello") << endl;
    std::cout << "Find last of Hello: " << line.find_last_of("Hello") << endl;
    std::cout << "Find last not of Hello: " << line.find_last_not_of("Hello") << endl;
    section();
    // -----------------

    // -------------------
    section("math ops");
    std::cout << "Some math operations on the value: " << n << std::endl;
    x = pow(n, 3);
    std::cout << "pow of 3: " << x << std::endl;
    x = sqrt(n);
    std::cout << "sqrt: " << x << std::endl;
    x = fmax(n, 10);
    std::cout << "fmax with 10: " << x << std::endl;
    section();
    // -------------------

    std::array<int, 4> a = {10, 20, 30, 40};
    std::cout << "Size of array: " << a.size() << a[2] << a.at(2) << std::endl;

    return 0;
}