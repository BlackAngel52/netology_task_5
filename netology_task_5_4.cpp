#include <iostream>

int main()
{

    const int len{ 10 };
    int arr[len]{2,9,7,5,1,10,4,6,3,8};
    
    int temp_a{};

    std::cout << "Array before sort: ";
    for (int i{}; i < len; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int count_iterations{}; count_iterations < len - 1; ++count_iterations)
    {
        for (int element = len - 1; element > count_iterations; --element) 
        {
            if (arr[element] < arr[element - 1])
            {
                temp_a = arr[element];
                arr[element] = arr[element - 1];
                arr[element - 1] = temp_a;
            }
        }
    }
    std::cout << "Array after sort: ";

    for (int i{}; i < len; ++i) 
    {
        std::cout << arr[i] << " ";
    }

}

