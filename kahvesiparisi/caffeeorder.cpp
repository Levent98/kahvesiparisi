/*
 * caffeeorder.cpp
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */
// Kahve menüsü oluşturma

#include "caffeeorder.h"
#include <iostream>
#include <limits>

using namespace std;

// Kahve menüsü oluşturma
map<int, Coffee> createCoffeeMenu() {
    map<int, Coffee> menu;

    menu[1] = {"Espresso", 20, {{"Espresso", 1}}};
    menu[2] = {"Double Espresso", 27, {{"Espresso", 2}}};
    menu[3] = {"Cappuccino", 28, {{"Espresso", 1}, {"Steamed Milk", 2}, {"Milk Foam", 2}}};
    menu[4] = {"Caffe Latte", 28, {{"Espresso", 1}, {"Steamed Milk", 3}, {"Milk Foam", 1}}};
    menu[5] = {"Mocha", 32, {{"Espresso", 1}, {"Steamed Milk", 1}, {"Milk Foam", 1}, {"Hot Chocolate", 2}}};
    menu[6] = {"Americano", 26, {{"Espresso", 1}, {"Hot Water", 4}}};
    menu[7] = {"Hot Water", 5, {{"Hot Water", 5}}};

    return menu;
}

// Menüyü görüntüleme
void displayMenu(const map<int, Coffee>& menu) {
    cout << "Kahve Menüsü:\n";
    for (const auto& item : menu) {
        cout << item.first << ". " << item.second.name << " (" << item.second.price << " ₺)\n";
    }
    cout << endl;
}

// Kullanıcı girişini alma
int getUserChoice() {
    int choice;
    while (true) {
        cout << "Lütfen içmek istediğiniz kahvenin numarasını giriniz: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Geçersiz giriş. Lütfen bir sayı giriniz.\n";
        } else if (choice < 1 || choice > 7) {
            cout << "Geçersiz seçim. Lütfen 1-7 arasında bir numara giriniz.\n";
        } else {
            cin.ignore();
            return choice;
        }
    }
}

// Kahve hazırlama ve bilgi gösterme
void prepareAndServeCoffee(const Coffee& coffee) {
    cout << "\nTeşekkürler kahveniz hazırlanıyor.\n\n";
    cout << coffee.name << " seçtiniz. Bu içeceğimiz ";

    bool first = true;
    for (const auto& ingredient : coffee.ingredients) {
        if (!first) {
            cout << ", ";
        }
        cout << ingredient.second << " doz " << ingredient.first;
        first = false;
    }

    cout << " içermektedir. Afiyet Olsun.\n";
}
