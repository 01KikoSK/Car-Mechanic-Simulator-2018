#include <CheatEngine.h>

// Declare the addresses of the values you want to change
DWORD moneyAddress = 0x0;
DWORD expAddress = 0x0;

// Function to initialize the trainer
void init() {
    // Scan for the values you want to change
    moneyAddress = CE->scanFor("Local player money", new MemorySearchParameters());
    expAddress = CE->scanFor("Local player exp", new MemorySearchParameters());
}

// Function to increase money
void increaseMoney() {
    if (moneyAddress != 0x0) {
        DWORD oldMoney = CE->readDword(moneyAddress);
        CE->writeDword(moneyAddress, oldMoney + 1000);
    }
}

// Function to increase EXP
void increaseExp() {
    if (expAddress != 0x0) {
        DWORD oldExp = CE->readDword(expAddress);
        CE->writeDword(expAddress, oldExp + 100);
    }
}

// Function to unlock all upgrades
void unlockAllUpgrades() {
    // You'll need to add your own code here
}

// Function to set parts quality
void setPartsQuality() {
    // You'll need to add your own code here
}

// Function to reveal condition of all parts
void revealConditionOfAllParts() {
    // You'll need to add your own code here
}

// Function to make parts always unmountable
void makePartsAlwaysUnmountable() {
    // You'll need to add your own code here
}

// Function to fast unmount parts
void fastUnmountParts() {
    // You'll need to add your own code here
}

// Function to multiply inventory items condition
void multiplyInventoryItemsCondition() {
    // You'll need to add your own code here
}

// Main function of the trainer
int main() {
    init();
    while (true) {
        // Display the hotkeys and options
        CE->showMessage("Car Mechanic Simulator 2018 Trainer\n\nF1 - Increase Money\nF2 - Increase EXP\nF3 - Unlock All Upgrades\nF4 - Set Parts Quality\nF5 - Reveal Condition Of All Parts\nF6 - Always Unmountable\nF7 - Fast Unmount\nF8 - Multiply Inventory Items Condition");

        // Wait for user input
        CE->waitForMessage();

        // Get the user input
        char message[256];
        CE->readString(message, 256);

        // Perform the corresponding action
        if (strcmp(message, "F1") == 0) {
            increaseMoney();
        } else if (strcmp(message, "F2") == 0) {
            increaseExp();
        } else if (strcmp(message, "F3") == 0) {
            unlockAllUpgrades();
        } else if (strcmp(message, "F4") == 0) {
            setPartsQuality();
        } else if (strcmp(message, "F5") == 0) {
            revealConditionOfAllParts();
        } else if (strcmp(message, "F6") == 0) {
            makePartsAlwaysUnmountable();
        } else if (strcmp(message, "F7") == 0) {
            fastUnmountParts();
        } else if (strcmp(message, "F8") == 0) {
            multiplyInventoryItemsCondition();
        }
    }
    return 0;
}