#include <iostream>
using namespace std;

// Class representing a product
class Product {
private:
    string title;
    float price;
    float taxRate;

public:
    Product(string title, float price, float taxRate)
        : title(title), price(price), taxRate(taxRate) {}

    float getPrice() const { return price; }
    float getTaxRate() const { return taxRate; }
    string getTitle() const { return title; }
};

// Class responsible for tax calculation
class TaxCalculator {
public:
    static float calculateTax(const Product& product) {
        return product.getPrice() * product.getTaxRate() / 100.0f;
    }
};

int main() {
    Product tshirt("Hugo Boss", 20.00, 19.00);
    float taxesForShirt = TaxCalculator::calculateTax(tshirt);
    cout << "Tax for " << tshirt.getTitle() << ": " << taxesForShirt << endl;
    return 0;
}
