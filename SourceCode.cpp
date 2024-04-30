#include <iostream> // Include the input-output stream library
#include <string> // Include the string library
#include "Header.h" // Include the custom header file

using namespace std; // Using the standard namespace

// ALU class implementation
ALU::ALU() {
    NoOfAdders = 0; // Initialize number of adders to 0
    NoOfSubtractor = 0; // Initialize number of subtractors to 0
    NoOfRegisters = 0; // Initialize number of registers to 0
    sizeOfRegisters = 0; // Initialize size of registers to 0
}

// ALU class constructor with parameters
ALU::ALU(int NoOfAdders, int NoOfSubtractor, int NoOfRegisters, int sizeOfRegisters) {
    this->NoOfAdders = NoOfAdders; // Initialize number of adders
    this->NoOfSubtractor = NoOfSubtractor; // Initialize number of subtractors
    this->NoOfRegisters = NoOfRegisters; // Initialize number of registers
    this->sizeOfRegisters = sizeOfRegisters; // Initialize size of registers
}

// Setter for number of adders
void ALU::setNoOfAdders(int NoOfAdders) {
    this->NoOfAdders = NoOfAdders; // Set number of adders
}

// Setter for number of subtractors
void ALU::setNoOfSubtractor(int NoOfSubtractor) {
    this->NoOfSubtractor = NoOfSubtractor; // Set number of subtractors
}

// Setter for number of registers
void ALU::setNoOfRegisters(int NoOfRegisters) {
    this->NoOfRegisters = NoOfRegisters; // Set number of registers
}

// Setter for size of registers
void ALU::setSizeOfRegisters(int sizeOfRegisters) {
    this->sizeOfRegisters = sizeOfRegisters; // Set size of registers
}

// Getter for number of adders
int ALU::getNoOfAdders() {
    return NoOfAdders; // Return number of adders
}

// Getter for number of subtractors
int ALU::getNoOfSubtractor() {
    return NoOfSubtractor; // Return number of subtractors
}

// Getter for number of registers
int ALU::getNoOfRegisters() {
    return NoOfRegisters; // Return number of registers
}

// Getter for size of registers
int ALU::getSizeOfRegisters() {
    return sizeOfRegisters; // Return size of registers
}

