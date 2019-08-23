//
//  Task.hpp
//  taskScheduler
//
//  Created by Rakesh Chavan on 8/12/19.
//  Copyright © 2019 Rakesh Chavan. All rights reserved.
//

#ifndef Task_hpp
#define Task_hpp

#include <memory>
class TaskFunctor;
//class TaskChannel;
/**@brief responsible for creating a task and managing it
 *
 * task will be a basic unit
 * user is expected to invoke the task with his function and some input
 * task is responsible for creating threads and running the funtion on some input
 * the input can later be made into a channel for the task (taskChannel)
 */
class Task{
private:
public:
    Task(int priority, int numChannels);
    virtual ~Task(); // do we need to create specialized tasks?
    
    template<typename T>
    void perform(TaskFunctor* fnc, std::shared_ptr<T> in, std::shared_ptr<T> out);
    
    // cna be done later
    template<typename T>
    void performOnChannelData(TaskFunctor* fnc, int channelNumber, std::shared_ptr<T> out);
    
    template<typename T>
    void performAndPushtoChannel(TaskFunctor* fnc, std::shared_ptr<T> in, int channelNumber);
    
};

#endif /* Task_hpp */
