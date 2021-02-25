#include <iostream>
#include "Sales_item.h"

// int main()
// {
//     // Sales_item item_1;
//     Sales_item sum;
//     std::cin >> sum;
//     // std::cout << sum << std::endl;
//     // Sales_item item_2;
//     while(std::cin >> sum)
//         std::cout << sum << std::endl;
//         sum += sum;
//         std::cout << sum << std::endl;

//         std::cout << "sum of sale items: " << sum << std::endl;
// 	return 0;

//     // std::cin >> item_2;
//     // std::cout << item_2 << std::endl;

// }

// int main()
// {
//     Sales_item sum_item;
//     std::cin >> sum_item;
//     // std::cout << sum_item << std::endl;
//     for (Sales_item item; std::cin >> item; std::cout << item << std::endl){
//         sum_item += sum_item;
//     }
//     std::cout << "sum of sale items: " << sum_item << std::endl;
// 	return 0;
// }


int main()
{
    Sales_item sum_item;
    std::cin >> sum_item;
    std::cout << sum_item << std::endl;
    for (Sales_item item; std::cin >> item; std::cout << item << std::endl){
        sum_item += item;
    }
    std::cout << "sum of sale items: " << sum_item << std::endl;
	return 0;
}