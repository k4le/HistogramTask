#include "HistogramBase.h"
namespace Hist

{
	HistogramBase::HistogramBase(std::unique_ptr<Logger> ptr)
	{
		m_log = std::move(ptr);
	}

	HistogramBase::HistogramBase(const HistogramBase&)
	{

	}

	HistogramBase::HistogramBase(HistogramBase&&)
	{

	}

	HistogramBase::~HistogramBase()
	{

	}
}

