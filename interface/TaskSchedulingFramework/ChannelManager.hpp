//
//  ChannelManager.hpp
//  taskScheduler
//
//  Created by Rakesh Chavan on 8/12/19.
//  Copyright © 2019 Rakesh Chavan. All rights reserved.
//

#ifndef ChannelManager_hpp
#define ChannelManager_hpp

#include <map>
#include "TaskChannel.hpp"
/**@brief singleton class responsible for managing all channels and task bindings
 *
 *  some kind of registration so that task and channels can be bound will be nice to
 *
 *  for now we can just have some int based mapping
 *  - the task tells which channels it wants (0, 1.. n)
 *  - CM just handles that specific request
 */

// I think having one manager for different data types is a better approach

template<class T> // not sure if this the best way to do things
class ChannelManager{
private:
    ChannelManager();
public:
    static ChannelManager getChannelManager();
    
    void pushDataOnChannel(T data, int channelNumber=0);
    
    T getDataFromChannel(int channelNumber=0);
    
private:
    
    std::map<int, TaskChannel<T> > allChannels; // need not be ordered I guess
};


#endif /* ChannelManager_hpp */
