#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__ALGORITHMS_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__ALGORITHMS_H
#include "../engine/CLIB_OpenEpiCentre__Framework.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include <cstdint>
#include <list>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Algorithms
    {
    public:
        CLIB_OpenEpiCentre__Algorithms();
        virtual ~CLIB_OpenEpiCentre__Algorithms();
        struct CLIB_OpenEpiCentre_STRUCT__Concurrent* dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Concurrent* objConcurrent);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
    private:
        static std::list<struct CLIB_OpenEpiCentre_STRUCT__Concurrent*>* _stat_REG_ptr_list_Of_ptr_Concurrent;
        static void stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        static void stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(class CLIB_OpenEpiCentre__Framework* obj);
        static void stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Concurrent* objConcurrent);
        static std::list<struct CLIB_OpenEpiCentre_STRUCT__Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent();
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_ALGORITHMS_H
