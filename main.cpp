// semesterproj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>
#include <cmath>
using namespace std;

void printMovieList()
{
    int i = 0;
    string movieArr[10];
    fstream list;

    if (list.fail())
    {
        cout << "ERROR!! There was a problem opening the file." << endl;
        exit (EXIT_FAILURE);
    }

    else
    {
        cout << "\nMovie List..." << endl;
        list.open("MovieList.txt");
        if (list.is_open())
        {
            while (list >> movieArr[i])
            {
                cout << "[" << (i + 1) << "] ";
                cout << movieArr[i] << endl;;
                i++;
            }
        }

        if (list.eof())
        {
            list.close();
        }
    }
}

void checkSeats(char movieSeatArr[100], int seatNum)
{
    char sorry;

    do
    {
        if (movieSeatArr[seatNum] != 'X')
        {
            cout << "Perfect! You have just purchased a ticket for Seat " << seatNum << endl;
            movieSeatArr[seatNum] = 'X';
            sorry = 'n';
        }
        else if (movieSeatArr[seatNum] == 'X')
        {
            cout << "Sorry, Seat " << seatNum << " is unavailable." << endl;
            cout << "Would you like to book a different seat (Y/N)?: ";
            cin >> sorry;
            cout << "Request a seat: ";
            cin >> seatNum;
            cout << endl;
        }
    } while ((sorry == 'y') || (sorry == 'Y'));
}

int printMovieTicket(string movieArr[10], int movieSelect, string firstName, string lastName, int seatNum)
{
    string 
        movieName,
        movieDate,
        movieTime,
        movieFormat,
        moviePrice;

    cout << endl;
    cout << "Your Ticket: " << endl;
    cout << "\t\t Movie Name: " << movieArr[movieSelect] << endl;
    cout << "\t\t Seat Number: " << seatNum;
    cout << "\t\t Date: December 3, 2021" << endl;
    cout << "\t\t Time: 7:00pm" << endl;
    cout << "\t\t Ticket Price: $9.99" << endl;
    cout << "\t\t Theater Number: 3" << endl;
    return 0;
}

void bookMovieTicket()
{
    const double moviePrice = 9.99;
    double total;
    char another, movieSeatArr[100];
    int movieChoice, seatNumber, ticketFlag = 0;
    string customerFN, customerLN, movieArr[10];
    fstream list;
    list.open("MovieList.txt");
    
    cout << "---------------------------------------------" << endl;
    cout << "\t\t Ticket Booth" << endl;
    cout << "---------------------------------------------" << endl;
    //printShowTimes()

    do
    {
        printMovieList();
        cout << "Movie Selection: ";
        cin >> movieChoice;
        //cout << "Enter Show Time: ";
        //cin >> showTime;

        cout << "Enter Ticketholder's First Name: ";
        cin >> customerFN;
        cout << "Enter Ticketholder's Last Name: ";
        cin >> customerLN;
        cout << "Request a seat: ";
        cin >> seatNumber;
        cout << endl;

        checkSeats(movieSeatArr, seatNumber);
        ticketFlag++;
        printMovieTicket(movieArr, movieChoice, customerFN, customerLN, seatNumber);

        cout << "\nWould you like to purchase another ticket?: ";
        cin >> another;
    } while ((another == 'y') || (another == 'Y'));

    cout << "You just purchased " << ticketFlag << " ticket(s)." << endl;

    total = ticketFlag * moviePrice;
    cout << "Total Cost: $" << fixed << setprecision(2) << total << endl;

}    

bool checkID()
{
    string adminuser, pw;
    char again;

    do
    {
        cout << "Enter login credentials: " << endl;
        cout << "Username: ";
        cin >> adminuser;

        if (adminuser == "Admin")
        {
            cout << "Password: ";
            cin >> pw;
        }

        if ((adminuser == "Admin") && (pw == "butterluv"))
        {
            cout << "Login Successful!!" << endl;
            return true;
        }
        else
        {
            cout << "Invalid Password!!" << endl;
            cout << "Would you like to try again?: ";
            cin >> again;
        }
    } while ((again == 'y') || (again == 'Y'));
    return false;
}

void addMovie(fstream& list)
{
    string movieName;
    fstream database;
    int movieID,
        movieMon,
        movieDay,
        movieYr,
        movieHr,
        movieMin;
    double price;
    
    /*cout << "Enter Movie ID: ";
    cin >> movieID >> endl;
    cout << "Enter Name: ";
    cin >> movieName >> endl;
    cout << "Enter Show Date (mm/dd/yyyy): ";
    cin >> movieMon >> "/" >> movieDay >> "/" >> movieYr >> endl;
    cout << "Enter Show Time (hh:mm): ";
    cin >> movieHr >> ":" >> movieMin >> endl;
    cout << "Enter Ticket Price: S";
    cin >> price;

    list.open("MovieList.txt");
    database.open("Database.txt");
    if (database.is_open())
    {
        while (movieName >> list)
        {
            printMovieList();
        }
    }
    list.close();
    database.close();*/
}

void deleteMovie()
{

}

void editMovie()
{

}


int main()
{
    int access, ch1, ch2;
    char movieSeats[10][10];
    char movieSeatArr[100];

    int k = 1;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            movieSeats[i][j] = k;
            k = movieSeatArr[k];
            k++;
        }
    }
    
    do
    {
        cout << "\nWelcome to the AMC Classic Auburn 14 Movie Theater!!!!" << endl;
        cout << "\nAccess Menu: " << endl;
        cout << "[1] Customer Access" << endl;
        cout << "[2] Admin Access" << endl;
        cout << "Make your selection: ";
        cin >> access;

        switch (access)
        {
            // Customer Access
            case 1:
            {
                cout << "\nCustomer Menu" << endl;
                cout << "[1] Show Movie List" << endl;
                cout << "[2] Book Movie Ticket" << endl;
                cout << "[3] Seat Availability" << endl;
                cout << "[4] Exit" << endl;
                cout << "Input: ";
                cin >> ch1;

                switch (ch1)
                {
                    case 1:
                    {
                        printMovieList();
                        break;
                    }

                    case 2:
                    {
                        bookMovieTicket();
                    }

                    case 3:
                    {

                    }

                    case 4:
                    {

                    }
                }
                break;
            }

            // Admin Access
            case 2:
            {
                // One admin username and password will successfully login
                // Set Username: Admin
                // Set Password: 
                if (!checkID())
                {
                    break;
                }
                else
                {
                    cout << "\nAdmin Menu" << endl;
                    cout << "[1] Add Movie" << endl;
                    cout << "[2] Delete Movie" << endl;
                    cout << "[3] Edit Movie" << endl;
                    cout << "[4] Exit" << endl;
                    cout << "Make your selection: ";
                    cin >> ch2;

                    switch (ch2)
                    {
                        case 1:
                        {

                        }

                        case 2:
                        {

                        }

                        case 3:
                        {

                        }

                        case 4:
                        {

                        }
                    }
                }
                
                break;
            }
        }
        
    } while ((access == 1) || (access == 2));

    if ((access != 1) && (access != 2))
    {
        cout << "Invalid Input." << endl;
    }

    return 0;
}

