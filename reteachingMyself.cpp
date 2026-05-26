#include <iostream>

int countdown = 5;
int countDownFromThirty = 30;
int Favor = 0;
int Money = 500;
std::string myName = "Steven";
std::string cars[4] = { "Volvo", "Mazda", "BMW", "GMC" };

void firstFunction()
    {
        std::cout << "Not my first function, but hey it'll do!\n";
    }
class myClass {
        public:
        int myNum;
        std::string myString;
        
    };

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Hello " << myName << "!\n";
    if (Favor < 6)
    {
        std::cout << "You do not have enough favor!\n";
    }
    if (Money >= 500)
    {
        std::cout << "Hello there " << myName <<            "!\n";
    }    else  {
        std::cout << "Get away from me!\n";
    }
    firstFunction();
    std::cout << cars[1] << "\n";
    
    myClass myObject;
    myObject.myNum = 15;
    myObject.myString = "Some Text";
    std::cout << myObject.myNum << "\n";
    std::cout << myObject.myString << "\n";
    
    while (countdown > 0) {
        std::cout << countdown << " \n";
        countdown--;
    }
    std::cout << "\n" << "\n" << "\n";
    for(countDownFromThirty = 30; countDownFromThirty != 0; countDownFromThirty--) {
        if (countDownFromThirty%5 == 0){
            printf ("%d \n", countDownFromThirty);
        }
    }
    return 0;
}