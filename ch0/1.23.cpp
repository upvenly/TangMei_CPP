#include <iostream>
#include "Sales_item.h"

int main()
{
    // Sales_item item_1;
    Sales_item sum;
    std::cin >> sum;
    // std::cout << sum << std::endl;
    Sales_item item;
    int count=1;
    // while(std::cin >> sum)
    while(std::cin >> item){
        // std::cout<<item<<std::endl;
        if (item.isbn() == sum.isbn()){
            count +=1;
            // std::cout<<count<<std::endl;
        }
        else {
            std::cout<<sum<<std::endl;
            std::cout<<count<<std::endl;
            count = 1;
            // int A=1;
        }
        sum = item;
    }
        std::cout<<sum<<std::endl;
        std::cout<<count<<std::endl;
	return 0;
}
