#include "Item.h"
#include "../common/Gender.h"

namespace Interface
{
    namespace Item
    {
        class Equipment : public Item, Gender
        {
        private:
            unsigned int level;

        public:
            unsigned int getLevel() const
            {
                return level;
            }

            void setLevel(unsigned int _level)
            {
                level = _level;
            }
        };
    }
}