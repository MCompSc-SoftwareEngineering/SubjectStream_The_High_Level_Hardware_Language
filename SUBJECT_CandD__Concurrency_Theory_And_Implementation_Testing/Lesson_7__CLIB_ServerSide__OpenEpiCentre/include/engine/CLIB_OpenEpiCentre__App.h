#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__APP_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__APP_H
#include "CLIB_OpenEpiCentre__Algorithms.h"
#include "CLIB_OpenEpiCentre__Data.h"
#include "CLIB_OpenEpiCentre__Execute.h"
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__App
    {
    public:
        CLIB_OpenEpiCentre__App();
        virtual ~CLIB_OpenEpiCentre__App();
        class CLIB_OpenEpiCentre__Algorithms* dyn_CLASS_get_ptr_Algorithms();
        class CLIB_OpenEpiCentre__Data* dyn_CLASS_get_ptr_Data();
        class CLIB_OpenEpiCentre__Execute* dyn_CLASS_get_ptr_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App();
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App();
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App();
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App();
    private:
        static class CLIB_OpenEpiCentre__Algorithms* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
        static class CLIB_OpenEpiCentre__Data* _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data;
        static class CLIB_OpenEpiCentre__Execute* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute();
        static class CLIB_OpenEpiCentre__Algorithms* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms();
        static class CLIB_OpenEpiCentre__Data* stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data();
        static class CLIB_OpenEpiCentre__Execute* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute();
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_APP_H
