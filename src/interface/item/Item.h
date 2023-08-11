namespace Interface
{
    namespace Item
    {
        class ItemBase
        {
        public:
            enum eRarity
            {
                common,
                rare,
                epic,
                legendary
            };
            virtual bool getWearing() const = 0;
            virtual bool getEating() const = 0;
            virtual eRarity getRarity() const = 0;

            virtual void setWearing(bool _isWearing) = 0;
            virtual void setEating(bool _isEating) = 0;
            virtual void setRarity(eRarity _rarity) = 0;
        };

        class Item : public ItemBase
        {
        private:
            eRarity rarity;
            bool isWearing;
            bool isEating;

        public:
            bool getWearing() const override
            {
                return isWearing;
            }

            bool getEating() const override
            {
                return isEating;
            }
            eRarity getRarity() const override
            {
                return rarity;
            }

            void setWearing(bool _isWearing)
            {
                isWearing = _isWearing;
            }
            void setEating(bool _isEating)
            {
                isEating = _isEating;
            }
            void setRarity(eRarity _rarity)
            {
                rarity = _rarity;
            }
        };
    } // namespace Item
} // namespace Interface