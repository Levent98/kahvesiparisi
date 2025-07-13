/*
 * main.cpp
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */
#include "caffeeorder.h"

using namespace std;

int main() {
    // Kahve menüsünü oluştur
    map<int, Coffee> coffeeMenu = createCoffeeMenu();

    // Menüyü göster
    displayMenu(coffeeMenu);

    // Kullanıcı seçimini al
    int choice = getUserChoice();

    // Seçilen kahveyi hazırla ve göster
    prepareAndServeCoffee(coffeeMenu[choice]);

    return 0;
}
