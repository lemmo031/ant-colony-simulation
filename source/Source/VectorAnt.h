/* ----------------------------------------------------------------

	This file is part of modified version of Ant Colony Simulation 
	developed by Aleksejs Belezjaks for University of Hull 08341 Final Project 13/14 module.
	
	Copyright (C) 2014 Aleksejs Belezjaks http://alexbelezjaks.com
	
	Ant Colony Simulation is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Ant Colony Simulation is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
	
	--------------------------------------------------------------- */

#pragma once
#include "ant.h"
class FoodManager;
class Home;
class Grid;

class VectorAnt :
	public Ant
{
	// Methods
public:
	VectorAnt(void);
	VectorAnt(uint texture, float angle, Grid* grid, Home* home, FoodManager* food_manager);
	~VectorAnt(void);

	virtual GridObjResult Update(float delta_time);

private:
	void calculateNextAction();
	void checkIfHungry();

	// Variables
public:	

};

