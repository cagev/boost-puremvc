#ifndef __ICOMMAND_HPP__
#define __ICOMMAND_HPP__
#include "inotification.hpp"
#include <boost/shared_ptr.hpp>

class ICommand
{
    public:
        virtual ~ICommand()
        {
        }
        virtual void execute(const INotification & notification) =0; 
};


typedef boost::shared_ptr<ICommand> ICommandPtr; 



#endif // 


