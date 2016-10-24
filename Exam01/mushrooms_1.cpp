//MAIN

#include "Mushrooms.h"
#include <math.h>

using namespace std;

int main()
{

	Satchel S;
	S.bagsize_=23;

//PRICES PER OZ.
	int maitake, shiitake, oyster, shaggy;
	maitake=10;
	shiitake=6;
	oyster=5;
	shaggy=6;

//MAX AMOUNT OF MUSHROOMS
	int max_maitake, max_shiitake, max_oyster, max_shaggy;
	max_maitake=5;
	max_shiitake=10;
	max_oyster=12;
	max_shaggy=20;

/////////////////////////////////

	for (int i=0;i<S.bagsize_;i++)
	{
		if (S.maitake_amount_<max_maitake)
		{
			S.maitake_amount_+=1;
		}
		else if (S.shiitake_amount_<max_shiitake)
		{
			S.shiitake_amount_+=1;
		}
		else if (S.shaggy_amount_<max_shaggy)
		{
			S.shaggy_amount_+=1;
		}
		else if (S.oyster_amount_<max_oyster)
		{
			S.oyster_amount_+=1;
		}
		else
		{
			cout << endl;
			cout << "----------------------------------------------------------" << endl;
			cout << "Max mushrooms taken." << endl;
			cout << "----------------------------------------------------------" << endl;
			break;
		}

	}


//////////////////////////////////
	int x, y, z, p;
	x=S.maitake_amount_;
	y=S.shiitake_amount_;
	z=S.oyster_amount_;
	p=S.shaggy_amount_;

/////////////////////////////////////
	int maitakevalue,shiitakevalue,oystervalue,shaggyvalue;
	maitakevalue=x*maitake;
	shiitakevalue=y*shiitake;
	oystervalue=z*oyster;
	shaggyvalue=p*shaggy;
	int totalvalue= maitakevalue+shiitakevalue+oystervalue+shaggyvalue;

//OUTPUT

	cout << x << " ounces of Maitake (Grifola frondosa) mushrooms." << endl;
	cout << y << " ounces of Shaggy Mane (Coprinus comatus) mushrooms." << endl;
	cout << z << " ounces of Oyster (Pleuratus ostreatus) mushrooms." << endl;
	cout << p << " ounces of Shiitake (Lentinula edodes) mushrooms." << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "Total Value: $" << totalvalue << ".00" << endl;


}