#ifndef RANDOMEINTEGERGENERATOR_H
#define RANDOMEINTEGERGENERATOR_H

#include "HistogramBase.h"
#include <random>
#include <time.h>

namespace Hist
{
    class RandomEintegerGenerator :
        public RandomEintegerGeneratorBase
    {
    public:
        RandomEintegerGenerator();
        EInteger operator()();
    };
}
#endif
