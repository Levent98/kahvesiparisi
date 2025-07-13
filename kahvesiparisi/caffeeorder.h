/*
 * caffeeorder.h
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */

#ifndef COFFEE_ORDER_H
#define COFFEE_ORDER_H

#include <iostream>
#include <string>
#include <map>
#include <limits>

// Coffee yapısı
struct Coffee {
    std::string name;
    int price;
    std::map<std::string, int> ingredients;
};

// Fonksiyon prototipleri
std::map<int, Coffee> createCoffeeMenu();
void displayMenu(const std::map<int, Coffee>& menu);
int getUserChoice();
void prepareAndServeCoffee(const Coffee& coffee);

#endif
