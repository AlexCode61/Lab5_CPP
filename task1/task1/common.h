#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <locale>

using namespace std;

struct Train{
    int Day;
    int Seats;
    string destination;
    int Time;
};

const int MAX_TRAINS = 10;

void fillTrainsInfo(Train trains[], int numTrains);
void displayTrainsInfo(const Train trains[], int numTrains);
void reserveSeats(Train trains[], int numTrains, const string& destination, int day, const int& time, int seats);