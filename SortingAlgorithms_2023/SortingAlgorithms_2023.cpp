// SortingAlgorithms_2023.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<random>
#include<vector>

std::vector<int> generate(int size)
{
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1, 50);
    std::cout << "Maximum number" << generator.min() << "\n";
    std::cout << "minimum number" << generator.max() << "\n";
    std::vector<int> numbers(size);
    for (size_t i = 0; i < numbers.size(); ++i)
        numbers.at(i) = distribution(generator);
    return numbers;
}
void bubleSort(std::vector<int>& numbers)
{

}
void selectionSort(std::vector<int>& numbers)
{

}
void insertionSort(std::vector<int>& numbers)
{

}
void quickSort(std::vector<int>& numbers)
{

}
void mergeSort(std::vector<int>& numbers)
{

}
bool isSorted(const std::vector<int>& numbers)
{
    for (size_t i = 0; i < numbers.size() - 1; ++i)
        if (numbers.at(i) > numbers.at(i + 1))
            return false;
    return true;

}
int main()
{
    std::vector<int> v1 = generate(100);
    bubleSort(v1);
    if (isSorted(v1))
        std::cout << "sorted\n";
    /**
    std::vector<int> v2 = generate(100);
    selectionSort(v2);
    std::vector<int> v3 = generate(100);
    insertionSort(v3);
    std::vector<int> v4 = generate(100);
    quickSort(v4);
    std::vector<int> v5 = generate(100);
    mergeSort(v5);
    **/
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
