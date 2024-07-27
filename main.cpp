#include "Vehicles.h"

int main(){

    std::vector<Vehicles> webStock;

    // filling the vector with 10 vehicles
    for(int i = 0; i < 10; i++)
    {

        std::string name;
        std::cout << "insert vehicle from here: ";
        std::cin >> name;

        webStock.push_back(name);

    }

    return 0;
}
