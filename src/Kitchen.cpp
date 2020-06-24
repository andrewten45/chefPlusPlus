#include <iostream>
#include "Kitchen.h"


void Kitchen::GetNumCooking() {
	if (cooking == 0) {
		std::cout << "Nothing's cooking.\n";
	}
	else if (cooking == 1) {
		std::cout << "There's " << cooking << " thing cooking.\n";
	}
	else {
		std::cout << "There are " << cooking << " things cooking.\n";
	}
}

void Kitchen::GetNumCooks() {
	if (cooks == 0) {
		std::cout << "Nobody's cooking.\n";
	}
	else if (cooks == 1) {
		std::cout << "There's " << cooks << " cook working.\n";
	}
	else {
		std::cout << "There are " << cooks << " cooks working.\n";
	}
}

void Kitchen::GetOvenStatus() {
	if (status == 0) {
		std::cout << "Oven is off.\n";
	}
	else if (status == 1) {
		std::cout << "Oven is on, and set to bake.\n";
	}
	else if (status == 2) {
		std::cout << "Oven is on, and set to broil.\n";
	}
}

void Kitchen::GetOvenTemp() {
	if (ovenTemp == 1) {
		std::cout << "The oven is set to " << ovenTemp << " degree Fahrenheit.\n";
	}
	else {
		std::cout << "The oven is set to " << ovenTemp << " degrees Fahrenheit.\n";
	}
}

void Kitchen::SetNumCooking() {
	int numCooking;
	std::cout << "Please enter the number of items cooking:\n";
	std::cin >> numCooking;

	if (numCooking == 0) {
		std::cout << "Nothing's cooking.\n";
	}
	else if (numCooking == 1) {
		std::cout << "There's " << numCooking << " thing cooking.\n";
	}
	else {
		std::cout << "There are " << numCooking << " things cooking.\n";
	}

	cooking = numCooking;
}

void Kitchen::SetNumCooks() {
	int numCooks;
	std::cout << "Please enter the number of cooks working:\n";
	std::cin >> numCooks;

	if (numCooks == 0) {
		std::cout << "Nobody's cooking.\n";
	}
	else if (numCooks == 1) {
		std::cout << "There's " << numCooks << " cooks working.\n";
	}
	else {
		std::cout << "There are " << numCooks << " cooks working.\n";
	}

	cooks = numCooks;
}

void Kitchen::SetOvenStatus() {
	std::string userString = "";
	enum OvenState {OVEN_OFF, OVEN_ON_BAKE, OVEN_ON_BROIL};
	OvenState ovenStatus = OVEN_OFF;

	std::cout << "Please input 0 to turn the oven off and 1 or 2 to turn on bake or broil, respectively.\n";
	std::cin >> userString;

	if (userString == "0") {
		ovenStatus = OVEN_OFF;
		std::cout << "Oven is off.\n";
	}
	else if (userString == "1") {
		ovenStatus = OVEN_ON_BAKE;
		std::cout << "Oven is on, and set to bake.\n";
	}
	else if (userString == "2") {
		ovenStatus = OVEN_ON_BROIL;
		std::cout << "Oven is on, and set to broil.\n";
	}

	status = ovenStatus;
}
void Kitchen::SetOvenTemp() {
	int ovenHeat;

	std::cout << "What temperature (F)?\n";
	std::cin >> ovenHeat;

	if (ovenHeat == 1) {
        ovenTemp = ovenHeat;
		std::cout << "The oven is set to " << ovenHeat << " degree Fahrenheit.\n";
	}
	else {
	    if (ovenHeat < 0) {
            std::cout << "Error: Oven heat cannot be negative.\n";
	    }
	    else if (ovenHeat > 1000) {
            std::cout << "Error: Oven heat cannot be greater than 1000.\n";
	    }
	    else {
	        ovenTemp = ovenHeat;
            std::cout << "The oven is set to " << ovenHeat << " degrees Fahrenheit.\n";
	    }
	}
}
void Kitchen::SafetyCheck() {
    std::cout << "Checking if the kitchen has common fire hazards.\n";
    if (cooks > 0 || (cooks == cooking && cooks == status)) {
        std::cout << "Kitchen has no common fire hazards.\n";
    }
    else {
        if (cooking != 0) {
            std::cout << "FIRE HAZARD: Items are cooking without cooks working.\n";
        }
        if (status != 0) {
            std::cout << "FIRE HAZARD: Oven is on without cooks working.\n";
        }
    }
}
void Kitchen::SetListIngreds() {
    string userIn;
    int ingredQuantity;

    //Push back ingredient
    std::vector.push_back(userIn);

    //Set quantity of ingredient
    cin >> ingredQuantity; //?

    //Delete specific ingredient
    //Pop back ingredient
}
void Kitchen::GetListIngreds() {
    //Get list of ingredients in the vector along with quantity
    //Get list of ingredients & amount as it pertains to a recipe (future implementation)
}
void Kitchen::SetListOrders() {
    //Add an order to the list; record time it was added
    //Delete an order from the list when completed
}
void Kitchen::GetListOrders() {
    //Get list of orders & time ordered
}
