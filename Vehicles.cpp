#include "Vehicles.h"

/// Setters

void Vehicles::setMake(){

    std::string newMake;

    std::cout << "What is the new make of the vehicle: ";
    std::getline(std::cin, newMake);
    make = newMake;

}

void Vehicles::setModel(){

    std::string newModel;

    std::cout << "What is the new model of the vehicle: ";
    std::getline(std::cin, newModel);

    model = newModel;
}

void Vehicles::setBadge(){

    std::string newBadge;

    std::cout << "What is the new badge of the vehicle: ";
    std::getline(std::cin, newBadge);

    badge = newBadge;
}

void Vehicles::setPrice(){

    double newPrice;

    std::cout << "What is the price of the vehicle: ";
    std::cin >> newPrice;

    price = newPrice;
}

void Vehicles::setStock(){
    char availability;

    std::cout << "Is the vehicle in stock(y/n):  ";
    std::cin >> availability;

    if(availability == 'y')
    {
        stock = true;
    }
    else if(availability == 'n')
    {
        stock = false;
    }
    else
    {
        std::cout << "Wrong argument.\n";
    }
}

/// Getters

std::string Vehicles::getMake(){

    return make;
}


std::string Vehicles::getModel(){

    return model;
}


std::string Vehicles::getBadge(){

    return badge;
}


double Vehicles::getPrice() {

    return price;
}

bool Vehicles::getStock(){

    return stock;
}