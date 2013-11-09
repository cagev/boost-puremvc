#ifndef __NOTIFY_CONTEXT_HPP__
#define __NOTIFY_CONTEXT_HPP__
#include <boost/any.hpp>

class NotifyContext
{
public:
	NotifyContext(boost::any  pCtx = boost::any()) { context = pCtx; }

	boost::any context;  //the owner of the notify method

	//TODO ,any have no == 
	//bool operator == (const NotifyContext & self)const 
	//{
	//	return this->context == self.context; 
	//}
	operator bool ()const 
	{
		return !context.empty() ; 
	}
	bool  operator  !()const 
	{
		return context.empty(); 
	}
};

/*
bool operator ==(NotifyContext & left, NotifyContext & right)
{
	return left.context == right.context; 
}
*/


#endif // 

 
