#ifndef CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__DATA_H
#define CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__DATA_H
#include "Introduction_To_Dynamic_Link_Library__Input.h"
#include "Introduction_To_Dynamic_Link_Library__Output.h"
namespace MyLIBS
{
    class Introduction_To_Dynamic_Link_Library__Data
    {
    public:
        Introduction_To_Dynamic_Link_Library__Data();
        virtual ~Introduction_To_Dynamic_Link_Library__Data();
        void dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data();
        void dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Data();
        void dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data(struct Introduction_To_Dynamic_Link_Library__Input* structIntroduction_To_Dynamic_Link_Library__Input, struct Introduction_To_Dynamic_Link_Library__Output* structIntroduction_To_Dynamic_Link_Library__Output);
        void dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Data();
        struct Introduction_To_Dynamic_Link_Library__Input* dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input();
        struct Introduction_To_Dynamic_Link_Library__Output* dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output();
        static void stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data();
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data();
        static void stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data();
    private:
        static struct Introduction_To_Dynamic_Link_Library__Input* _stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Input;
        static struct Introduction_To_Dynamic_Link_Library__Output* _stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Output;
        static void stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input();
        static void stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output();
        static void stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input(struct Introduction_To_Dynamic_Link_Library__Input* structIntroduction_To_Dynamic_Link_Library__Input);
        static void stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output(struct Introduction_To_Dynamic_Link_Library__Output* structIntroduction_To_Dynamic_Link_Library__Output);
        static struct Introduction_To_Dynamic_Link_Library__Input* stat_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input();
        static struct Introduction_To_Dynamic_Link_Library__Output* stat_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output();
    };
}
#endif