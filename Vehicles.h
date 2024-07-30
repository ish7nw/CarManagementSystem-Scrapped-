#ifndef VEHICLES_H
#define VEHICLES_H
#include<iostream>
#include<string>
#include<vector>
#include<fstream>

void displayOptions();
std::string getObjectName();
std::string getVehicleMaker();
std::string getVehicleModel();
std::string getVehicleBadge();
double getVehiclePrice();
bool getVehicleStock();


class Vehicles{
private:

   std::string make;
   std::string model;
   std::string badge;
   double price;
   bool stock;

public:

    // constructor
    Vehicles();
    Vehicles(std::string vMake, std::string vModel, std::string vBadge, double vPrice, bool vStock);


    // getters
    std::string getMake();
    std::string getModel();
    std::string getBadge();
    double getPrice();
    bool getStock();

    // setters

    void setMake();
    void setModel();
    void setBadge();
    void setPrice();
    void setStock();
};

#endif //VEHICLES_H
