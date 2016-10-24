// Mushrooms_1
//
//	maitake, Grifola frondosa, 5, 50 - 10
//	shiitake, Lentinula edodes, 10, 60 - 6
//	oyster, Pleuratus ostreatus, 12, 60 - 5
//	shaggy mane, Coprinus comatus, 20, 120 - 6
//
//

#include "Mushrooms.h"

Satchel::Satchel()
{
	bagsize_=0;
	maitake_amount_=0;
	shiitake_amount_=0;
	oyster_amount_=0;
	shaggy_amount_=0;
}

Satchel::Satchel(int x)
{
	bagsize_= x;
	maitake_amount_=0;
	shiitake_amount_=0;
	oyster_amount_=0;
	shaggy_amount_=0;
}