# Implementing a new praise.

----
----
## OpenAvrilCFSD.

----
### Server_Assembly.
 * Create three new classes as a praise set in folder root:'src/main/java/structs/praise_sets'.
   - Input_praiseMAX.java
   - Algorithm_praiseMAX.java
   - Output_praiseMAX.java

**Input_praiseMAX.java**
````
package structs.praise_sets;
import engine.Framework;
public class Input_praiseMAX {
    private static boolean _input_praiseMAX_checkIsValid;
// public.
    public void dyn_REG_boot1_DEFINE_Input_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot1_DEFINE_Input_praiseMAX().%n");
        System.out.printf("exiting dyn_REG_boot1_DEFINE_Input_praiseMAX().%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Input_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot2_SUBSTANTIATE_Input_praiseMAX().%n");
        stat_REG_boot2_SUBSTANTIATE_Input_checkIsValid();
        System.out.printf("exiting dyn_REG_boot2_SUBSTANTIATE_Input_praiseMAX().%n");
    }
    public void dyn_REG_boot3_INITIALISE_Input_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot3_INITIALISE_Input_praiseMAX().%n");
        stat_REG_boot3_INITIALISE_Input_checkIsValid();
        System.out.printf("exiting dyn_REG_boot3_INITIALISE_Input_praiseMAX().%n");
    }
    public void dyn_REG_boot4_INSTANTIATE_Input_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot4_INSTANTIATE_Input_praiseMAX().%n");
        System.out.printf("exiting dyn_REG_boot4_INSTANTIATE_Input_praiseMAX().%n");
    }
    public boolean dyn_REG_get_input_praiseMAX_checkIsValid() {
        return stat_REG_get_input_praiseMAX_checkIsValid();
    }
    public void dyn_REG_set_input_praiseMAX_checkIsValid(boolean newBoolean) {
        stat_REG_set_input_praiseMAX_checkIsValid(newBoolean);
    }
    public static void stat_CLASS_boot0_DECLAIRE_Input_praiseMAX() {
        System.out.printf("entered stat_CLASS_boot0_DECLAIRE_Input_praiseMAX().%n");
        System.out.printf("exiting stat_CLASS_boot0_DECLAIRE_Input_praiseMAX().%n");
    }
    public static void stat_CLASS_boot1_DEFINE_Input_praiseMAX() {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Input_praiseMAX().%n");
        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Input_praiseMAX().%n");
    }
    public static void stat_CLASS_boot3_INITIALISE_Input_praiseMAX() {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Input_praiseMAX().%n");
        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Input_praiseMAX().%n");
    }
    public static void stat_REG_boot0_DECLAIRE_Input_praiseMAX() {
        System.out.printf("entered stat_REG_boot0_DECLAIRE_Input_praiseMAX().%n");
        System.out.printf("exiting stat_REG_boot0_DECLAIRE_Input_praiseMAX().%n");
    }
// private.
    private static void stat_REG_boot2_SUBSTANTIATE_Input_checkIsValid() {
        System.out.printf("entered stat_REG_boot2_SUBSTANTIATE_Input_valueA().%n");
        _input_praiseMAX_checkIsValid = true;
        System.out.printf("exiting stat_REG_boot2_SUBSTANTIATE_Input_valueA().%n");
    }
    private static void stat_REG_boot3_INITIALISE_Input_checkIsValid() {
        System.out.printf("entered stat_REG_boot3_INITIALISE_Input_valueA().%n");
        _input_praiseMAX_checkIsValid = false;
        System.out.printf("exiting stat_REG_boot3_INITIALISE_Input_valueA().%n");
    }
    private static boolean stat_REG_get_input_praiseMAX_checkIsValid() {
        return _input_praiseMAX_checkIsValid;
    }
    private static void stat_REG_set_input_praiseMAX_checkIsValid(boolean newBoolean) {
        _input_praiseMAX_checkIsValid = newBoolean;
    }
}
````

