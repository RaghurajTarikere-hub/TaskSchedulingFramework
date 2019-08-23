//
//  TaskFunctor.h
//  taskScheduler
//
//  Created by Rakesh Chavan on 8/12/19.
//  Copyright © 2019 Rakesh Chavan. All rights reserved.
//

#ifndef TaskFunctor_h
#define TaskFunctor_h

#include <memory>
/**@brief abc for functor objects
 *
 * expect users to inherit from this class so that functions can be passed to the tasks
 *
 *
 */

class TaskFunctor{
public:
    
    TaskFunctor() {};
    virtual ~TaskFunctor() {};
    
    template<typename T>
    virtual void operator(std::shared_ptr<T> in, std::shared_ptr<T> out) =0;
private:
    // add state if needed - may not be needed
    
};

#endif /* TaskFunctor_h */