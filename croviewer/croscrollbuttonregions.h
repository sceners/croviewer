/*
 *  croscrollbuttonregions.h
 *  croviewer
 *
 *  Created by fuxx on 17.10.10.
 *  Copyright 2010 chemical-reaction.org. All rights reserved.
 *
 */


#ifndef __CROSCROLLBUTTONREGIONS__
#define __CROSCROLLBUTTONREGIONS__

#include "crobuttonregions.h"
#include <string>
#include <vector>

class CroScrollButtonRegions : public CroButtonRegions {
public:
	CroScrollButtonRegions(int identifier, int x_min, int x_max, int y_min, int y_max) : CroButtonRegions(identifier, x_min, x_max, y_min, y_max) {};
	virtual ~CroScrollButtonRegions() {};
	int getMinCoordinateX() { return x_min; };
	int getMinCoordinateY() { return y_min; };
};

#endif