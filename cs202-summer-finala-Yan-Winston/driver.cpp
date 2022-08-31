#include "fruits.cpp"
#include "condiments.cpp"
#include "food.cpp"
#include "date.cpp"
#include "fridge.cpp"


void outputFoodStatus(int days, date d, food f) {
    date exp = f.getBestByDate();
    if (days > 0) {
        std::cout << "This " << f.getFoodName() << " is best eaten within " << days << " days." << std::endl;
    } else if (days < 0) {
        std::cout << exp.getMonth() << "/" << exp.getDay() << "/" << exp.getYear() << "." << std::endl;
    } else {
        std::cout << "This " << f.getFoodName() << " should be eaten today." << std::endl;
    }
}

void convertDaysToDate(int d, food f) {
    int years = d/365;
    int months = (d-years*365)/30;
    int days = ((d-years*365)-months*30);
    outputFoodStatus(d, date(months, days, years), f); 
}

std::istream& operator>>(std::istream& stream, date& d) {
    std::string day, m, y;
    std::cout << "give 3 numbers" << std::endl;
    std::cin >> day;
    std::cin >> m;
    std::cin >> y;
    d.setMonth(std::stoi(m));
    d.setDay(std::stoi(day));
    d.setYear(std::stoi(y));

    return stream;
}

int main() {
    fridge chefsKiss;
    date bestDate(8, 21, 2022);
    date today(8, 15, 2022);
    date expiredDate(8, 11, 2022);
    date inWindowDate(8,12,2022);
    fruits newFruit(true, "apple", bestDate);
    fruits iffyFruit(true, "banana", inWindowDate);
    fruits badFruit(false, "bag of cherries", expiredDate);
    chefsKiss.addFruitToFridge(newFruit);
    chefsKiss.addFruitToFridge(iffyFruit);
    chefsKiss.addFruitToFridge(badFruit);
    cout << endl;
    for (int i = 0; i < chefsKiss.getNumFruits(); i++){
        int numDaysF = chefsKiss.getFruitBin()[i].checkIfSafeToEat(today);

        if(numDaysF < 0){
            cout << "Throw out this " << chefsKiss.getFruitBin()[i].getFoodName() << ", it expired on ";
            convertDaysToDate(numDaysF, chefsKiss.getFruitBin()[i]);
        }
        else{
            convertDaysToDate(numDaysF, chefsKiss.getFruitBin()[i]);
        }
    }
    condiments mustard(false, "mustard", bestDate);
    condiments mayo(true, "mayo", inWindowDate);
    chefsKiss.addCondimentToFridge(mustard);
    chefsKiss.addCondimentToFridge(mayo);
    for (int i = 0; i < chefsKiss.getNumCondiments(); i++){
        int numDaysC = chefsKiss.getCondimentBin()[i].checkIfSafeToEat(today);
        if( numDaysC < 0){
            cout << "Throw out this " << chefsKiss.getCondimentBin()[i].getFoodName() << ", it expired on ";
            convertDaysToDate(numDaysC, chefsKiss.getCondimentBin()[i]);
        }
        else{
            convertDaysToDate(numDaysC, chefsKiss.getCondimentBin()[i]);
        }
    }
    cout << endl;

}
