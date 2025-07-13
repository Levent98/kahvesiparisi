/*
 * coffeeorderservice.cpp
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */
#include "CoffeeOrderService.h"
#include "CoffeeMenu.h"
#include <iostream>
#include <limits>
#include <stdexcept>

// Constructor
CoffeeOrderService::CoffeeOrderService(CoffeeMenu& menu)
    : menu(menu) {}

// Start the order process
void CoffeeOrderService::startOrderProcess() {
    menu.displayMenu();
    Coffee selectedCoffee = getSelectedCoffee();
    prepareAndServe(selectedCoffee);
}

// Get user's coffee selection
Coffee CoffeeOrderService::getSelectedCoffee() const {
    while (true) {
        std::cout << "Lütfen içmek istediğiniz kahvenin numarasını giriniz: ";
        std::string input;
        std::getline(std::cin, input);

        if (!validateInput(input)) {
            std::cout << "Geçersiz seçim. Lütfen 1-" << menu.getMenuSize()
                      << " arasında bir numara giriniz.\n";
            continue;
        }

        try {
            int choice = std::stoi(input);
            return menu.getCoffeeById(choice);
        } catch (const std::out_of_range&) {
            std::cout << "Geçersiz seçim. Lütfen menüdeki numaralardan birini giriniz.\n";
        }
    }
}

// Validate user input
bool CoffeeOrderService::validateInput(const std::string& input) const {
    if (input.empty()) return false;

    // Check if all characters are digits
    for (char c : input) {
        if (!isdigit(c)) return false;
    }

    // Check if within valid range
    int choice = std::stoi(input);
    return choice >= 1 && choice <= static_cast<int>(menu.getMenuSize());
}

// Prepare and serve the coffee
void CoffeeOrderService::prepareAndServe(const Coffee& coffee) const {
    std::cout << "\nTeşekkürler kahveniz hazırlanıyor.\n\n";
    std::cout << coffee.getName() << " seçtiniz. Bu içeceğimiz ";

    const auto& ingredients = coffee.getIngredients();
    bool first = true;
    for (const auto& [name, quantity] : ingredients) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << quantity << " doz " << name;
        first = false;
    }

    std::cout << " içermektedir. Afiyet Olsun.\n";
}
