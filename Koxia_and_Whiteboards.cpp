#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1;

    vec1.assign(7, 100);
    // vec1.resize(7, 100);
    std::cout << "Size: " << vec1.size() << std::endl;
    for (unsigned int i(0); i < vec1.size(); ++i)
    {
        std::cout << vec1[i] << std::endl;
    }

    vec1.resize(4, 5);
    // vec1.assign(4,5);
    std::cout << "\nSize: " << vec1.size() << std::endl;
    for (unsigned int i(0); i < vec1.size(); ++i)
    {
        std::cout << vec1[i] << std::endl;
    }

    vec1.resize(10, 5);
    // vec1.assign(10,5);
    std::cout << "\nSize: " << vec1.size() << std::endl;

    for (unsigned int i(0); i < vec1.size(); ++i)
    {
        std::cout << vec1[i] << std::endl;
    }

    std::cin.get();
    return 0;
}
