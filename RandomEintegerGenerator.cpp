#include "RandomEintegerGenerator.h"

namespace Hist
{
    /**
    * @brief andomEintegerGenerator::operator()
    * @notes possible error situations: If new values will be added to Einteger enum. min and max values should be changed
    * - Quick soulution for this could be to define MAX_EINTEGER and use that or (better solution) refactory code
    * @return pseudo random EInteger value
    */
    RandomEintegerGenerator::RandomEintegerGenerator()
    {
        // Seed the time
        srand(time(NULL));
    }

    EInteger RandomEintegerGenerator::operator()()
    {
        int iMin = 0;
        int iMax = 4;
        int randomNumber = rand() % (iMax - iMin + 1) + iMin;
        return static_cast<EInteger>(randomNumber);
    }
}