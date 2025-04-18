#include <iostream>
#include <memory>

class Battery {
public:
    void charge() { std::cout << "Charging...\n"; }
};

class Laptop {
private:
    Battery* battery;

public:
    Laptop(Battery* b) {
        if (!b) {
            throw std::invalid_argument("Battery cannot be null");
        }
        battery = b;
    }

    void chargeLaptop() {
        battery->charge();
    }
};

int main() {
    Battery* battery = new Battery;
    Laptop laptop(battery);
    laptop.chargeLaptop();
}
