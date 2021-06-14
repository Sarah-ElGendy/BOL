#include "Space.h"
#include "City.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
#include "Parking.h"
#include "Market.h"
#include "RestArea.h"
#include "Court.h"
#include "Jail.h"
#include "Luck.h"
#include "BusStation.h"
#include "ClubOfLuck.h"
#include "GasStation.h"
#include "GUI.h"

Space::Space()
{
}

void Space::draw(GUI& gui)
{
	gui.drawCities();
}

bool Space::SpaceInfo()
{
	fstream file;
	string line, name, GasSPrice, GasSFees, clubPrice, clubFees;
	/*string data, name, price, passingFees, garagePrice, garageFees, restAreaPrice,
		restAreaFees, marketPrice, marketFees, cityGroup;*/
	
	file.open("BankOfLuckFiles\\SpaceInfo.txt", ios::in);
	if (file.fail()) {
		return false;
	}
	else {
		while (getline(file,line)) {
			stringstream GC(line);
			//if (name != "ClubOfLuck" && name != "GasStation") {
			//	getline(GC, name, ',');
			//	CityObj.Name.push_back(name);
			//	//cout << name << endl;
			//	getline(GC, price, ',');
			//	CityObj.Price.push_back(stoi(price)); // function to store an integer as a string
			//	getline(GC, passingFees, ',');
			//	CityObj.PassingFees.push_back(stoi(passingFees));
			//	getline(GC, garagePrice, ',');
			//	parking.ParkingPrice.push_back(stoi(garagePrice));
			//	getline(GC, garageFees, ',');
			//	parking.Parkingfees.push_back(stoi(garageFees));
			//	getline(GC, restAreaPrice, ',');
			//	restArea.RestPrice.push_back(stoi(restAreaPrice));
			//	getline(GC, restAreaFees, ',');
			//	restArea.Restfees.push_back(stoi(restAreaFees));
			//	getline(GC, marketPrice, ',');
			//	market.MarketPrice.push_back(stoi(marketPrice));
			//	getline(GC, marketFees, ',');
			//	market.Marketfees.push_back(stoi(marketFees));
			//	getline(GC, cityGroup, ',');
			//	num.groupNum.push_back(stoi(cityGroup));
			//}
			if (name == "ClubOfLuck") {
				club_Luck.NameClub = name;
				getline(GC, clubPrice, ',');
				club_Luck.ClubPrice.push_back(stoi(clubPrice));
				getline(GC, clubFees, ',');
				club_Luck.PassingClubFees.push_back(stoi(clubFees));
			}
			if (name == "GasStation") {
				getline(GC, GasSPrice, ',');
				gas_tation.GasStationPrice.push_back(stoi(GasSPrice));
				getline(GC, GasSFees, ',');
				gas_tation.PassingGasStationFees.push_back(stoi(GasSFees));
			}
		}
	}
	return true;
}
