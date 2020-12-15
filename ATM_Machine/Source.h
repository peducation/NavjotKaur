/*----------------------------------------------------------------------------------------
File Name:      Source.h (This file contains the header file)
Description:    This program is for ATM Machine where you can enter with valid PIN number
                and either save or withdraw money.
Written by:     Navjot Kaur
Date:           2020-12-09
---------------------------------------------------------------------------------------------*/
//define class
class Account {

private:
    //defination of variables
    double balance;
    double dep;
    double withd;
    int ch;
public:

    //Defination of member functions
    void setValues(double b, double d, double w, int c);
    void getOptions();
    void bankBalanceIn(double balance);
    double bankBalanceOut(double balance);
    void deposit();
    void withdraw();
    void display();
}; 
