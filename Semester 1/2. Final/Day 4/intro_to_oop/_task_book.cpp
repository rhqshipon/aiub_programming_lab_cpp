#include <iostream>
#include<string>
using namespace std;


class book{
    private:
    string title;
    float edition;
    double price;

    public:
    void setTitle(string Title)   {
        title = Title;
    }
    void setEdition(float Edition)   {
        edition = Edition;
    }
    void setPrice(double Price)   {
        price = Price;
    }


    string getTitle() const {
        return title;
    }

    float getEdition() const {
        return edition;
    }

    double getPrice() const {
        return price;
    }
};

int main()  {
    book b1;
    b1.setTitle("Harry Potter"); b1.setEdition(3); b1.setPrice(1449.99);

    cout << "Title: " << b1.getTitle() << endl;
    cout << "Edition: " << b1.getEdition() << endl;
    cout << "Price: " << b1.getPrice() << " taka" << endl;
}

