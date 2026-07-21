#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__App.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Global.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h"
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ServerOutputSend__Framework
    {
    public:
        WriteEnableForThreadsAt_ServerOutputSend__Framework();
        virtual ~WriteEnableForThreadsAt_ServerOutputSend__Framework();
        WriteEnableForThreadsAt_ServerOutputSend__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App();
        WriteEnableForThreadsAt_ServerOutputSend__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Framework(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Framework(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Framework(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend__Framework(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
    private:
        static WriteEnableForThreadsAt_ServerOutputSend__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App;
        static WriteEnableForThreadsAt_ServerOutputSend__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        static WriteEnableForThreadsAt_ServerOutputSend__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App();
        static WriteEnableForThreadsAt_ServerOutputSend__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global();
    };
}
#endif