#include "Vehicles.h"

/// Constructor

Vehicles::Vehicles() {

    make = "None";
    model = "None";
    price = 0.0;
    stock = false;
}

Vehicles::Vehicles(std::string vMake, std::string vModel, std::string vBadge, double vPrice, bool vStock) {

    make = vMake;
    model = vModel;
    badge = vBadge;
    price = vPrice;
    stock = vStock;
}


// Setters

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


/// THIS THING HERE MAKES THE OBJECTS OF THE CLASS
/// IT IS A VERY COMPLICATED SYSTEM


void displayOptions(){

    int userChoice;

    do
    {
        std::cout << "\n--Welcome To Arcturus Motors--\n";
        std::cout << std::endl;

        std::cout << "You can buy, sell and check car prices on this application.\n";
        std::cout << "1. Buy a car\n";
        std::cout << "2. Sell a car\n";
        std::cout << "3. Get car details\n";
        std::cout << "4. Exit\n";

        std::cout << "What would you like to do: ";
        std::cin >> userChoice;

        if(userChoice == 2)
        {
            std::string objectName;
            std::string vMaker;
            std::string vModel;
            std::string vBadge;
            double vPrice;
            bool vStock;

            std::cout << "Okay, now we will get the details of your car.\n";

            objectName = getObjectName();
            vMaker = getVehicleMaker();
            vModel = getVehicleModel();
            vBadge = getVehicleBadge();
            vPrice = getVehiclePrice();
            vStock = getVehicleStock();


            /// CREATING AN OBJECT HERE

          int counter = 0;
          bool generate = true;

          while(generate)
          {
              Vehicles objectName(vMaker, vModel, vBadge, vPrice, vStock);
              counter++;
              generate = false;
          }

        }
    }
    while(userChoice != 4);


}

std::string getObjectName(){
    std::string objName;

    std::cout << "What is the name of the vehicle: ";
    std::cin >> objName;

    return objName;
}

std::string getVehicleMaker(){
    std::string make;

    std::cout << "Who is the company that made your vehicle: ";
    std::cin >> make;
    std::cin.clear();

    return make;

}

std::string getVehicleModel(){
    std::string model;

    std::cout << "What is the model name of the vehicle: ";
    std::cin >> model;

    return model;
}

std::string getVehicleBadge(){
    std::string badge;

    std::cout << "What badge is your vehicle (if it has): ";
    std::cin >> badge;

    return badge;

}

double getVehiclePrice(){
    double price;

    std::cout << "For how much are you willing to sell your vehicle (numbers only): ";
    std::cin >> price;

    return price;
}

bool getVehicleStock(){
    bool inStock;
    char usrOpt;

    do
    {
      std::cout << "Do you want to sell the vehicle now(y/n): ";
      std::cin >> usrOpt;

      if(usrOpt == 'y')
      {
          inStock = true;
      }
      else if(usrOpt == 'n')
      {
          inStock = false;
      }
      else
      {
          std::cout << "Please enter y or n.\n";
      }
    }
    while(usrOpt != 'y' && usrOpt != 'n');

    return inStock;
}