#include <iostream>
#include <string>

struct WashingMachine {
    std::string brand;
    std::string color;
    double width;
    double length;
    double height;
    double power; 
    int spinSpeed; 
    int heatingTemperature; 
};

int main() {
    WashingMachine myWashingMachine;

    myWashingMachine.brand = "ExampleBrand";
    myWashingMachine.color = "White";
    myWashingMachine.width = 60.0; 
    myWashingMachine.length = 60.0; 
    myWashingMachine.height = 85.0; 
    myWashingMachine.power = 1500.0; 
    myWashingMachine.spinSpeed = 1200; 
    myWashingMachine.heatingTemperature = 40; 

    std::cout << "Brand: " << myWashingMachine.brand << std::endl;
    std::cout << "Color: " << myWashingMachine.color << std::endl;
    std::cout << "Width: " << myWashingMachine.width << " cm" << std::endl;
    std::cout << "Length: " << myWashingMachine.length << " cm" << std::endl;
    std::cout << "Height: " << myWashingMachine.height << " cm" << std::endl;
    std::cout << "Power: " << myWashingMachine.power << " watts" << std::endl;
    std::cout << "Spin Speed: " << myWashingMachine.spinSpeed << " RPM" << std::endl;
    std::cout << "Heating Temperature: " << myWashingMachine.heatingTemperature << " Celsius" << std::endl;

    return 0;
}



#include <iostream>
#include <string>

struct Iron {
    std::string brand;
    std::string model;
    std::string color;
    int minTemperature; 
    int maxTemperature; 
    bool hasSteam; 
    double power; 
};

int main() {
    
    Iron myIron;

    
    myIron.brand = "ExampleBrand";
    myIron.model = "ExampleModel";
    myIron.color = "Black";
    myIron.minTemperature = 100; 
    myIron.maxTemperature = 200; 
    myIron.hasSteam = true;
    myIron.power = 1500.0; 
    std::cout << "Brand: " << myIron.brand << std::endl;
    std::cout << "Model: " << myIron.model << std::endl;
    std::cout << "Color: " << myIron.color << std::endl;
    std::cout << "Minimum Temperature: " << myIron.minTemperature << " Celsius" << std::endl;
    std::cout << "Maximum Temperature: " << myIron.maxTemperature << " Celsius" << std::endl;
    std::cout << "Steam Supply: " << (myIron.hasSteam ? "Yes" : "No") << std::endl;
    std::cout << "Power: " << myIron.power << " watts" << std::endl;

    return 0;
}



#include <iostream>
#include <string>

struct Boiler {
    std::string brand;
    std::string color;
    double power; 
    double volume; 
    int heatingTemperature; 
};

int main() {
 
    Boiler myBoiler;
    myBoiler.brand = "ExampleBrand";
    myBoiler.color = "Silver";
    myBoiler.power = 2000.0; 
    myBoiler.volume = 1.5; 
    myBoiler.heatingTemperature = 100;
    std::cout << "Brand: " << myBoiler.brand << std::endl;
    std::cout << "Color: " << myBoiler.color << std::endl;
    std::cout << "Power: " << myBoiler.power << " watts" << std::endl;
    std::cout << "Volume: " << myBoiler.volume << " liters" << std::endl;
    std::cout << "Heating Temperature: " << myBoiler.heatingTemperature << " Celsius" << std::endl;

    return 0;
}


#include <iostream>
#include <string>

struct Animal {
    std::string name;
    std::string animalClass;
    std::string nickname;
};

void fillAnimal(Animal& animal, const std::string& name, const std::string& animalClass, const std::string& nickname) {
    animal.name = name;
    animal.animalClass = animalClass;
    animal.nickname = nickname;
}

void displayAnimal(const Animal& animal) {
    std::cout << "Name: " << animal.name << std::endl;
    std::cout << "Class: " << animal.animalClass << std::endl;
    std::cout << "Nickname: " << animal.nickname << std::endl;
}
void voteForAnimal(Animal& animal) {
    std::cout << "You voted for " << animal.name << "!" << std::endl;
}

int main() {
  
    Animal myAnimal;
    fillAnimal(myAnimal, "Tiger", "Mammal", "Stripes");

    displayAnimal(myAnimal);
    voteForAnimal(myAnimal);

    return 0;
}
