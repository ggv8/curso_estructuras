# include "ISearch.h"
# include <math.h>

# define NOT_FOUND -1

class Interpolation : public ISearch
{
    public:        
        int search(List<int>* pNumberList, int pKey ) {
            if (pNumberList->getSize() == 0) {
                return NOT_FOUND;
            }
            if (pNumberList->getSize() == 1) {
                if (*pNumberList->find(0) != pKey)
                    return NOT_FOUND;
                return 0;
            }

            int hi = pNumberList->getSize() - 1;
            int low = 0;
            int minVal, maxVal, itemFound, index;
            double position;
 
            while (true) {
                minVal = *pNumberList->find(low);
                maxVal = *pNumberList->find(hi);

                if (pKey < minVal || pKey > maxVal) {
                    return NOT_FOUND;
                }
                position = (pKey - minVal);
                position /= (maxVal - minVal);
                index = std::round(position * (hi - low) + low);
                itemFound = *pNumberList->find(index);
                
                if (itemFound == pKey) {
                    break;
                } else if (itemFound < pKey) {
                    low = ++index;
                } else {
                    hi = --index;
                }
                if (hi == low) {
                    return NOT_FOUND;
                }
            }
            return index;
        }
};