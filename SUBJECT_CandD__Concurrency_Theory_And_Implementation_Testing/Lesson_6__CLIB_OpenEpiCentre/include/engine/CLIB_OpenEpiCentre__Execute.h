#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_EXECUTE_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_EXECUTE_H
#include "CLIB_OpenEpiCentre__Framework.h"
#include "CLIB_OpenEpiCentre__Execute__Control.h"
#include <list>
#include <thread>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Execute
    {
    public:
        CLIB_OpenEpiCentre__Execute();
        virtual ~CLIB_OpenEpiCentre__Execute();
        class CLIB_OpenEpiCentre__Execute__Control* dyn_CLASS_get_ptr_Execute_Control();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(class CLIB_OpenEpiCentre__Framework* obj);
        void* dyn_PGM_get_ConcurrentQue_Server();
        void* dyn_PGM_get_WriteEnable_ServerInputReceive();
        void* dyn_PGM_get_WriteEnable_ServerOutputSend();
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
    private:
        static class CLIB_OpenEpiCentre__Execute__Control* _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
        static std::list<std::thread*>* _stat_REG_List_Of_Threads;
        static void* _stat_PGM_ConcurrentQue_Server;
        static void* _stat_PGM_WriteEnable_ServerInputReceive;
        static void* _stat_PGM_WriteEnable_ServerOutputSend;
        static void stat_CLASS_boot1_DEFINE_Execute_Control();
        static void stat_CLASS_boot3_INITIALISE_Execute_Control();
        static class CLIB_OpenEpiCentre__Execute__Control* stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Execute__Control();
        static void stat_REG_boot1_DEFINE_List_Of_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(class CLIB_OpenEpiCentre__Framework* obj);
        static void stat_REG_boot3_INITIALISE_List_Of_Threads(class CLIB_OpenEpiCentre__Framework* obj);
        static std::list<std::thread*>* stat_PGM_get_ptr_List_Of_Threads();
        static void stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        static void stat_PGM_boot1_DEFINE_ServerInputReceive();
        static void stat_PGM_boot1_DEFINE_ServerOutputSend();
        static void stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        static void stat_PGM_boot3_INITIALISE_ServerInputReceive();
        static void stat_PGM_boot3_INITIALISE_ServerOutputSend();
        static void* stat_PGM_get_ptr_ConcurrentQue_Server();
        static void* stat_PGM_get_ptr_WriteEnable_ServerInputReceive();
        static void* stat_PGM_get_ptr_WriteEnable_ServerOutputSend();
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_EXECUTE_H