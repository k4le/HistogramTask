#ifndef MAIN_H
#define MAIN_H

#include "Histogram.h"
#include <iostream>
#include "RandomEintegerGenerator.h"

namespace Hist
{
	int main()
	{
		Histogram *pHistogram =  new Histogram(Logger());
		RandomEintegerGenerator EintegerGen;
			
		//Add random Eintegers to histogram
		for (int i = 0; i < 100; i++)
		{
			pHistogram->add(EintegerGen());
		}

		std::cout << "Mode: " <<  pHistogram->getMode() << std::endl;
		std::cout << "Min: " << pHistogram->getMinValue() << std::endl;
		std::cout << "Max: " << pHistogram->getMaxValue() << std::endl;

		delete pHistogram;
		return 0;
	}
}

int main()
{
	return Hist::main();
}
#endif