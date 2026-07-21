#ifndef CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_WriteEnableForThreadsAt_ServerInputReceive__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_WriteEnableForThreadsAt_ServerInputReceive__App__APP_H
#include "../include/WriteEnableForThreadsAt_ServerInputReceive__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServerInputReceive
{
    class WriteEnableForThreadsAt_ServerInputReceive__App
    {
    public:
        WriteEnableForThreadsAt_ServerInputReceive__App();
        virtual ~WriteEnableForThreadsAt_ServerInputReceive__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ServerInputReceive__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive__App();
    private:
        static WriteEnableForThreadsAt_ServerInputReceive__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App__Control();
        static WriteEnableForThreadsAt_ServerInputReceive__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control();
    };
}
#endif
