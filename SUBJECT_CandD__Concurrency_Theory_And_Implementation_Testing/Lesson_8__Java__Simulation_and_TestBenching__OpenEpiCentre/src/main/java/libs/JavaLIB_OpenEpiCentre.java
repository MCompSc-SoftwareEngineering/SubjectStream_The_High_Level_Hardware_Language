package libs;
import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Pointer;
public interface JavaLIB_OpenEpiCentre extends Library
{
    JavaLIB_OpenEpiCentre INSTANCE = (JavaLIB_OpenEpiCentre) Native.load("libCLIB_OpenEpiCentre", JavaLIB_OpenEpiCentre.class);
    Pointer stat_App_FUNCT_MyLIBS__CLIB_MyDLL__generate_Program();
    byte[] stat_App_FUNCT_MyLIBS__CLIB_MyDLL__get_flag_isPGM_INSTANTIATED();
    void stat_App_FUNCT_MyLIBS__CLIB_MyDLL__terminate_Program();
    void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__add_a_b();
    void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__subtract_a_b();
    void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__multiply_a_b();
    void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__divide_a_b();
    byte[] stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value();
    void stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(byte[] value);
    void stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(byte[] value);
}