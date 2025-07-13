/*
 * caffeeorder.h
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */

#ifndef COFFEE_H
#define COFFEE_H

#include <string>
#include <map>

class Coffee {
public:
    // default constructor
    Coffee() = default;  // or provide default values

    Coffee(const std::string& name, int price, const std::map<std::string, int>& ingredients);

    std::string getName() const;
    int getPrice() const;
    const std::map<std::string, int>& getIngredients() const;

private:
    std::string name;
    int price = 0;
    std::map<std::string, int> ingredients;
};

#endif // COFFEE_H
