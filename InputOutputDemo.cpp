// InputOutputDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// include iostream library for basic console input and output
#include <iostream>
// include string library
#include <string>
// include windows header file for more advanced windows console functions
#include <windows.h>
// namespace std for cout and cin allowing cout, cin instead of std::cout std::cin
using namespace std; // std::cout, std::cin

int main()
{
    //Create Handle to refer to GetStdHandl labelled hConsole
    HANDLE hConsole;
    //set hConsole to GetStdHandle thing, to obtain C standard console colors
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //create string variables playerName and playerChoice
    string playerName, playerChoice, reset;
    //create integer variables for day and points
    int day = 4, score = 0;


    //Set console attribute equivalent to old style cout<<color x<<"text element" parameter of 2 is green.
    SetConsoleTextAttribute(hConsole, 2);
    //console output of title card
    cout << "\n\n\n\t Welcome to the Mystery of the Plex \n\n";
    //Set colors back to original
    SetConsoleTextAttribute(hConsole, 15);
    //Prompt user for name
    cout << "\t Please enter your name\n";
    //Use getline function with parameters of type of input cin & variable to hold string
    getline(cin, playerName);
    //cout of welcome message with variable of playerName inserted
    cout << "\n Welcome " + playerName + " to the beginning of your adventure\n";
    cout << "\n\n An unusual event happened worldwide. Small thin pieces of black material appeared at random locations.\n Unusually the material has one strange property. For most people they forget about it and other things every 3 days.\n Resulting in a loop of news stories about the \"new discovery\". Some everyday technology doesn't always work.\n And the world itself is shutdown in a strange form of self denial. Stuck awaiting news on the strange phenomenon, which never comes. \n";
    cout << "\nPress any key to continue\n";
    //using cin.get() to create press anykey delay
    cin.get();
    cout << "\n\n You, the player, have no special skills or abilities, except one. \n You are immune to the effects of the phenomenon.\n";
    cout << "\nPress any key to continue\n";
    cin.get();
    cout << "\n\n When the phenomenon first happened there were many theories, and even multiple different results from similar tests. \n The material was referred to by it's multiplex properties. Or as it's called on the news, the \"Plex\"\n";
    cout << "\nPress any key to continue\n";
    cin.get();
    cout << "\n\n You are in a park, near a university to the north. To the south is a parking lot with your car. Nearby is a piece of Plex on the ground.\n";
    
    //Set console attribute equivalent to old style cout<<color x<<"text element"> in this green=2
    SetConsoleTextAttribute(hConsole,2);
    // output Which day with variable day
    cout << "\t Day:" << day;
    // output how many points the player has accumulated with variable score
    cout << " Points:" << score;
    // prompt user for input
    cout << "  You can go N, S, or (P)pickup the Plex\n\n";

    //todo: come up with an inventory system, probably an array, enumerated or list
     //Return console attribute to original white on black
    SetConsoleTextAttribute(hConsole, 15);
    //take input from player and assign to string variable playerChoice
    getline(cin, playerChoice);
    //Begin if else suite for selected user choice
    if (playerChoice == "P")
    {
        cout << "\n\t You reach down and pickup the Plex. It's looks a bit like a small piece of black eggshell.\n";
        cout << "\t Feeling it, is is cool to the touch, and slightly vibrating. You put in in your pocket.\n";
        //add to score variable for correct answer
        score += 100;
    }
    else if (playerChoice == "S")
    {
        cout << "\n\t You travel south to the parking lot and look for your car. After a little while you find it. \n";
        cout << "\t Turning the key the cars radio turns on, but the car won't start.\n";
        cout << "\t The \"breaking news\" is of course about the discovery of the strange black material.\n";
        cout << "\t Local scientists are baffled as to why the material is already in their labs and how it got there.\n";
    }
    else if (playerChoice == "N")
    {
        cout << "\n\t You travel north into the University. There's a great commotion around the labs.\n";
        cout << "\t Some of the teachers and students are gathered around an electron microscope excitedly.\n";
        cout << "\t On the screen the surface of the sample is shimmering and moving while being imaged\n";
        cout << "\t The teacher remarks \"It's as if it's reacting to the electron beam\"\n";
       //add to score variable for correct answer
        score += 100;
    }
    else
    {
        cout << "\n\t No valid input given...";
        cout << "\n\t Reset Game? Y/N";
        cin >> reset;
        if (reset == "Y") main();
    }
        
    
    //Set console attribute equivalent to old style cout<<color x<<"text element"> in this green=2
    SetConsoleTextAttribute(hConsole, 2);
    // output Which day with variable day
    cout << "\n\t Day:" << day;
    // output how many points the player has accumulated with variable score
    cout << " Points:" << score; 
    //Return console attribute to original white on black
    SetConsoleTextAttribute(hConsole, 15);

    cout << "\n\n\t As the day ends. You find that your car now starts and you can go home for another day.\n";
    //update variable day for next day
        day += 1;

        //todo: add more story line and add loops and functions
    //change consonsole attribute to red to indicate end text.
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\n\nTo be continued... End of Program\n";
    //Return console attribute to original white on black
    SetConsoleTextAttribute(hConsole, 15);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
