#include <iostream>

int main()
{
    const int arr_len{ 10 };
    int arr[arr_len]{1,500,3,4,-50,6,7,8,9,10};
    int count{};
    int min{10000};
    int max{-10000};


    for (count; count < arr_len; ++count) {
        std::cout << arr[count] << " ";
        if (arr[count] < min) {
            min = arr[count];
        }
        if (arr[count] > max) {
            max = arr[count];
        }
    }
    std::cout << std::endl;
    std::cout << "Min = " << min << " Max = " << max << std::endl;

}

