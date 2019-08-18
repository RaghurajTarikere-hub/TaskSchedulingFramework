namespace Tasking {
    template <typename T>
    class TaskChannel {
    public:
        ~TaskChannel() noexcept;
        virtual void push();
        virtual void push(T message);
        virtual T pop();
    private:
        class TaskChannelImpl;
        std::unique_ptr<TaskChannelImpl> taskChannel;
    };  
} //namespace Tasking