#pragma once
#include <iostream>
#include <string>
using namespace std;

// Class Declarations

class ALU {
protected:
    int NoOfAdders;
    int NoOfSubtractor;
    int NoOfRegisters;
    int sizeOfRegisters;
public:
    ALU();
    ALU(int NoOfAdders, int NoOfSubtractor, int NoOfRegisters, int sizeOfRegisters);
    void setNoOfAdders(int NoOfAdders);
    void setNoOfSubtractor(int NoOfSubtractor);
    void setNoOfRegisters(int NoOfRegisters);
    void setSizeOfRegisters(int sizeOfRegisters);
    int getNoOfAdders();
    int getNoOfSubtractor();
    int getNoOfRegisters();
    int getSizeOfRegisters();
    void Insertion();
    void Display();
};

class ControlUnit {
protected:
    float clock;
public:
    ControlUnit();
    ControlUnit(float clock);
    void setClock(float clock);
    float getClock();
    void Insertion();
    void Display();
};

class GraphicsCard {
protected:
    string brand;
    int memorySize;
    double price;
public:
    GraphicsCard();
    GraphicsCard(string brand, int memorySize, double price);
    void setBrand(string brand);
    void setMemorySize(int memorySize);
    void setPrice(double price);
    string getBrand();
    int getMemorySize();
    double getPrice();
    void Insertion();
    void Display();
};

class AMD_NvidiaGPU : public GraphicsCard {
protected:
    string type;
public:
    AMD_NvidiaGPU();
    AMD_NvidiaGPU(string type);
    void setType(string type);
    string getType();
};

class AppleGPU : public GraphicsCard {
protected:
    string type;
public:
    AppleGPU();
    AppleGPU(string type);
    void setType(string type);
    string getType();
};

class CPU {
protected:
    ALU alu;
    ControlUnit cu;
public:
    CPU();
    CPU(ALU alu, ControlUnit cu);
    void setALU(ALU alu);
    void setCU(ControlUnit cu);
    ALU getALU();
    ControlUnit getCU();
    void Insertion();
};

class Intel_AMD_CPU : public CPU {
protected:
    string architecture;
    string AMD_or_Intel;
    float price;
public:
    Intel_AMD_CPU();
    Intel_AMD_CPU(string architecture, string AMD_or_Intel);
    void setArchitecture(string architecture);
    string getArchitecture();
    void setPrice(float price);
    float getPrice();
    void Insertion();
    void Display();
};

class AppleSiliconCPU : public CPU {
protected:
    string architecture;
    float price;
    AppleGPU* gpu;
public:
    AppleSiliconCPU();
    AppleSiliconCPU(string architecture, AppleGPU* gpu);
    void setArchitecture(string architecture);
    void setGPU(AppleGPU* gpu);
    string getArchitecture();
    AppleGPU* getGPU();
    void setPrice(float price);
    float getPrice();
    void Insertion();
    void Display();
};

class MainMemory {
protected:
    int capacity;
    string technologyType;
public:
    MainMemory();
    MainMemory(int capacity, string technologyType);
    void setCapacity(int capacity);
    void setTechnologyType(string technologyType);
    int getCapacity();
    string getTechnologyType();
    void Insertion();
    void Display();
};

class Port {
protected:
    string type;
    float baud_rate;
public:
    Port();
    Port(string type, float baud_rate);
    void setType(string type);
    void setBaudRate(float baud_rate);
    string getType();
    float getBaudRate();
    void Insertion();
    void Display();
};

class MotherBoard {
protected:
    MainMemory mm;
    Port* ports;
    float price;
public:
    MotherBoard();
    MotherBoard(MainMemory mm, int size);
    void setMainMemory(MainMemory mm);
    MainMemory getMainMemory();
    float getPrice();
    void Insertion();
    void Display();
};

class PhysicalMemory {
protected:
    int capacity;
public:
    PhysicalMemory();
    PhysicalMemory(int capacity);
    void setCapacity(int capacity);
    int getCapacity();
    void Display();
};

class DDR4_5Memory : public PhysicalMemory {
protected:
    string type;
    float price;
public:
    DDR4_5Memory();
    DDR4_5Memory(string type);
    void setType(string type);
    string getType();
    void setPrice(float price);
    float getPrice();
    void Insertion();
    void Display();
};

class LPDDR4_5Memory : public PhysicalMemory {
protected:
    string type;
    float price;
public:
    LPDDR4_5Memory();
    LPDDR4_5Memory(string type);
    void setType(string type);
    string getType();
    void setPrice(float price);
    float getPrice();
    void Insertion();
    void Display();
};

