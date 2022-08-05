// John_Project_one.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Hi John this is your first exercise if you choose to accept 
//so clear up some things
//these // slashs create a single line comment witch does not get compiled into the finished application
//its simply for your own reffrance 
//
// then we have the comments below multi line comments and same as single line are not compiled in the finished application
/*
so today we will do a few basic things to get you on your way

1st up we have our includes includes are used to access diffrent functionaly that that isnt included by defalt
io stream stands for Input output stream 

*/
#include <iostream>
using namespace std;                                //we add this to save us calling the std namespace each time we require it more info below
int OurFirstFunc();                                 //inisilize the function
int main()                                           //this is declaering our entry point/main function that gets excuted on run having main() with brakets empty tell us this function does not take an argument
{                                                   //aruguments are anything that is parsed to a call parsed just means like info handed to the fucntion like tosomething with this info lol 
                                                    /*std::cout << "Hello World!\n"; */  //here we are accessing the standed c++ namespace we can also add using namespace std; below our includes so went dont have 
                                                  //new code with out calling std every call
   
    cout << "Hello World!\n";                   //to write std:: every time we read or write to the user so we will comment out this line of code and add our namespace and 
                                                //the call to cout
    
    system("pause>0");
    if (OurFirstFunc() <= 2000){              // start of our if statement in witch calls ourfirstfunc() and checks its returned value
                                                //
                                                 //because we return 2001 in OurFirstFunc the else statment is executed if we change 2001 to say 1999
                                                 //the msg printed will be the if statement of number below 2000
                                                 //these can be good gotha moments if you forget you put the = part meaning if its = to 2000 will still execute the if statement  
       
        
        cout << "number is below 2000";             //using std namespace cout to print the number is below 2000 to screen
    }
        else {
            cout << "number is bigger then 2000 SLOW DOWN! !%@$";//prints the number is below 2000 to screen

        }
    system("pause>0");
}
int OurFirstFunc() {                                    //this is decalring ourfirstfucntion there is a small problem here see if you cant fix it if you can find the bug even
    int a = 2001;                                       //intilise our intiger verable called a with a value of 2001 
    cout << "BOOBS\r\n Please enter a number else will defult to 2001: ";  //print what we require of the user to screen
    cin >> a;                                           //using std namespace cin to allows the user to input a value into our verable and notice the direction of arrows 
    return a;                                           //here we return the value we set to our main function for procerssing 
}


//your mission if you choose to accept is to read thrugh this if you have any questions 1st thing is to use google and luern to use resouses to
//debug and find functionalty for your code 2nd rewite this simple app to work with a diffrent datatype you pick right now we are printing strings and returning dealing 
//with numbers 
//we can return any datatype theres just diffrent ways of doing it 
//else if you get hard stuck ask me and ill point you in the right direction. 
//ill start making you a 2nd task in the coming days as you work thrugh this example 
//programming is 10% code 90% google reseach haha



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
