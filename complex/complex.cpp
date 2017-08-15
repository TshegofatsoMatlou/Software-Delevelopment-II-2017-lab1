#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

float part1(int a, int b, int c){
    return ( - b ) / 2.0*a;
}

float part2(int a, int b, int c){
    return sqrt(abs(b*b - 4*a*c)) / 2.0*a;
}

int main()
{
	
    int a, b, c;
    string confirm;

    while(true){
        //Prompting the user to enter 3 interger numbers
        cout << "Enter 3 integer numbers:" << endl;
        cin >> a >> b >> c;

        if((b*b - 4*a*c) < 0){//checking for imaginary result
			typedef complex<float> complexNumber;

            complexNumber num1{part1(a,b,c), part2(a,b,c)};//store in the complex variable called num1

            if(part2(a,b,c) > 0){//Checking signs to determine printing format
                cout << num1.real() << " + " << num1.imag() << "j" << " or " <<  num1.real() << " - " << num1.imag() << "j" << endl;
            }else{
                cout << num1.real() << " " << num1.imag() << "j" << " or " <<  num1.real() << " + " << fabs(num1.imag()) << "j" << endl;
            }
        //This is for real roots obtained from the quadratic equation; also defining the output format
        }else{
            cout << (part1(a,b,c) + part2(a,b,c)) << " or " << (part1(a,b,c) - part2(a,b,c)) << endl;
        }//The user is prompted about continuing with the program or quit the program
        cout << "Type \"yes\" if you want to do another calculation or \"q\" for quit" << endl;
        cin >> confirm;
        //If the user entered q, the program will exit the while loop
        if(confirm  == "q"){
            break;
        }
    }
    return 0;
}
