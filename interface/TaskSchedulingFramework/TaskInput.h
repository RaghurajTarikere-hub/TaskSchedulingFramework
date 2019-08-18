#include <memory>

namespace Tasking {
    class TaskChannel;
    class TaskInput {
    public:
        explicit TaskInput(unsigned int numOfActivations);
        ~TaskInput() noexcept;
        void associateTaskChannel(std::shared_ptr<TaskChannel> taskChannel) noexcept;
        std::shared_ptr<TaskChannel> getAssociatedTaskChannel() const;
        bool isActivated() const;
    private:
        class TaskInputImpl;
        std::unique_ptr<TaskInputImpl> taskInputImpl;
    };
} //namespace Tasking