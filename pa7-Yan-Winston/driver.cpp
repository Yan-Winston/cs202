#include "calculator.cpp"
#include "complex.cpp"

int getCalcType() {
    int choice = 0;
    std::cout << "***CALCULATOR***\nChoose your calculator mode\n1. Integer Values\n2. Floating Point Values\n3. Complex Numbers\n0. EXIT" << std::endl;
    std::cin >> choice;
    return choice;
}

int getOperation() {
    int choice = 0;
    std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Choose New Mode" << std::endl;
    std::cin >> choice;
    return choice;
}

void integerCalculator() {
    int choice = 0;
    std::string r1;
    std::string r2;
    int o1 = 0;
    int o2 = 0;
    
    bool r = true;

    while (r == true) {
        std::cout << "***INTEGER CALCULATOR***" << std::endl;
        choice = getOperation();
        
        if (choice != 0) {
            std::cout << "Please enter operand 1:" << std::endl;
            std::cin >> r1;
            std::cout << "Please enter operand 2:" << std::endl;
            std::cin >> r2;

            o1 = std::stoi(r1);
            o2 = std::stoi(r2);

            if (o2 == 0 && choice == 4) {
                std::cout << "Result: Cannot divide by zero" << std::endl << std::endl;
            } else {

                Calculator <int> icalculator(o1,o2);
                icalculator.setOperand1(o1);
                icalculator.setOperand2(o2);

                int result;

                switch (choice) {
                    case 1:
                        result = icalculator.addition();
                        break;
                    case 2:
                        result = icalculator.subtraction();
                        break;
                    case 3:
                        result = icalculator.multiplication();
                        break;
                    case 4:
                        result = icalculator.division();
                        break;
                    default:
                        r = false;
                        break;
                }
                std::cout << "\nResult: " << result << std::endl << std::endl;
            }
        } else {
            r = false;
        }
    }
}

void floatingCalculator() {
    int choice = 0;
    std::string r1;
    std::string r2;
    float o1 = 0;
    float o2 = 0;
    
    bool r = true;

    while (r == true) {
        std::cout << "***DOUBLE CALCULATOR***" << std::endl;
        choice = getOperation();
        
        if (choice != 0) {
            std::cout << "Please enter operand 1:" << std::endl;
            std::cin >> r1;
            std::cout << "Please enter operand 2:" << std::endl;
            std::cin >> r2;

            o1 = std::stof(r1);
            o2 = std::stof(r2);

            if (o2 == 0 && choice == 4) {
                std::cout << "Result: Cannot divide by zero" << std::endl;
            } else {

                Calculator <float> fcalculator(o1,o2);

                fcalculator.setOperand1(o1);
                fcalculator.setOperand2(o2);

                float result;

                switch (choice) {
                    case 1:
                        result = fcalculator.addition();
                        break;
                    case 2:
                        result = fcalculator.subtraction();
                        break;
                    case 3:
                        result = fcalculator.multiplication();
                        break;
                    case 4:
                        result = fcalculator.division();
                        break;
                    default:
                        r = false;
                        break;
                }
                std::cout << "\nResult: " << result << std::endl << std::endl;
            }
        } else {
            r = false;
        }
    }
}

void complexCalculator() {
    int choice = 0;
    std::string r1;
    std::string r2;
    float o1 = 0;
    float o2 = 0;
    
    bool r = true;

    while (r == true) {
        std::cout << "***Complex CALCULATOR***" << std::endl;
        choice = getOperation();
        
        if (choice != 0 && choice != 4) {
            Complex o1;
            Complex o2;

            std::cout << "Please enter operand 1:" << std::endl;
            std::cin >> o1;
            std::cout << "Please enter operand 2:" << std::endl;
            std::cin >> o2;

            switch (choice) {
                case 1:
                    std::cout << "Result: " << o1 + o2 << std::endl;
                    break;
                case 2:
                    std::cout << "Result: " << o1 - o2 << std::endl;
                    break;
                case 3:
                    std::cout << "Result: " << o1 * o2 << std::endl;
                    break;
                default:
                    r = false;
                    break;
            }
        } else if (choice == 4) {
            std::cout << "\nInvalid Operation" << std::endl << std::endl;
        
        } else {
            r = false;
        }
    }
}



int main() {

    bool run = true;
    bool runType = true;
    int type = 0;

    std::cout << std::endl;

    while (run == true) {
        type = getCalcType();
        if (type == 1) {
            integerCalculator();
        } else if (type == 2) {
            floatingCalculator();
        } else if (type == 3) {
            complexCalculator();
        } else {
            run = false;
            break;
        }
        std::cout << std::endl << std::endl;
    }

    return 0;
}