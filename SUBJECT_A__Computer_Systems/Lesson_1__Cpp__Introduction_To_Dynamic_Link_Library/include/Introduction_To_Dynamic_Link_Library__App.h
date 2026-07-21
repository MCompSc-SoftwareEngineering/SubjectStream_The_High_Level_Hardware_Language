#ifndef CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__APP_H
#define CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__APP_H
#include "../include/Introduction_To_Dynamic_Link_Library__App.h"
#include "../include/Introduction_To_Dynamic_Link_Library__Data.h"
namespace MyLIBS
{
    class Introduction_To_Dynamic_Link_Library__App
    {
    public:
        Introduction_To_Dynamic_Link_Library__App();
        virtual ~Introduction_To_Dynamic_Link_Library__App();
         void dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App();
        void dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__App();
        void dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App();
        void dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__App();
        class Introduction_To_Dynamic_Link_Library__Algorithms* dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms();
        class Introduction_To_Dynamic_Link_Library__Data* dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data();

        static void stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App();
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App();
        static void stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App();
    private:
        static class Introduction_To_Dynamic_Link_Library__Algorithms* _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms;
        static class Introduction_To_Dynamic_Link_Library__Data* _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data;
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms();
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data();
        static class Introduction_To_Dynamic_Link_Library__Algorithms* stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Algorithms();
        static class Introduction_To_Dynamic_Link_Library__Data* stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Data();
    };
}
#endif