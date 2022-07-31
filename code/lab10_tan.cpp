/************************************
Program Name: lab10_tan.cpp 
Programmer: David Tan
Class: CS 3335 
lab 10
****************************************/

#include <iostream>
using namespace std;

//This is where I define a struct 'books'
struct books{
//Setting the name and author as a string type and size of 20
    char name[20];
    char author[20];
};

//This is my main class
int main(){
//This is where I declare my array and variables
    int t1;
    string name, author;
    struct books a[50];
    int digitOfBooks;
//User input number of books
    cout << "No Of Books[less than 50]:";
    cin >> digitOfBooks;
    cout << "Enter the book details\n";
    cout << "---------------------------\n";
    for(int t1 = 0; t1 < digitOfBooks; t1++){
        cout << "Details of book No " << (t1 + 1) << endl;
        cout << "Book Name :";
        cin >> a[t1].name;
        cout << "Book Author :";
        cin >> a[t1].author;
    }
    cout << "==========================================================\n";
    cout << "S.No | Book Name | author\n";
    cout << "==========================================================\n";
    for(int t1 = 0; t1 < digitOfBooks; t1++){
//This print out the details of the books
        cout << (t1 + 1) << "  |" << a[t1].name << "  | " << a[t1].author;
        cout << "\n";
    }
        cout << "==========================================================";
    return 0;
}

