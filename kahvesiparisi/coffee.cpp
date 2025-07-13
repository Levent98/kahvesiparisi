/*
 * caffeeorder.cpp
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */
// Kahve menüsü oluşturma

#include "Coffee.h"
#include <iostream>

Coffee::Coffee(const std::string& name, int price, const std::map<std::string, int>& ingredients)
    : name(name), price(price), ingredients(ingredients) {}

std::string Coffee::getName() const {
    return name;
}

int Coffee::getPrice() const {
    return price;
}

const std::map<std::string, int>& Coffee::getIngredients() const {
    return ingredients;
}
