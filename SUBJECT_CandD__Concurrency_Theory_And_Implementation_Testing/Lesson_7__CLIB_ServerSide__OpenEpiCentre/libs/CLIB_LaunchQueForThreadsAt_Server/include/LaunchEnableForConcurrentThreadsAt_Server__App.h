#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#include <cstdint>

#include "LaunchEnableForConcurrentThreadsAt_Server__Control.h"

namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server__App
    {
     public:
        LaunchEnableForConcurrentThreadsAt_Server__App();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server__App();
        void dyn_APP_LaunchEnableForConcurrentThreadsAt_Server__thread_Start(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID);
        void dyn_APP_LaunchEnableForConcurrentThreadsAt_Server__thread_End(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID);
         LaunchEnableForConcurrentThreadsAt_Server__Control* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control();
    private:
        static LaunchEnableForConcurrentThreadsAt_Server__Control* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server__LaunchConcurrency_Control;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Control();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Control();
        static LaunchEnableForConcurrentThreadsAt_Server__Control* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control();    };
}
#endif