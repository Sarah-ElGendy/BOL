#pragma once
#include "BoardObjects\Drawable.h"
#include <vector>
#include <iostream>
#include <string>
#include "Parking.h"
#include "Market.h"
#include "RestArea.h"
#include "Defs.h"
#include "Court.h"
#include "Jail.h"
#include "BusStation.h"
#include "Luck.h"
#include "ClubOfLuck.h"
#include "GasStation.h"
class Space : public Drawable
{
	/*City CityObj;
	Court court;
	Jail jail;
	Luck luck;
	Market market;
	Parking parking;
	RestArea restArea;
	BusStation busStation;
	group num;*/
	ClubOfLuck club_Luck;
	GasStation gas_tation;
public:
	explicit Space();
	void draw(GUI& gui) override;
	bool SpaceInfo();
};

