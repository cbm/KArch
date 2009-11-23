#ifndef blackboard_h_
#define blackboard_h_ 1

#include <map>
#include <string>
#include "architecture/communicationProxy.h"
#include "Sockets/Mutex.h"

class Provider;
class Representation;


typedef map<string, vector<Representation*> > Perception;
typedef map<string, Perception*> RobotBlackboad;

class Blackboard {

private:
	friend class Provider;
	friend class Representation;

	Mutex mx;
	const std::string agent_name;
	std::map<std::string, Provider *> Providers;
	std::map<string,RobotBlackboard*> world_view;
	std::map<string,RobotBlackboard*> new_items;
	std::map<string,DomainInfo> domains;
	CommunicationProxy* comProxy;
public:
	Blackboard();
	explicit Blackboard(const std::string& name);
//
//	Provider * GetProvInstanceByName(const std::string name) const {
//		const std::map<std::string, Provider*>::const_iterator it =
//				Providers.find(name);
//		return it == Providers.end() ? NULL : it->second;
//	}
//
//	Representation * GetRepInstanceByName(const std::string name) const {
//		const std::map<std::string, Representation*>::const_iterator it =
//				Representations.find(name);
//		return it == Representations.end() ? NULL : it->second;
//	}

	void put(std::string node,std::string agent, std::rep_name,Representation* rep);

	/*
    * Setters and Getters
    * */
   void setComProxy(CommunicationProxy* comProxy);

   CommunicationProxy* getComProxy() const;

   void setWorld(map<string, Robot*> world);

   map<string, Robot*> getWorld() const;

};
typedef class Blackboard Blackboard;
#endif // _blackboard_h_
