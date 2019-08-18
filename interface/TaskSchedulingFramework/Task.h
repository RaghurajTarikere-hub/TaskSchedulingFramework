#include <memory>
#include <unordered_map>

namespace Tasking {
    class TaskInput;
    class Task {
    public:
        explicit Task(unsigned int priority, unsigned int numInputs);
        virtual ~Task() noexcept;
        virtual void execute (void) noexcept = 0;
        void addInput(int taskInputKey, std::shared_ptr<TaskInput> taskInput);
        std::shared_ptr<TaskInput> getTaskInputWithKey(int inputKey);
    private:
        class TaskImpl;
        std::unique_ptr<TaskImpl> taskImpl;
    };
} // namespace Tasking
