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

        // Getter methods for cheese object
        string getName() const {
            return name;
        }

        double getPrice() const {
            return price;
        }

        string getCountryOfOrigin() const {
            return countryOfOrigin;
        }

        string getImageAddress() const {
            return imageAddress;
        }

        // Setter methods for cheese object
        void setName(string chName) {
            name = chName;
        }

        void setPrice(double chPrice) {
            price = chPrice;
        }

        void setCountryOfOrigin(string chOrigin) {
            countryOfOrigin = chOrigin;
        }

        void setImageAddress(string chImageAddress) {
            imageAddress = chImageAddress;
        }
};

// Main method to test the cheese object
int main() {
    // Testing constructor
    Cheese gouda("Gouda", 5.99, "Netherlands", "https://cdn11.bigcommerce.com/s-7c08qbh/images/stencil/1280x1280/products/622/10286/smoked-gouda__28176.1673289033.jpg?c=2");

    // Using getter methods
    cout << "Name: " << gouda.getName() << endl;
    cout << "Price: $" << gouda.getPrice() << endl;
    cout << "Country of origin: " << gouda.getCountryOfOrigin() << endl;
    cout << "Image Address: " << gouda.getImageAddress() << endl;

    // Using set method for price
    gouda.setPrice(8.89);
    cout << "New price: $" << gouda.getPrice() << endl;
}
