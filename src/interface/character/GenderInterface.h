namespace Interface
{
    class GenderInterface
    {
    public:
        enum eGender
        {
            female,
            male
        };
        virtual eGender getGender() = 0;
        virtual void setGender(eGender _gender) = 0;
    };
}
