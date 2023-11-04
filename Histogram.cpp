#include "Histogram.h"

namespace Hist
{
	Histogram::Histogram(Logger logger) : HistogramBase(std::make_unique<Logger>(logger))
	{

	}
	Histogram::~Histogram()
	{

	}
	void Histogram::add(EInteger value)
	{
		m_HistogramData[value]++;
	}

   /**
   * @brief Histogram::getMode() 
   * @notes possible error situations: When histogram data is empty
   * @return   Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)
   */
	EInteger Histogram::getMode() const
	{
		EInteger result = EInteger::Zero;
		int iHighestOccurance = 0;

		std::map<int, int>::const_iterator it;
		for (it = m_HistogramData.begin(); it != m_HistogramData.end(); it++)
		{
			if (it->second > iHighestOccurance)
			{
				iHighestOccurance = it->second;
				result = (EInteger)it->first;
			}
		}
		return result;
	}
   /**
   * @brief Histogram::getMinValue()
   * @notes possible error situations: When histogram data is empty
   * @return   Return the smallest value in the data set, according to default ordering relation of integer numbers
   */
	EInteger Histogram::getMinValue() const
	{
		EInteger result = EInteger::Four;
		int iMinValue = INT_MAX;

		std::map<int, int>::const_iterator it;
		for (it = m_HistogramData.begin(); it != m_HistogramData.end(); it++)
		{
			if (it->first < iMinValue)
			{
				iMinValue = it->first;
				result = (EInteger)it->first;
			}
		}
		return result;
	}

   /**
   * @briefHistogram::getMaxValue()
   * @notes possible error situations: When histogram data is empty
   * @return  Return the largest value in the data set
   */
	EInteger Histogram::getMaxValue() const
	{
		EInteger result = EInteger::Zero;
		int iMaxValue = INT_MIN;

		std::map<int, int>::const_iterator it;
		for (it = m_HistogramData.begin(); it != m_HistogramData.end(); it++)
		{
			if (it->first > iMaxValue)
			{
				iMaxValue = it->first;
				result = (EInteger)it->first;
			}
		}
		return result;
	}
}
