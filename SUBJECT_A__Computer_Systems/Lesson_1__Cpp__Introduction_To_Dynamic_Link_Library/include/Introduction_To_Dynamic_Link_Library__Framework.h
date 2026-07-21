#ifndef CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__FRAMEWORK_H
#define CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__FRAMEWORK_H
#include "Introduction_To_Dynamic_Link_Library__App.h"
#include "Introduction_To_Dynamic_Link_Library__Global.h"
#include "Introduction_To_Dynamic_Link_Library__Input.h"
#include "Introduction_To_Dynamic_Link_Library__Output.h"
namespace MyLIBS
{
    class Introduction_To_Dynamic_Link_Library__Framework
    {
    public:
        Introduction_To_Dynamic_Link_Library__Framework();
        virtual ~Introduction_To_Dynamic_Link_Library__Framework();
        void dyn_APP_Introduction_To_Dynamic_Link_Library__stat_STRUCT_boot1_DEFINE();
        void dyn_APP_Introduction_To_Dynamic_Link_Library__stat_STRUCT_boot3_INITIALISE();
        void dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework();
        void dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Framework();
        void dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework();
        void dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Framework();
        class Introduction_To_Dynamic_Link_Library__App* dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App();
        static class Introduction_To_Dynamic_Link_Library__Global* dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Global();
        struct Introduction_To_Dynamic_Link_Library__Input* dyn_STRUCT_get_REG_Introduction_To_Dynamic_Link_Library__Input();
        struct Introduction_To_Dynamic_Link_Library__Output* dyn_STRUCT_get_REG_Introduction_To_Dynamic_Link_Library__Output();
        static void stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework();
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework();
        static void stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework();
    private:
        static class Introduction_To_Dynamic_Link_Library__App* _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__App;
        static class Introduction_To_Dynamic_Link_Library__Global* _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Global;
        static struct Introduction_To_Dynamic_Link_Library__Input* _stat_STRUCT_Introduction_To_Dynamic_Link_Library__Input;
        static struct Introduction_To_Dynamic_Link_Library__Output* _stat_STRUCT_Introduction_To_Dynamic_Link_Library__Output;
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App();
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global();
        static class Introduction_To_Dynamic_Link_Library__App* stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App();
        static class Introduction_To_Dynamic_Link_Library__Global* stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Global();
        static void stat_STRUCT_boot1_DEFINE_User_Introduction_To_Dynamic_Link_Library__Input();
        static void stat_STRUCT_boot1_DEFINE_User_Introduction_To_Dynamic_Link_Library__Output();
        static void stat_STRUCT_boot3_INITIALISE_User_Introduction_To_Dynamic_Link_Library__Input();
        static void stat_STRUCT_boot3_INITIALISE_User_Introduction_To_Dynamic_Link_Library__Output();
        static struct Introduction_To_Dynamic_Link_Library__Input* stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Input();
        static struct Introduction_To_Dynamic_Link_Library__Output* stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Output();
    };
}
#endif