// Insertion function for ALU settings
void ALU::Insertion() {
    // Loop for input validation
    while (true) {
        cout << "Enter number of Adders (1 - 100): "; // Prompt for number of adders
        cin >> NoOfAdders; // Input number of adders
        if (NoOfAdders <= 0 || NoOfAdders > 100) { // Check if input is valid
            cout << "Invalid number of Adders. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }

    // Loop for input validation
    while (true) {
        cout << "Enter number of Subtractor (1 - 100): "; // Prompt for number of subtractors
        cin >> NoOfSubtractor; // Input number of subtractors
        if (NoOfSubtractor <= 0 || NoOfAdders > 100) { // Check if input is valid
            cout << "Invalid number of Subtractor. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }

    // Loop for input validation
    while (true) {
        cout << "Enter number of Registers (1 - 100): "; // Prompt for number of registers
        cin >> NoOfRegisters; // Input number of registers
        if (NoOfRegisters <= 0 || NoOfRegisters > 100) { // Check if input is valid
            cout << "Invalid number of Registers. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }

    // Loop for input validation
    while (true) {
        cout << "Enter size of Registers (8bit/16bit/32bit/64bit): "; // Prompt for size of registers
        cin >> sizeOfRegisters; // Input size of registers
        if (sizeOfRegisters != 8 && sizeOfRegisters != 16 && sizeOfRegisters != 32 && sizeOfRegisters != 64) { // Check if input is valid
            cout << "Invalid size of Registers. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }
}

// Display function for ALU settings
void ALU::Display() {
    cout << "Number of Adders: " << NoOfAdders << endl; // Display number of adders
    cout << "Number of Subtractor: " << NoOfSubtractor << endl; // Display number of subtractors
    cout << "Number of Registers: " << NoOfRegisters << endl; // Display number of registers
    cout << "Size of the Registers: " << sizeOfRegisters << " bits" << endl; // Display size of registers
}

// ControlUnit class implementation
ControlUnit::ControlUnit() {
    clock = 0; // Initialize clock speed to 0
}

// ControlUnit class constructor with parameters
ControlUnit::ControlUnit(float clock) {
    this->clock = clock; // Initialize clock speed
}

// Setter for clock speed
void ControlUnit::setClock(float clock) {
    this->clock = clock; // Set clock speed
}

// Getter for clock speed
float ControlUnit::getClock() {
    return clock; // Return clock speed
}

// Insertion function for ControlUnit settings
void ControlUnit::Insertion() {
    // Loop for input validation
    while (true) {
        cout << "Enter clock speed (1 - 5.5): "; // Prompt for clock speed
        cin >> clock; // Input clock speed
        if(clock <= 0 || clock > 5.5 ) { // Check if input is valid
            cout << "Invalid clock speed. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }
}

// Display function for ControlUnit settings
void ControlUnit::Display() {
    cout << "Clock Speed: " << clock << " GHz" << endl; // Display clock speed
}

// GraphicsCard class implementation
GraphicsCard::GraphicsCard() {
    brand = ""; // Initialize brand to empty string
    memorySize = 0; // Initialize memory size to 0
    price = 0; // Initialize price to 0
}

// GraphicsCard class constructor with parameters
GraphicsCard::GraphicsCard(string brand, int memorySize, double price) {
    this->brand = brand; // Initialize brand
    this->memorySize = memorySize; // Initialize memory size
    this->price = price; // Initialize price
}

// Setter for brand
void GraphicsCard::setBrand(string brand) {
    this->brand = brand; // Set brand
}

// Setter for memory size
void GraphicsCard::setMemorySize(int memorySize) {
    this->memorySize = memorySize; // Set memory size
}

// Setter for price
void GraphicsCard::setPrice(double price) {
    this->price = price; // Set price
}

// Getter for brand
string GraphicsCard::getBrand() {
    return brand; // Return brand
}

// Getter for memory size
int GraphicsCard::getMemorySize() {
    return memorySize; // Return memory size
}

// Getter for price
double GraphicsCard::getPrice() {
    return price; // Return price
}

// Insertion function for GraphicsCard settings
void GraphicsCard::Insertion() {
    // Loop for input validation
    while (true) {
        cout << "Memory Size of Graphics Card (2GB/4GB/6GB/8GB): "; // Prompt for memory size
        cin >> memorySize; // Input memory size

        // Check if input is valid
        if (memorySize != 2 && memorySize != 4 && memorySize != 6 && memorySize != 8) {
            cout << "Invalid Memory Size. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }

        break; // Exit loop if input is valid
    }
}

// Display function for GraphicsCard settings
void GraphicsCard::Display() {
    cout << "Memory Size of Graphics Card: " << memorySize << endl; // Display memory size
    cout << "Price of Graphics Card: " << price << "$" << endl; // Display price
}

// AMD_NvidiaGPU class implementation
AMD_NvidiaGPU::AMD_NvidiaGPU() {
    type = "AMD"; // Initialize type to "AMD"
    price = 400; // Initialize price to 400
}

// AMD_NvidiaGPU class constructor with parameter
AMD_NvidiaGPU::AMD_NvidiaGPU(string type) {
    this->type = type; // Initialize type
    this->price = 400; // Initialize price
}

// Setter for type
void AMD_NvidiaGPU::setType(string type) {
    this->type = type; // Set type
}

// Getter for type
string AMD_NvidiaGPU::getType() {
    return type; // Return type
}

// AppleGPU class implementation
AppleGPU::AppleGPU() {
    type = "AppleGPU"; // Initialize type to "AppleGPU"
    price = 500; // Initialize price to 500
}

// AppleGPU class constructor with parameter
AppleGPU::AppleGPU(string type) {
    this->type = type; // Initialize type
    price = price; // Initialize price
}

// Setter for type
void AppleGPU::setType(string type) {
    this->type = type; // Set type
}

// Getter for type
string AppleGPU::getType() {
    return type; // Return type
}

// CPU class implementation
CPU::CPU() {
    this->alu = ALU(); // Initialize ALU
    this->cu = ControlUnit(); // Initialize ControlUnit
}

// CPU class constructor with parameters
CPU::CPU(ALU alu, ControlUnit cu) {
    this->alu = alu; // Initialize ALU
    this->cu = cu; // Initialize ControlUnit
}

// Setter for ALU
void CPU::setALU(ALU alu) {
    this->alu = alu; // Set ALU
}

// Setter for ControlUnit
void CPU::setCU(ControlUnit cu) {
    this->cu = cu; // Set ControlUnit
}

// Getter for ALU
ALU CPU::getALU() {
    return alu; // Return ALU
}

// Getter for ControlUnit
ControlUnit CPU::getCU() {
    return cu; // Return ControlUnit
}

// Insertion function for CPU settings
void CPU::Insertion() {
    alu.Insertion(); // Call Insertion function for ALU
    cout << endl; // New line
    cu.Insertion(); // Call Insertion function for ControlUnit
}


// Intel_AMD_CPU class implementation
Intel_AMD_CPU::Intel_AMD_CPU() {
    architecture = "x86"; // Initialize architecture to "x86"
    string AMD_or_Intel = ""; // Initialize AMD_or_Intel to empty string
    price = 300; // Initialize price to 300
}

// Intel_AMD_CPU class constructor with parameters
Intel_AMD_CPU::Intel_AMD_CPU(string architecture, string AMD_or_Intel) {
    this->architecture = architecture; // Initialize architecture
    this->AMD_or_Intel = AMD_or_Intel; // Initialize AMD_or_Intel
    price = 300; // Initialize price
}

// Setter for architecture
void Intel_AMD_CPU::setArchitecture(string architecture) {
    this->architecture = architecture; // Set architecture
}

// Getter for architecture
string Intel_AMD_CPU::getArchitecture() {
    return architecture; // Return architecture
}

// Setter for price
void Intel_AMD_CPU::setPrice(float price) {
    this->price = price; // Set price
}

// Getter for price
float Intel_AMD_CPU::getPrice() {
    return price; // Return price
}

// Insertion function for Intel_AMD_CPU settings
void Intel_AMD_CPU::Insertion() {
    alu.Insertion(); // Call Insertion function for ALU
    cout << endl; // New line
    cu.Insertion(); // Call Insertion function for ControlUnit

    // Loop for input validation
    while (true) {
        cout << "Enter type of CPU (AMD/Intel): "; // Prompt for CPU type
        cin >> AMD_or_Intel; // Input CPU type
        if (AMD_or_Intel != "AMD" && AMD_or_Intel != "Intel") { // Check if input is valid
            cout << "Invalid type of CPU. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }
}

// Display function for Intel_AMD_CPU settings
void Intel_AMD_CPU::Display() {
    cout << "Architecture of CPU: " << architecture << endl; // Display architecture
    cout << "CPU type: " << AMD_or_Intel << endl; // Display CPU type
    alu.Display(); // Call Display function for ALU
    cout << endl; // New line
    cu.Display(); // Call Display function for ControlUnit
    cout << "Price of Intel CPU: " << price << "$" << endl; // Display price
    cout << endl; // New line
}
// AppleSiliconCPU class implementation
AppleSiliconCPU::AppleSiliconCPU() {
    architecture = "ARM64"; // Initialize architecture to "ARM64"
    gpu = new AppleGPU(); // Initialize GPU with a new instance of AppleGPU
    price = 400; // Initialize price to 400
}

// AppleSiliconCPU class constructor with parameters
AppleSiliconCPU::AppleSiliconCPU(string architecture, AppleGPU* gpu) {
    this->architecture = architecture; // Initialize architecture
    this->gpu = gpu; // Initialize GPU
    price = 400; // Initialize price
}

// Setter for architecture
void AppleSiliconCPU::setArchitecture(string architecture) {
    this->architecture = architecture; // Set architecture
}

// Setter for GPU
void AppleSiliconCPU::setGPU(AppleGPU* gpu) {
    this->gpu = gpu; // Set GPU
}

// Getter for architecture
string AppleSiliconCPU::getArchitecture() {
    return architecture; // Return architecture
}

// Getter for GPU
AppleGPU* AppleSiliconCPU::getGPU() {
    return gpu; // Return GPU
}

// Setter for price
void AppleSiliconCPU::setPrice(float price) {
    this->price = price; // Set price
}

// Getter for price
float AppleSiliconCPU::getPrice() {
    return price; // Return price
}

// Insertion function for AppleSiliconCPU settings
void AppleSiliconCPU::Insertion() {
    alu.Insertion(); // Call Insertion function for ALU
    cout << endl; // New line
    cu.Insertion(); // Call Insertion function for ControlUnit
    gpu->Insertion(); // Call Insertion function for GPU
}

// Display function for AppleSiliconCPU settings
void AppleSiliconCPU::Display() {
    cout << "Architecture of CPU: " << architecture << endl; // Display architecture
    cout << "Type of CPU: Apple Silicon" << endl; // Display CPU type
    alu.Display(); // Call Display function for ALU
    cout << endl; // New line
    cu.Display(); // Call Display function for ControlUnit
    cout << endl; // New line
    gpu->Display(); // Call Display function for GPU
    cout << endl; // New line
    cout << "Price of Apple CPU: " << price << "$" << endl; // Display price
    cout << endl; // New line
}

// MainMemory class implementation
MainMemory::MainMemory() {
    capacity = 0; // Initialize capacity to 0
    technologyType = ""; // Initialize technologyType to empty string
}

// MainMemory class constructor with parameters
MainMemory::MainMemory(int capacity, string technologyType) {
    this->capacity = capacity; // Initialize capacity
    this->technologyType = technologyType; // Initialize technologyType
}

// Setter for capacity
void MainMemory::setCapacity(int capacity) {
    this->capacity = capacity; // Set capacity
}

// Setter for technologyType
void MainMemory::setTechnologyType(string technologyType) {
    this->technologyType = technologyType; // Set technologyType
}

// Getter for capacity
int MainMemory::getCapacity() {
    return capacity; // Return capacity
}

// Getter for technologyType
string MainMemory::getTechnologyType() {
    return technologyType; // Return technologyType
}

// Insertion function for MainMemory settings
void MainMemory::Insertion() {
    // Loop for input validation of capacity
    while (true) {
        cout << "Enter Capacity of Main Memory (4-128GB): "; // Prompt for capacity
        cin >> capacity; // Input capacity
        if (capacity < 4 || capacity > 128) { // Check if input is valid
            cout << "Invalid Capacity. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }

    // Loop for input validation of technologyType
    while (true) {
        cout << "Enter Technology Type (Possible values: Semiconductor, Silicon): "; // Prompt for technologyType
        cin >> technologyType; // Input technologyType
        // Check if input is valid
        if (technologyType == "" || (technologyType != "Semiconductor" && technologyType != "Silicon" && technologyType != "semiconductor" && technologyType != "silicon")) {
            cout << "Invalid Technology Type. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        cout << endl; // New line
        break; // Exit loop if input is valid
    }
}

// Display function for MainMemory settings
void MainMemory::Display() {
    cout << "Capacity of Main Memory: " << capacity << "GB" << endl; // Display capacity
    cout << "Technology Type: " << technologyType << endl; // Display technologyType
}



// Port class implementation
Port::Port() {
    type = ""; // Initialize type to empty string
    baud_rate = 0; // Initialize baud_rate to 0
}

// Port class constructor with parameters
Port::Port(string type, float baud_rate) {
    this->type = type; // Initialize type
    this->baud_rate = baud_rate; // Initialize baud_rate
}

// Setter for type
void Port::setType(string type) {
    this->type = type; // Set type
}

// Setter for baud_rate
void Port::setBaudRate(float baud_rate) {
    this->baud_rate = baud_rate; // Set baud_rate
}

// Getter for type
string Port::getType() {
    return type; // Return type
}

// Getter for baud_rate
float Port::getBaudRate() {
    return baud_rate; // Return baud_rate
}

// Insertion function for Port settings
void Port::Insertion() {
    while (true) {
        cout << "Enter Type of Port (Possible values: VGI, I/O, USB, HDMI): "; // Prompt for port type
        cin >> type; // Input port type
        if (type == "" || (type != "VGI" && type != "I/O" && type != "USB" && type != "HDMI")) { // Check if input is valid
            cout << "Invalid Type. Enter again: " << endl; // Display error message
        } else {
            break; // Exit loop if input is valid
        }
    }

    if (type == "HDMI") {
        while (true) {
            cout << "Enter Baud Rate (3.4-48 Gbps): "; // Prompt for baud rate
            cin >> baud_rate; // Input baud rate
            if (baud_rate <= 0) { // Check if input is valid
                cout << "Invalid Baud Rate. Enter again: " << endl; // Display error message
            } else {
                break; // Exit loop if input is valid
            }
        }
    } else if (type == "I/O") {
        while (true) {
            cout << "Enter Baud Rate (300-115200 bps): "; // Prompt for baud rate
            cin >> baud_rate; // Input baud rate
            if (baud_rate < 300 || baud_rate > 115200) { // Check if input is valid
                cout << "Invalid Baud Rate. Enter again: " << endl; // Display error message
            } else {
                break; // Exit loop if input is valid
            }
        }
    } else if (type == "USB") {
        while (true) {
            cout << "Enter Baud Rate (480-5000 Mbps): "; // Prompt for baud rate
            cin >> baud_rate; // Input baud rate
            if (baud_rate < 480 || baud_rate > 5000) { // Check if input is valid
                cout << "Invalid Baud Rate. Enter again: " << endl; // Display error message
            } else {
                break; // Exit loop if input is valid
            }
        }
    } else if (type == "VGI") {
        while (true) {
            cout << "Enter Baud Rate (1.62-2.7 Gbps): "; // Prompt for baud rate
            cin >> baud_rate; // Input baud rate
            if (baud_rate < 1.62 || baud_rate > 2.7) { // Check if input is valid
                cout << "Invalid Baud Rate. Enter again: " << endl; // Display error message
            } else {
                break; // Exit loop if input is valid
            }
        }
    }
}

// Display function for Port settings
void Port::Display() {
    cout << "Type of Port: " << type << endl; // Display port type
    cout << "Baud Rate: " << baud_rate << " Gbps" << endl; // Display baud rate
}


// MotherBoard class implementation
MotherBoard::MotherBoard() {
    mm = MainMemory(); // Initialize mm with a default-constructed MainMemory object
    ports = new Port[4]; // Allocate memory for 4 Port objects
    price = 150; // Initialize price to 150
}

// MotherBoard class constructor with parameters
MotherBoard::MotherBoard(MainMemory mm, int size) {
    this->mm = mm; // Initialize mm
    this->ports = new Port[size]; // Allocate memory for ports based on size
    price = 150; // Initialize price to 150
}

// Setter for MainMemory
void MotherBoard::setMainMemory(MainMemory mm) {
    this->mm = mm; // Set mm
}

// Getter for MainMemory
MainMemory MotherBoard::getMainMemory() {
    return mm; // Return mm
}

// Getter for price
float MotherBoard::getPrice() {
    return price; // Return price
}

// Insertion function for MotherBoard settings
void MotherBoard::Insertion() {
    mm.Insertion(); // Call Insertion function for MainMemory
    cout << endl; // New line
    for (int i = 0; i < 4; i++) {
        ports[i].Insertion(); // Call Insertion function for each port
        cout << endl; // New line
    }
}

// Display function for MotherBoard settings
void MotherBoard::Display() {
    mm.Display(); // Call Display function for MainMemory
    cout << endl; // New line
    for (int i = 0; i < 4; i++) {
        ports[i].Display(); // Call Display function for each port
        cout << endl; // New line
    }
    cout << "Price of MotherBoard: " << price << "$" << endl; // Display price
    cout << endl; // New line
}


// PhysicalMemory class implementation
PhysicalMemory::PhysicalMemory() {
    capacity = 0; // Initialize capacity to 0
}

// PhysicalMemory class constructor with parameters
PhysicalMemory::PhysicalMemory(int capacity) {
    this->capacity = capacity; // Initialize capacity
}

// Setter for capacity
void PhysicalMemory::setCapacity(int capacity) {
    this->capacity = capacity; // Set capacity
}

// Getter for capacity
int PhysicalMemory::getCapacity() {
    return capacity; // Return capacity
}

// Display function for PhysicalMemory settings
void PhysicalMemory::Display() {
    cout << "Capacity of Physical Memory: " << capacity << "GB" << endl; // Display capacity
}


// DDR4_5Memory class implementation
DDR4_5Memory::DDR4_5Memory() {
    type = "DDR4_5"; // Initialize type to "DDR4_5"
    price = 200; // Initialize price to 200
}

// DDR4_5Memory class constructor with parameters
DDR4_5Memory::DDR4_5Memory(string type) {
    this->type = type; // Initialize type
    price = 200; // Initialize price to 200
}

// Setter for type
void DDR4_5Memory::setType(string type) {
    this->type = type; // Set type
}

// Getter for type
string DDR4_5Memory::getType() {
    return type; // Return type
}

// Setter for price
void DDR4_5Memory::setPrice(float price) {
    this->price = price; // Set price
}

// Getter for price
float DDR4_5Memory::getPrice() {
    return price; // Return price
}

// Insertion function for DDR4_5Memory settings
void DDR4_5Memory::Insertion() {
    // Loop for input validation of capacity
    while (true) {
        cout << "Enter Capacity of DDR4/5 Physical Memory (2GB/4GB/8GB/16GB/32GB): "; // Prompt for capacity
        cin >> capacity; // Input capacity
        if (capacity != 2 && capacity != 4 && capacity != 8 && capacity != 16 && capacity != 32) { // Check if input is valid
            cout << "Invalid Capacity. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }
}

// Display function for DDR4_5Memory settings
void DDR4_5Memory::Display() {
    cout << "Type of Physical Memory: " << type << endl; // Display type
    cout << "Capacity of DDR4_5 Physical Memory: " << capacity << "GB" << endl; // Display capacity
    cout << "Price of DDR4/5 Physical Memory: " << price << "$" << endl; // Display price
    cout << endl; // New line
}

// LPDDR4_5Memory class implementation
LPDDR4_5Memory::LPDDR4_5Memory() {
    type = "LPDDR4"; // Initialize type to "LPDDR4"
    price = 300; // Initialize price to 300
}

// LPDDR4_5Memory class constructor with parameters
LPDDR4_5Memory::LPDDR4_5Memory(string type) {
    this->type = type; // Initialize type
    price = 300; // Initialize price to 300
}

// Setter for type
void LPDDR4_5Memory::setType(string type) {
    this->type = type; // Set type
}

// Getter for type
string LPDDR4_5Memory::getType() {
    return type; // Return type
}

// Setter for price
void LPDDR4_5Memory::setPrice(float price) {
    this->price = price; // Set price
}

// Getter for price
float LPDDR4_5Memory::getPrice() {
    return price; // Return price
}

// Insertion function for LPDDR4_5Memory settings
void LPDDR4_5Memory::Insertion() {
    // Loop for input validation of capacity
    while (true) {
        cout << "Enter Capacity of LPDDR4_5 Physical Memory (2GB/4GB/8GB/16GB/32GB): "; // Prompt for capacity
        cin >> capacity; // Input capacity
        if (capacity != 2 && capacity != 4 && capacity != 8 && capacity != 16 && capacity != 32) { // Check if input is valid
            cout << "Invalid Capacity. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }
}

// Display function for LPDDR4_5Memory settings
void LPDDR4_5Memory::Display() {
    cout << "Type of Physical Memory: " << type << endl; // Display type
    cout << "Capacity of LPDDR4_5 Physical Memory: " << capacity << "GB" << endl; // Display capacity
    cout << "Price of LPDDR4/5 Memory: " << price << "$" << endl; // Display price
    cout << endl; // New line
}

// Computer class implementation
Computer::Computer() {
    pm = new PhysicalMemory(); // Initialize pm with a default-constructed PhysicalMemory object
    mb = new MotherBoard(); // Initialize mb with a default-constructed MotherBoard object
}

// Computer class constructor with parameters
Computer::Computer(PhysicalMemory* pm, MotherBoard* mb, CPU* cpu) {
    this->pm = pm; // Initialize pm
    this->mb = mb; // Initialize mb
}

// Setter for PhysicalMemory
void Computer::setPhysicalMemory(PhysicalMemory* pm) {
    this->pm = pm; // Set pm
}

// Setter for MotherBoard
void Computer::setMotherBoard(MotherBoard* mb) {
    this->mb = mb; // Set mb
}

// Setter for CPU
void Computer::setCPU(CPU* cpu) {
    this->TheCPU = cpu; // Set TheCPU
}

// Getter for PhysicalMemory
PhysicalMemory* Computer::getPhysicalMemory() {
    return pm; // Return pm
}

// Getter for MotherBoard
MotherBoard* Computer::getMotherBoard() {
    return mb; // Return mb
}

// Getter for CPU
CPU* Computer::getCPU() {
    return TheCPU; // Return TheCPU
}

// PC_Computer class implementation
PC_Computer::PC_Computer() {
    TheCPU = &intelCPU; // Set TheCPU to point to intelCPU
    pm = &D; // Set pm to point to D
    price = intelCPU.getPrice() + D.getPrice() + mb->getPrice(); // Calculate price
}

// Getter for price
float PC_Computer::getPrice() {
    price = intelCPU.getPrice() + D.getPrice(); // Calculate price
    return price; // Return price
}

// Insertion function for PC_Computer settings
void PC_Computer::Insertion() {
    intelCPU.Insertion(); // Call Insertion function for Intel_AMD_CPU
    cout << endl; // New line
    D.Insertion(); // Call Insertion function for DDR4_5Memory
    cout << endl; // New line
    mb->Insertion(); // Call Insertion function for MotherBoard
    cout << endl; // New line
}

// Display function for PC_Computer settings
void PC_Computer::Display() {
    D.Display(); // Call Display function for DDR4_5Memory
    cout << endl; // New line
    intelCPU.Display(); // Call Display function for Intel_AMD_CPU
    cout << endl; // New line
    mb->Display(); // Call Display function for MotherBoard
    cout << endl; // New line
    cout << "The price of the PC Computer: " << price << "$" << endl; // Display price
    cout << endl; // New line
}

// MAC_Computer class implementation
MAC_Computer::MAC_Computer() {
    TheCPU = &appleCPU; // Set TheCPU to point to appleCPU
    pm = &L; // Set pm to point to L
    price = appleCPU.getPrice() + L.getPrice() + mb->getPrice(); // Calculate price
}

// Getter for price
float MAC_Computer::getPrice() {
    price = appleCPU.getPrice() + L.getPrice(); // Calculate price
    return price; // Return price
}

// Insertion function for MAC_Computer settings
void MAC_Computer::Insertion() {
    appleCPU.Insertion(); // Call Insertion function for AppleSiliconCPU
    cout << endl; // New line
    L.Insertion(); // Call Insertion function for LPDDR4_5Memory
    cout << endl; // New line
    mb->Insertion(); // Call Insertion function for MotherBoard
    cout << endl; // New line
}

// Display function for MAC_Computer settings
void MAC_Computer::Display() {
    L.Display(); // Call Display function for LPDDR4_5Memory
    cout << endl; // New line
    appleCPU.Display(); // Call Display function for AppleSiliconCPU
    cout << endl; // New line
    mb->Display(); // Call Display function for MotherBoard
    cout << endl; // New line
    cout << "The price of the MAC Computer: " << price << "$" << endl; // Display price
    cout << endl; // New line
}

// StorageDevice class implementation
StorageDevice::StorageDevice() {
    type = ""; // Initialize type to empty string
    capacity = 0; // Initialize capacity to 0
    price = 200; // Initialize price to 200
}

// StorageDevice class constructor with parameters
StorageDevice::StorageDevice(string type, int capacity) {
    this->type = type; // Initialize type
    this->capacity = capacity; // Initialize capacity
    price = 200; // Initialize price to 200
}

// Setter for type
void StorageDevice::setType(string type) {
    this->type = type; // Set type
}

// Setter for capacity
void StorageDevice::setCapacity(int capacity) {
    this->capacity = capacity; // Set capacity
}

// Setter for price
void StorageDevice::setPrice(double price) {
    this->price = price; // Set price
}

// Getter for type
string StorageDevice::getType() {
    return type; // Return type
}

// Getter for capacity
int StorageDevice::getCapacity() {
    return capacity; // Return capacity
}

// Getter for price
double StorageDevice::getPrice() {
    return price; // Return price
}

// Insertion function for StorageDevice settings
void StorageDevice::Insertion() {
    // Loop for input validation of type
    while (true) {
        cout << "Enter Type of Storage Device (SSD/HDD): "; // Prompt for type
        cin >> type; // Input type
        if (type == "" || (type != "SSD" && type != "HDD")) { // Check if input is valid
            cout << "Invalid Type. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }
    
    // Loop for input validation of capacity
    while (true) {
        cout << "Enter Capacity of " << type << " (100GB/250GB/500GB/1000GB): "; // Prompt for capacity
        cin >> capacity; // Input capacity
        if (capacity != 100 && capacity != 250 && capacity != 500 && capacity != 1000) { // Check if input is valid
            cout << "Invalid Capacity. Enter again: " << endl; // Display error message
            continue; // Continue loop for re-entry
        }
        break; // Exit loop if input is valid
    }
}

// Display function for StorageDevice settings
void StorageDevice::Display() {
    cout << "Type of Storage Device: " << type << endl; // Display type
    cout << "Capacity of " << type << ": " << capacity << "GB" << endl; // Display capacity
    cout << "Price of " << type << ": " << price << "$" << endl; // Display price
}




NetworkCard::
NetworkCard() {
	type = "";
	speed = 0;
	price = 30;
	//	Price::StatPrice += price;
}
NetworkCard::
NetworkCard(string type, int speed) {
	this->type = type;
	this->speed = speed;
	this->price = 30;
	//Price::StatPrice += price;
}
void NetworkCard::
setType(string type) {
	this->type = type;
}
void NetworkCard::
setSpeed(int speed) {
	this->speed = speed;
}
void NetworkCard::
setPrice(double price) {
	this->price = price;
}
string NetworkCard::
getType() {
	return type;
}
int NetworkCard::
getSpeed() {
	return speed;
}
double NetworkCard::
getPrice() {
	return price;
}

//Insertion function

void NetworkCard::
Insertion() {


	while (true) {
		cout << "Enter Type of Network Card (Wifi/Ethernet): ";
		cin >> type;
		if (type == "" || (type != "Wifi" && type != "wifi" && type != "Ethernet" && type != "ethernet")) {
			cout << "Invalid Type. Enter again: " << endl;
			//cin >> type;
			continue;
		}
		break;
	}

	cout << "Enter Speed of Network Card (1Mbp-1000Mbps): ";
	cin >> speed;


	while (speed < 1 || speed > 1000) {
		cout << "Invalid Speed. Enter again: " << endl;
		cin >> speed;
	}


}

//Display function

void NetworkCard::
Display() {
	cout << "Type of Network Card: " << type << endl;
	cout << "Speed of Network Card: " << speed << "Mbps" << endl;
	cout << "Price of Network Card: " << price << "$" << endl;
}

PowerSupply::
PowerSupply() {
	wattage = 0;
	efficiencyRating = "";
	price = 500;
	//Price::StatPrice += price;
}
PowerSupply::
PowerSupply(int wattage, string efficiencyRating) {
	this->wattage = wattage;
	this->efficiencyRating = efficiencyRating;
	this->price = 500;
	//Price::StatPrice += price;
}
void PowerSupply::setWattage(int wattage) {
	this->wattage = wattage;
}
void PowerSupply::setEfficiencyRating(string efficiencyRating) {
	this->efficiencyRating = efficiencyRating;
}
void PowerSupply::setPrice(double price) {
	this->price = price;
}
int PowerSupply::getWattage() {
	return wattage;
}
string PowerSupply::getEfficiencyRating() {
	return efficiencyRating;
}
double PowerSupply::getPrice() {
	return price;
}

//Insertion function

void PowerSupply::Insertion() {


	while (true) {
		cout << "Enter Wattage of Power Supply(300 watts/ 500 watts/ 750 watts/ 1000 watts): ";
		cin >> wattage;

		if (wattage != 300 && wattage != 500 && wattage != 750 && wattage != 1000) {
			cout << "Invalid Wattage. Enter again: " << endl;
			continue;
		}
		break;
	}


	while (true) {

		cin.ignore();
		cout << "Enter Efficiency Rating of Power Supply (80 Plus Bronze/ 80 Plus Gold): ";
		
		getline(cin, efficiencyRating);

		if (efficiencyRating == "" || (efficiencyRating != "80 Plus Bronze" && efficiencyRating != "80 Plus Gold" && efficiencyRating != "80 plus gold" && efficiencyRating != "80 plus bronze" && efficiencyRating != "80 Plus gold" && efficiencyRating != "80 Plus bronze" && efficiencyRating != "80 plus Gold" && efficiencyRating != "80 plus Bronze")) {
			cout << "Invalid Efficiency Rating. Enter again: " << endl;
			continue;
		}
		break;
	}

}

//Display function

void PowerSupply::Display() {
	cout << "Wattage of Power Supply: " << wattage << "W" << endl;
	cout << "Efficiency Rating of Power Supply: " << efficiencyRating << endl;
	cout << "Price of Power Supply: " << price << "$" << endl;
}

Battery::Battery() {
	capacity = 0;
}
Battery::Battery(int capacity) {
	this->capacity = capacity;
}
void Battery::setCapacity(int capacity) {
	this->capacity = capacity;
}
int Battery::getCapacity() {
	return capacity;
}

//Insertion function

void Battery::Insertion() {


	while (true) {
		cout << "Enter Capacity of Battery (3000mAh - 10000mAh): ";
		cin >> capacity;
		if (capacity < 3000 || capacity > 10000) {
			cout << "Invalid Capacity. Enter again: " << endl;
			continue;
		}
		break;
	}
}

//Display function

void Battery::Display() {
	cout << "Capacity of Battery: " << capacity << "mAh" << endl;
}

Case:: Case() {
	formFactor = "";
	color = "";
	price = 100;
	//Price::StatPrice += price;
}
Case:: Case(string formFactor, string color) {
	this->formFactor = formFactor;
	this->color = color;
	this->price = 100;
	//Price::StatPrice += price;
}
void Case::setFormFactor(string formFactor) {
	this->formFactor = formFactor;
}
void Case::setColor(string color) {
	this->color = color;
}
void Case::setPrice(double price) {
	this->price = price;
}
string Case::getFormFactor() {
	return formFactor;
}
string Case::getColor() {
	return color;
}
double Case::getPrice() {
	return price;
}

void Case::Insertion() {


	while (true) {
		cout << "Enter Form Factor of Case (ATX/Micro ATX): ";
		getline(cin, formFactor);
		if (formFactor == "" || (formFactor != "ATX" && formFactor != "Micro ATX")) {
			cout << "Invalid Form Factor. Enter again: " << endl;
			//getline(cin formFactor);
			continue;
		}
		break;
	}


	while (true) {
		cout << "Enter Color of Case (Red/Blue/Green/Black/Grey/Silver/Purple): ";
		cin >> color;
		if (color == "" || (color != "Red" && color != "Blue" && color != "Green" && color != "Black" && color != "Grey" && color != "Silver" && color != "Purple")) {

			if (color == "Pink") {
				cout << "Tunay pink pehna hai iss liye tu gay hai." << endl;
			}
			cout << "Invalid Color. Enter again: " << endl;
			//cin >> color;
			continue;
		}
		break;
	}

}

//Display function

void Case::Display() {
	cout << "Form Factor of Case: " << formFactor << endl;
	cout << "Color of Case: " << color << endl;
	cout << "Price of Case: " << price << "$" << endl;
}


ComputerAssembly::ComputerAssembly() {



	nc = new NetworkCard();
	sd = new StorageDevice();
}

ComputerAssembly::ComputerAssembly(NetworkCard* nc, StorageDevice* sd) {


	this->nc = nc;
	this->sd = sd;
}

void ComputerAssembly::setNetworkCard(NetworkCard* nc) {
	this->nc = nc;
}

void ComputerAssembly::setStorageDevice(StorageDevice* sd) {
	this->sd = sd;
}


NetworkCard* ComputerAssembly::getNetworkCard() {
	return nc;
}

StorageDevice* ComputerAssembly::getStorageDevice() {
	return sd;
}

PC:: PC() {


	this->pc = new PC_Computer();
	this->ANgpu = new AMD_NvidiaGPU();
	this->CasePC = new Case();
	this->ps = new PowerSupply();
	this->totalPrice = pc->getPrice() + ANgpu->getPrice() + nc->getPrice() + sd->getPrice();

}
PC::PC(PC_Computer* pc, AMD_NvidiaGPU* ANgpu, Case* CasePC, PowerSupply* ps) {

	this->pc = pc;
	this->ANgpu = ANgpu;
	this->CasePC = CasePC;
	this->ps = ps;
	this->totalPrice = pc->getPrice() + ANgpu->getPrice() + nc->getPrice() + sd->getPrice() + CasePC->getPrice() + ps->getPrice();

}



void PC::setANgpu(AMD_NvidiaGPU* ANgpu) {
	this->ANgpu = ANgpu;
}

void PC::setCase(Case* CasePC) {
	this->CasePC = CasePC;
}

void PC::setPowerSupply(PowerSupply* ps) {
	this->ps = ps;
}

AMD_NvidiaGPU* PC::getANgpu() {
	return ANgpu;
}

Case* PC::getCase() {
	return CasePC;
}

PowerSupply* PC::getPowerSupply() {
	return ps;
}

PC_Computer* PC::getPC() {
	return pc;
}

//Insertion function

void PC::Insertion() {


	//PC_Computer insertion
	pc->Insertion();

	//GraphicsCard insertion
	ANgpu->Insertion();
	cout << endl;

	//NetworkCard insertion
	nc->Insertion();
	cout << endl;

	//StorageDevice insertion
	sd->Insertion();

	//PowerSupply insertion
	ps->Insertion();
	cout << endl;

	//Case insertion
	CasePC->Insertion();
	cout << endl;
}

//Display function

void PC::Display() {

	cout << "=======================================================================================================" << endl;
	cout << "*" << endl;
	cout << "=======================================================================================================" << endl;
	cout << "                                            Hurrah!!!! Your PC is ready." << endl;
	cout << "\n\nHere are the Specifications of your PC: \n\n";


	pc->Display();
	cout << endl;
	ANgpu->Display();
	cout << endl;
	CasePC->Display();
	cout << endl;
	ps->Display();
	cout << endl;
	nc->Display();
	cout << endl;
	sd->Display();

	cout << endl;
	cout << "Total Price: " << totalPrice << "$" << endl;
}

MAC:: MAC() {

	this->mac = new MAC_Computer();
	this->CaseMAC = new Case();
	this->ps = new PowerSupply();
	this->totalPrice = mac->getPrice() + nc->getPrice() + sd->getPrice() + CaseMAC->getPrice();

}
MAC::MAC(MAC_Computer* mac, Case* CaseMAC, PowerSupply* ps) {

	this->mac = mac;
	this->CaseMAC = CaseMAC;
	this->ps = ps;
	this->totalPrice = mac->getPrice() + nc->getPrice() + sd->getPrice() + CaseMAC->getPrice() + ps->getPrice();


}



void MAC::setCase(Case* CaseMAC) {
	this->CaseMAC = CaseMAC;
}

void MAC::setPowerSupply(PowerSupply* ps) {
	this->ps = ps;
}

Case* MAC::getCase() {
	return CaseMAC;
}

PowerSupply* MAC::getPowerSupply() {
	return ps;
}

//Insertion function

void MAC::Insertion() {


	//MAC_Computer insertion
	mac->Insertion();

	//NetworkCard insertion
	nc->Insertion();
	cout << endl;

	//StorageDevice insertion
	sd->Insertion();
	cout << endl;

	//PowerSupply insertion
	ps->Insertion();
	cout << endl;

	//Case insertion

	CaseMAC->Insertion();
	cout << endl;


}


//Display function

void MAC::Display() {


	cout << "=======================================================================================================" << endl;
	cout << "*" << endl;
	cout << "=======================================================================================================" << endl;
	cout << "                                            Hurrah!!!! Your MAC is ready." << endl;
	cout << "\n\nHere are the Specifications of your MAC: \n\n";

	mac->Display();
	cout << endl;
	CaseMAC->Display();
	cout << endl;
	ps->Display();
	cout << endl;
	nc->Display();
	cout << endl;
	sd->Display();

	cout << endl;
	cout << "Total Price: " << totalPrice << "$" << endl;
}

WindowsLaptop:: WindowsLaptop() {


	this->pc = new PC_Computer();
	this->ANgpu = new AMD_NvidiaGPU();
	this->battery = new Battery();
	totalPrice = pc->getPrice() + ANgpu->getPrice() + nc->getPrice() + sd->getPrice();

}

WindowsLaptop::WindowsLaptop(PC_Computer* pc, AMD_NvidiaGPU* ANgpu, Battery* battery) {


	this->pc = pc;
	this->ANgpu = ANgpu;
	this->battery = battery;

	totalPrice = pc->getPrice() + ANgpu->getPrice() + nc->getPrice() + sd->getPrice();

}


void WindowsLaptop::setANgpu(AMD_NvidiaGPU* ANgpu) {
	this->ANgpu = ANgpu;
}

void WindowsLaptop::setBattery(Battery* battery) {
	this->battery = battery;
}

AMD_NvidiaGPU* WindowsLaptop::getANgpu() {
	return ANgpu;
}

Battery* WindowsLaptop::getBattery() {
	return battery;
}

//Insertion function

void WindowsLaptop::Insertion() {


	//PC_Computer insertion
	pc->Insertion();

	//GraphicsCard insertion
	ANgpu->Insertion();
	cout << endl;

	//NetworkCard insertion
	nc->Insertion();
	cout << endl;

	//StorageDevice insertion
	sd->Insertion();
	cout << endl;
	//PowerSupply insertion
	battery->Insertion();
	cout << endl;
}

//Display function

void WindowsLaptop::Display() {


	cout << "=======================================================================================================" << endl;
	cout << "*" << endl;
	cout << "=======================================================================================================" << endl;
	cout << "                                            Hurrah!!!! Your Laptop is ready." << endl;
	cout << "\n\nHere are the Specifications of your Laptop: \n\n";


	pc->Display();
	cout << endl;
	ANgpu->Display();
	cout << endl;
	cout << endl;
	battery->Display();
	cout << endl;
	nc->Display();
	cout << endl;
	sd->Display();

	cout << endl;
	cout << "Total Price: " << totalPrice << "$" << endl;


}

MacBook:: MacBook() {


	this->mac = new MAC_Computer();
	this->battery = new Battery();
	totalPrice = mac->getPrice() + nc->getPrice() + sd->getPrice();

}

MacBook::MacBook(MAC_Computer* mac, Battery* battery) {
	this->mac = mac;
	this->battery = battery;
	totalPrice = mac->getPrice() + nc->getPrice() + sd->getPrice();
}

void MacBook::setBattery(Battery* battery) {
	this->battery = battery;
}



Battery* MacBook::getBattery() {
	return battery;
}



void MacBook::Insertion() {

	//Insertion function


	//MAC_Computer insertion
	mac->Insertion();

	//NetworkCard insertion
	nc->Insertion();
	cout << endl;

	//StorageDevice insertion
	sd->Insertion();
	cout << endl;

	//Battery insertion
	battery->Insertion();
	cout << endl;

}

//Display function

void MacBook::Display() {

	cout << "=======================================================================================================" << endl;
	cout << "*" << endl;
	cout << "=======================================================================================================" << endl;
	cout << "                                            Hurrah!!!! Your MacBook is ready." << endl;
	cout << "\n\nHere are the Specifications of your MacBook: \n\n";

	mac->Display();
	cout << endl;
	nc->Display();
	cout << endl;
	sd->Display();
	cout << endl;
	battery->Display();
	cout << endl;
	cout << "Total Price: " << totalPrice << "$" << endl;
}