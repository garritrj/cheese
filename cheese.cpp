// Authors: JDRS Innovations
// Class for the cheese object

#include <iostream>
#include <string>

using namespace std;

// Cheese class
class Cheese {
    // Variables for cheese object
    private:
        // Name of the cheese
        string name;
        // Price of the cheese
        double price;
        // Country of origin (may change)
        string countryOfOrigin;
        // Image address for a picture of the cheese (may change)
        string imageAddress;

    public:
        // Constructors for cheese object
        Cheese(): name("Cheese"), price(0.0),
        countryOfOrigin("USA"), imageAddress("") {}
        Cheese(string chName, double chPrice, string chOrigin, string chImageAddress) :
        name(chName), price(chPrice), countryOfOrigin(chOrigin), imageAddress(chImageAddress) {}

};
