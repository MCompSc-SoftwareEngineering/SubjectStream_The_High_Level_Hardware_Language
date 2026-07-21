#ifndef CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_WriteEnableForThreadsAt_ServerOutputSend__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_WriteEnableForThreadsAt_ServerOutputSend__App__APP_H
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ServerOutputSend__App
    {
    public:
        WriteEnableForThreadsAt_ServerOutputSend__App();
        virtual ~WriteEnableForThreadsAt_ServerOutputSend__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ServerOutputSend__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__App(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__App(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__App(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend__App(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend__App();
    private:
        static WriteEnableForThreadsAt_ServerOutputSend__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__App__Control();
        static WriteEnableForThreadsAt_ServerOutputSend__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control();
    };
}
#endif
