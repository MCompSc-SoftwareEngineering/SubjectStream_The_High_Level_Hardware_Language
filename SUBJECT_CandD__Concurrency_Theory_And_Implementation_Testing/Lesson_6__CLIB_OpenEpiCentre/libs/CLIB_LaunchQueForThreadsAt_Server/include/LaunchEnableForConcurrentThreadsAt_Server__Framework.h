#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_FRAMEWORK_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_FRAMEWORK_H
namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server__Framework
    {
     public:
        LaunchEnableForConcurrentThreadsAt_Server__Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server__Framework();
        class LaunchEnableForConcurrentThreadsAt_Server__App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App();
        class LaunchEnableForConcurrentThreadsAt_Server__Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global();
        void dyn_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Framework(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        void dyn_dyn_PGM_boot4_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server__Framework(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
    private:
        static class LaunchEnableForConcurrentThreadsAt_Server__App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App;
        static class LaunchEnableForConcurrentThreadsAt_Server__Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        static LaunchEnableForConcurrentThreadsAt_Server__App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App();
        static LaunchEnableForConcurrentThreadsAt_Server__Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global();    };
};
#endif