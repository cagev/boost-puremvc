#ifndef __SINGLTON_HPP__
#define __SINGLTON_HPP__

template <class T> 
class Singlton
{
    protected:
		Singlton()  {}
	public:
		static T* getInstance() 
		{   
			static T _ins; 
			return &_ins; 
		}

        ~Singlton()
        {
        }
};



#endif // 