class Computer {
protected:
    PhysicalMemory* pm;
    MotherBoard* mb;
    CPU* TheCPU;
public:
    Computer();
    Computer(PhysicalMemory* pm, MotherBoard* mb, CPU* cpu);
    void setPhysicalMemory(PhysicalMemory* pm);
    void setMotherBoard(MotherBoard* mb);
    void setCPU(CPU* cpu);
    PhysicalMemory* getPhysicalMemory();
    MotherBoard* getMotherBoard();
    CPU* getCPU();
};

class PC_Computer : public Computer {
protected:
    Intel_AMD_CPU intelCPU;
    DDR4_5Memory D;
    float price;
public:
    PC_Computer();
    float getPrice();
    void Insertion();
    void Display();
};

class MAC_Computer : public Computer {
protected:
    AppleSiliconCPU appleCPU;
    LPDDR4_5Memory L;
    float price;
public:
    MAC_Computer();
    float getPrice();
    void Insertion();
    void Display();
};

class StorageDevice {
protected:
    string type;
    int capacity;
    double price;
public:
    StorageDevice();
    StorageDevice(string type, int capacity);
    void setType(string type);
    void setCapacity(int capacity);
    void setPrice(double price);
    string getType();
    int getCapacity();
    double getPrice();
    void Insertion();
    void Display();
};

class NetworkCard {
protected:
    string type;
    int speed;
    double price;
public:
    NetworkCard();
    NetworkCard(string type, int speed);
    void setType(string type);
    void setSpeed(int speed);
    void setPrice(double price);
    string getType();
    int getSpeed();
    double getPrice();
    void Insertion();
    void Display();
};

class PowerSupply {
protected:
    int wattage;
    string efficiencyRating;
    double price;
public:
    PowerSupply();
    PowerSupply(int wattage, string efficiencyRating);
    void setWattage(int wattage);
    void setEfficiencyRating(string efficiencyRating);
    void setPrice(double price);
    int getWattage();
    string getEfficiencyRating();
    double getPrice();
    void Insertion();
    void Display();
};

class Battery {
protected:
    int capacity;
public:
    Battery();
    Battery(int capacity);
    void setCapacity(int capacity);
    int getCapacity();
    void Insertion();
    void Display();
};

class Case {
protected:
    string formFactor;
    string color;
    double price;
public:
    Case();
    Case(string formFactor, string color);
    void setFormFactor(string formFactor);
    void setColor(string color);
    void setPrice(double price);
    string getFormFactor();
    string getColor();
    double getPrice();
    void Insertion();
    void Display();
};

class ComputerAssembly {
protected:
    double totalPrice;
    NetworkCard* nc;
    StorageDevice* sd;
public:
    ComputerAssembly();
    ComputerAssembly(NetworkCard* nc, StorageDevice* sd);
    void setNetworkCard(NetworkCard* nc);
    void setStorageDevice(StorageDevice* sd);
    NetworkCard* getNetworkCard();
    StorageDevice* getStorageDevice();
};

class PC : public ComputerAssembly {
protected:
    PC_Computer* pc;
    AMD_NvidiaGPU* ANgpu;
    Case* CasePC;
    PowerSupply* ps;
public:
    PC();
    PC(PC_Computer* pc, AMD_NvidiaGPU* ANgpu, Case* CasePC, PowerSupply* ps);
    void setANgpu(AMD_NvidiaGPU* ANgpu);
    void setCase(Case* CasePC);
    void setPowerSupply(PowerSupply* ps);
    AMD_NvidiaGPU* getANgpu();
    Case* getCase();
    PowerSupply* getPowerSupply();
    PC_Computer* getPC();
    void Insertion();
    void Display();
};

class MAC : public ComputerAssembly {
protected:
    MAC_Computer* mac;
    Case* CaseMAC;
    PowerSupply* ps;
public:
    MAC();
    MAC(MAC_Computer* mac, Case* CaseMAC, PowerSupply* ps);
    void setCase(Case* CaseMAC);
    void setPowerSupply(PowerSupply* ps);
    Case* getCase();
    PowerSupply* getPowerSupply();
    void Insertion();
    void Display();
};

class WindowsLaptop : public ComputerAssembly {
protected:
    PC_Computer* pc;
    AMD_NvidiaGPU* ANgpu;
    Battery* battery;
public:
    WindowsLaptop();
    WindowsLaptop(PC_Computer* pc, AMD_NvidiaGPU* ANgpu, Battery* battery);
    void setANgpu(AMD_NvidiaGPU* ANgpu);
    void setBattery(Battery* battery);
    AMD_NvidiaGPU* getANgpu();
    Battery* getBattery();
    void Insertion();
    void Display();
};

class MacBook : public ComputerAssembly {
protected:
    MAC_Computer* mac;
    Battery* battery;
public:
    MacBook();
    MacBook(MAC_Computer* mac, Battery* battery);
    void setBattery(Battery* battery);
    Battery* getBattery();
    void Insertion();
    void Display();
};

