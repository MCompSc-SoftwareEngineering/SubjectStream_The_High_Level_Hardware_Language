package libs;
import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Pointer;
public interface JavaLIB_MyDLL extends Library
{
    JavaLIB_MyDLL INSTANCE = (JavaLIB_MyDLL) Native.load("libCLIB_MyDLL__Cpp_Introduction_To_Dynamic_Link_Library", JavaLIB_MyDLL.class);
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