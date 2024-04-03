// Authors: JDRS Innovations
// Class for the cheese object

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// Cheese class
class Cheese {
    // Variables for cheese object
    private:
        // ID of the cheese
        int id;
        // Name of the cheese
        string name;
        // Price of the cheese
        double price;
        // Country of origin (may change)
        string countryOfOrigin;
        // Description of cheese object
        string desc;
        // Image address for a picture of the cheese (may change)
        string imageAddress;

    public:
        // Constructors for cheese object
        Cheese(): id(0), desc("Cheese"), name("Cheese"), price(0.0), countryOfOrigin("USA"), imageAddress("") {}
        Cheese(int chId, string chName, double chPrice, string chOrigin, string chDesc, string chImageAddress) :
        id(chId), name(chName), price(chPrice), countryOfOrigin(chOrigin), desc(chDesc), imageAddress(chImageAddress) {}

        // Destructor Method for cheese object
        ~Cheese() {}

        // Getter methods for cheese object
        int getId() const {
            return id;
        }

        string getName() const {
            return name;
        }

        double getPrice() const {
            return price;
        }

        string getCountryOfOrigin() const {
            return countryOfOrigin;
        }

        string getDescritption() const {
            return desc;
        }

        string getImageAddress() const {
            return imageAddress;
        }

        // Setter methods for cheese object
        void setId(int chId) {
            id = chId;
        }

        void setName(string chName) {
            name = chName;
        }

        void setPrice(double chPrice) {
            price = chPrice;
        }

        void setCountryOfOrigin(string chOrigin) {
            countryOfOrigin = chOrigin;
        }

        void setDescription(string chDesc) {
            desc = chDesc;
        }

        void setImageAddress(string chImageAddress) {
            imageAddress = chImageAddress;
        }

        // Sorting methods
        static bool compareByName(const Cheese& a, const Cheese& b) {
            return a.name < b.name;
        }

        static bool compareByCountry(const Cheese& a, const Cheese& b) {
            return a.countryOfOrigin < b.countryOfOrigin;
        }

        static bool compareById(const Cheese& a, const Cheese& b) {
            return a.id < b.id;
        }
};

// Main method to test the cheese object
int main() {
    // Testing constructor
    Cheese gouda(1, "Gouda", 5.99, "Netherlands", "Cheesy", "https://cdn11.bigcommerce.com/s-7c08qbh/images/stencil/1280x1280/products/622/10286/smoked-gouda__28176.1673289033.jpg?c=2");

    // Using getter methods
    cout << "Name: " << gouda.getName() << endl;
    cout << "Price: $" << gouda.getPrice() << endl;
    cout << "Country of origin: " << gouda.getCountryOfOrigin() << endl;
    cout << "Image Address: " << gouda.getImageAddress() << endl;

    // Using set method for price
    gouda.setPrice(8.89);
    cout << "New price: $" << gouda.getPrice() << endl;

    // Testing sorting
    vector<Cheese> cheeses;
    cheeses.push_back(Cheese(1, "Gouda", 5.99, "Netherlands", "Cheesy", "https://cdn11.bigcommerce.com/s-7c08qbh/images/stencil/1280x1280/products/622/10286/smoked-gouda__28176.1673289033.jpg?c=2"));
    cheeses.push_back(Cheese(2, "Cheddar", 6.99, "UK", "Tasty", "https://image.com/cheddar.jpg"));
    cheeses.push_back(Cheese(3, "Brie", 7.99, "France", "Creamy", "https://image.com/brie.jpg"));

    // Sort by name
    sort(cheeses.begin(), cheeses.end(), Cheese::compareByName);
    cout << "Sorted by name:" << endl;
    for (const auto& cheese : cheeses) {
        cout << cheese.getName() << endl;
    }

    // Sort by country
    sort(cheeses.begin(), cheeses.end(), Cheese::compareByCountry);
    cout << "Sorted by country:" << endl;
    for (const auto& cheese : cheeses) {
        cout << cheese.getName() << " - " << cheese.getCountryOfOrigin() << endl;
    }

    // Sort by ID
    sort(cheeses.begin(), cheeses.end(), Cheese::compareById);
    cout << "Sorted by ID:" << endl;
    for (const auto& cheese : cheeses) {
        cout << cheese.getName() << " - ID: " << cheese.getId() << endl;
    }

    return 0;
}
