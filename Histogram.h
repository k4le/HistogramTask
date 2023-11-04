#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include "HistogramBase.h"

#include <map>

namespace Hist
{

	class Histogram : public HistogramBase
	{
    public:
        Histogram() = delete;

        Histogram(Logger logger);
        ~Histogram();

        void add(EInteger value);

        // Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)

        EInteger getMode() const;

        // Return the smallest value in the data set, according to default ordering relation of integer numbers

        EInteger getMinValue() const;

        // Return the largest value in the data set

        EInteger getMaxValue() const;

    private:
        //Key: EInteger, Value: count of values.
        std::map<int, int> m_HistogramData;

	};
}
#endif