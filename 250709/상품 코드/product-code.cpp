#include <iostream>
#include <string>

using namespace std;
class Product{
    public: 
string product_name;
int product_code;
    Product(string product_name="codetree",int product_code=50){
        this->product_code=product_code;
        this->product_name=product_name;
    }
};

int main() {
    string name;
    int code;
    Product product1=Product();
    cin >> name >> code;
    Product product2=Product(name,code);
    cout << "product " << product1.product_code << " is " << product1.product_name<< '\n';
    cout << "product " << product2.product_code << " is " << product2.product_name;
    // Please write your code here.

    return 0;
}