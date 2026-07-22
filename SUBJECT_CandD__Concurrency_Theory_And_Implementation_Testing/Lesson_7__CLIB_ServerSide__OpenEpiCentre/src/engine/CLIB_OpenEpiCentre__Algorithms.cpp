#include "../../include/engine/CLIB_OpenEpiCentre__Algorithms.h"
#include <iostream>
    std::list<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::CLIB_OpenEpiCentre__Algorithms()
    {
        std::cout << "entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        std::cout << "exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::~CLIB_OpenEpiCentre__Algorithms()
    {
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadId)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre__Framework* obj, CLIB_OpenEpiCentre_STRUCT__Concurrent* objConcurrent)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Algorithm()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(obj, objConcurrent);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "entered stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Algorithm()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Algorithm()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent()
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre__Framework* obj)
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<CLIB_OpenEpiCentre_STRUCT__Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == nullptr) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent()->resize(static_cast<uint8_t>(3));//NUMBER OF CONCURRENT THREADS.
        for (uint8_t concurrentThreadId = 0; concurrentThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentThreadId);
            *temp = nullptr;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre__Framework* obj, CLIB_OpenEpiCentre_STRUCT__Concurrent* objConcurrent)
    {
        for (uint8_t concurrentThreadId = 0; concurrentThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentThreadId);
            *temp = objConcurrent;
        }
    }
    std::list<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
    {
        return _stat_REG_ptr_list_Of_ptr_Concurrent;
    }