enum eGender
{
    female,
    male
};

class Gender
{
public:
    Gender();
    ~Gender();
    eGender getValue() const;
    void setValue(eGender _gender);
    bool getIsReset() const;
    void setIsReset(bool _isReset); 
private:
    eGender m_gender;
    bool m_isReset;
};
