//
//  TaskChannel.hpp
//  taskScheduler
//
//  Created by Rakesh Chavan on 8/12/19.
//  Copyright © 2019 Rakesh Chavan. All rights reserved.
//

#ifndef TaskChannel_hpp
#define TaskChannel_hpp

#include <queue>
#include <mutex>

/**@brief responsible for pushing content between tasks
 *
 * I think there are two ways to look at it
 *  - a single task channel manager managing multiple channels and tasks relation internally
 *    - singleton
 *    - stores channel to task mapping
 *    - channel dies out as soon as all tasks for that channel die out
 *
 *  - a task owning the channel it has and then passing those channels from one task to another
 *    - channel will have its own identity
 *    - not very sure how to implement this yet
 */

template <class T>
class TaskChannel {
    
public:
    TaskChannel();
    ~TaskChannel();
    void pushDataOnChannel(T data);
    T getDataFromChannel();
    bool isChannelEmpty();
    
private:
    // mutex for the queue
    std::mutex m;
    std::queue<T> channelQueue;
    
   
    //later we can have multiple queues for each channel number may be
    
};

#endif /* TaskChannel_hpp */
