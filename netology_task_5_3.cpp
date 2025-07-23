#include <iostream>

int main()
{
    const int rows{ 3 };
    const int collumns{ 6 };
    int arr[rows][collumns]
    {
        { 1, 2, 3, 4, 5, 6},
        { 7, 8, 9, 10, 11, 12 },
        { 13, 14, 15, 16, 17, 18}
    };
    


    int min_row{};
    int min_collumn{};
    int max_row{};
    int max_collumn{};
    int min{arr[0][0]};
    int max{arr[0][0]};


    for (int row{}; row < rows; ++row)
    {
        for (int collumn{}; collumn < collumns; ++collumn)
        {
            std::cout << arr[row][collumn] << "\t";
            if (arr[row][collumn] < min) 
            {
                min = arr[row][collumn];
                min_row = row;
                min_collumn = collumn;
            }
            if (arr[row][collumn] > max)
            {
                max = arr[row][collumn];
                max_row = row;
                max_collumn = collumn;
            }
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Min = " << min_row << " " << min_collumn << " Max = " << max_row << " " << max_collumn << std::endl;

}


