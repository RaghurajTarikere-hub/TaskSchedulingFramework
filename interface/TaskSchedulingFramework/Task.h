#include <memory>

namespace Tasking {
    class TaskInput;
    class Task {
    public:
        Task(unsigned int priority, unsigned int numInputs);
        virtual ~Task();
        virtual void execute (void) noexcept = 0;
        void addInput(int inputKey, std::shared_ptr<TaskInput> taskInput) noexcept;
    private:
        unsigned int priority;
        unsigned int numInputs;
    };
} // namespace Tasking
