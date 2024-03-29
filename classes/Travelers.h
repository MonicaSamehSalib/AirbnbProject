#pragma once
#include<string>
#include<iostream>
#include "NewUser.h"
#include"TravelerTrips.h"
#include<stack>
using namespace std;

class Travelers :public NewUser
{
private:
	TravelerTrips trip;


public:
    stack<TravelerTrips> trips;
	Travelers();
	Travelers(string username, string fullname, string password, string email, string nationality, char gender, int age);
	void InsertTrip( string city, string start, string end, float mx, float mn, string tusername);
    void pushtrip( TravelerTrips trip );
    TravelerTrips top();
};