**Output_praiseMAX.java**
````
package structs.praise_sets;
import engine.Framework;
public class Output_praiseMAX {
    private static boolean _output_praiseMAX_checkIsValid;
    // public.
    public void dyn_REG_boot1_DEFINE_Output_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot1_DEFINE_Output_praiseMAX().%n");
        System.out.printf("exiting dyn_REG_boot1_DEFINE_Output_praiseMAX().%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Output_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot2_SUBSTANTIATE_Output_praiseMAX().%n");
        stat_REG_boot2_SUBSTANTIATE_Output_checkIsValid();
        System.out.printf("exiting dyn_REG_boot2_SUBSTANTIATE_Output_praiseMAX().%n");
    }
    public void dyn_REG_boot3_INITIALISE_Output_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot3_INITIALISE_Output_praiseMAX().%n");
        stat_REG_boot3_INITIALISE_Output_checkIsValid();
        System.out.printf("exiting dyn_REG_boot3_INITIALISE_Output_praiseMAX().%n");
    }
    public void dyn_REG_boot4_INSTANTIATE_Output_praiseMAX(Framework obj) {
        System.out.printf("entered dyn_REG_boot4_INSTANTIATE_Output_praiseMAX().%n");
        System.out.printf("exiting dyn_REG_boot4_INSTANTIATE_Output_praiseMAX().%n");
    }
    public boolean dyn_REG_get_output_praiseMAX_checkIsValid() {
        return stat_REG_get_output_praiseMAX_checkIsValid();
    }
    public void dyn_REG_set_output_praiseMAX_checkIsValid(boolean newBoolean) {
        stat_REG_set_output_praiseMAX_checkIsValid(newBoolean);
    }
    public static void stat_CLASS_boot0_DECLAIRE_Output_praiseMAX() {
        System.out.printf("entered stat_CLASS_boot0_DECLAIRE_Output_praiseMAX().%n");
        System.out.printf("exiting stat_CLASS_boot0_DECLAIRE_Output_praiseMAX().%n");
    }
    public static void stat_CLASS_boot1_DEFINE_Output_praiseMAX() {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Output_praiseMAX().%n");
        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Output_praiseMAX().%n");
    }
    public static void stat_CLASS_boot3_INITIALISE_Output_praiseMAX() {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Output_praiseMAX().%n");
        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Output_praiseMAX().%n");
    }
    public static void stat_REG_boot0_DECLAIRE_Output_praiseMAX() {
        System.out.printf("entered stat_REG_boot0_DECLAIRE_Output_praiseMAX().%n");
        System.out.printf("exiting stat_REG_boot0_DECLAIRE_Output_praiseMAX().%n");
    }
    // private.
    private static void stat_REG_boot2_SUBSTANTIATE_Output_checkIsValid() {
        System.out.printf("entered stat_REG_boot2_SUBSTANTIATE_Output_valueA().%n");
        _output_praiseMAX_checkIsValid = true;
        System.out.printf("exiting stat_REG_boot2_SUBSTANTIATE_Output_valueA().%n");
    }
    private static void stat_REG_boot3_INITIALISE_Output_checkIsValid() {
        System.out.printf("entered stat_REG_boot3_INITIALISE_Output_valueA().%n");
        _output_praiseMAX_checkIsValid = false;
        System.out.printf("exiting stat_REG_boot3_INITIALISE_Output_valueA().%n");
    }
    private static boolean stat_REG_get_output_praiseMAX_checkIsValid() {
        return _output_praiseMAX_checkIsValid;
    }
    private static void stat_REG_set_output_praiseMAX_checkIsValid(boolean newBoolean) {
        _output_praiseMAX_checkIsValid = newBoolean;
    }
}
````

**Algorithm_praiseMAX.java**
````
package structs.praise_sets;
public class Algorithm_praiseMAX {
    public Algorithm_praiseMAX() {

    }
    public void doWork(Input_praiseMAX subsetIn, Output_praiseMAX subsetOut) {
        subsetOut.dyn_REG_set_output_praiseMAX_checkIsValid(subsetIn.dyn_REG_get_input_praiseMAX_checkIsValid());
    }
}
````

### CLIB_OpenEpicentre.
**IO_ListenRespond.java**

line 162:
````
Input_praiseMAX subset_of_input_for_praiseMAX = null;
````

line 293:
````
switch (thread_Listen_switch_A[0]) {
   case Integer.MIN_VALUE: {
         switch (thread_Listen_switch_A[1]) {
            case Integer.MIN_VALUE: {
               subset_of_input_for_praiseMAX = (Input_praiseMAX)_stat_REG_Buffer_For_Input.dyn_REG_get_InputSubset();
            }
         }
      }
   }
}   
````

----
### Client_Assembly.
