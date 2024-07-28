#ifndef VEHICLES_H
#define VEHICLES_H
#include<iostream>
#include<string>
#include<vector>

void displayOptions();

class Vehicles{
private:

   std::string make;
   std::string model;
   std::string badge;
   double price;
   bool stock;

public:

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
