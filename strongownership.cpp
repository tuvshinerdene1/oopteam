#include <iostream>

class Engine {
public:
    void start() { std::cout << "Engine started\n"; }
};

class Car {
private:
    Engine engine;  // Car owns Engine (composition)

public:
    void startCar() {
        engine.start();
    }
};

int main() {
    Car car;
    car.startCar();
}
