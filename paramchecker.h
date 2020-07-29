#include <array>
enum status
{
  normal,
  abnormal,
};

template <typename T>
class range
{
public:
    range(T min_value, T max_value): min_value_(min_value),max_value_(max_value){}; 
    
    void setNewRange(T min_value, T max_value)
    {
        min_value_= min_value;
        max_value_= max_value;
    }
    
    status isValid(const T value)
    {
        return(value < min_value_ || value > max_value_) ?
         status::abnormal : status::normal;
    }
private:
    T min_value_;
    T max_value_;
};

class vital : public range<float>
{
public:
    vital( float curr_val, float min_val, float max_val): range(min_val,max_val),value_(curr_val){};
    float value_;
};

template <typename T, size_t N>
status vitalsAreOk(std::array<T,N> &vitals)
{
    for (auto vital: vitals)
    {
        if (vital->isValid(vital->value_) == status::abnormal)
            return status::abnormal;
    }
    return status::normal;
}


