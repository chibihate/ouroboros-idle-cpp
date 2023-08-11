namespace Interface
{
    class GenderBase
    {
    public:
        enum eGender
        {
            female,
            male
        };
        virtual eGender getGender() const = 0;
        virtual void setGender(eGender _gender) = 0;
    };

    class Gender : public GenderBase
    {
    private:
        eGender gender;

    public:
        eGender getGender() const override
        {
            return gender;
        };
        void setGender(eGender _gender) override
        {
            gender = _gender;
        };
    };
} // namespace Interface
