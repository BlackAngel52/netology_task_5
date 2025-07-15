#include <iostream>

int main()
{
    const int arr_len{ 10 };
    int arr[arr_len]{};
    int count{};

    for (count; count < arr_len-1; ++count) {
        arr[count] = count;
        std::cout << arr[count] << ", ";
    }
    arr[count] = count;
    std::cout << arr[count];

}

