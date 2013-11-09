#ifndef __IFACADE_HPP__
#define __IFACADE_HPP__
#include <string> 

#include "inotifier.hpp"
#include "imediator.hpp"
#include "inotification.hpp"
#include "iproxy.hpp"
#include "icommand.hpp"

class IFacade : public  INotifier
{
    public:
        virtual ~IFacade(){}

        virtual void registerProxy(IProxyPtr proxy)  =0 ;

        virtual IProxyPtr retrieveProxy(const std::string & proxyName) =0; 

        virtual IProxyPtr removeProxy(const std::string & proxyName) =0; 

        virtual bool hasProxy (const std::string & proxyName) =0; 

        virtual void registerCommand(const std::string & noteName, ICommandPtr ) =0; 

        virtual void removeCommand(const std::string & notificationName) =0;  

        virtual bool hasCommand(const std::string & notificationName) = 0; 

        virtual void registerMediator( IMediatorPtr  mediator) =0; 

        virtual IMediatorPtr retrieveMediator(const std::string & mediatorName) =0; 

        virtual IMediatorPtr removeMediator(const std::string & mediatorName) =0; 

        virtual bool hasMediator(const std::string & mediatorName) =0; 

        /**
		 * Notify the <code>IObservers</code> for a particular <code>INotification</code>.
		 * 
		 * <P>
		 * All previously attached <code>IObservers</code> for this <code>INotification</code>'s
		 * list are notified and are passed a reference to the <code>INotification</code> in 
		 * the order in which they were registered.</P>
		 * <P>
		 * NOTE: Use this method only if you are sending custom Notifications. Otherwise
		 * use the sendNotification method which does not require you to create the
		 * Notification instance.</P> 
		 * 
		 * @param notification the <code>INotification</code> to notify <code>IObservers</code> of.
		 */

        virtual void notifyObservers(const INotification & note) =0; 

};

typedef boost::shared_ptr<IFacade> IFacadePtr; 

#endif // 


