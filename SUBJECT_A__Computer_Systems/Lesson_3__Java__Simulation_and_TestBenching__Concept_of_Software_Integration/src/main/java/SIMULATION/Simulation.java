package SIMULATION;
import engine.Framework;
import engine.Global;
import io.*;
import structs.Input;
import structs.Output;
import structs.praise_sets.Input_praise0;
import structs.praise_sets.Input_praise1;
import structs.praise_sets.Input_praise2;
import structs.praise_sets.Input_praise3;
import structs.praise_sets.Output_praise0;
import structs.praise_sets.Output_praise1;
import structs.praise_sets.Output_praise2;
import structs.praise_sets.Output_praise3;
import java.util.Scanner;
public class Simulation
{
    private static Framework obj;
    public static Input _SIM_stat_REG_input_Sample;
    public static Output _SIM_stat_REG_output_Sample;
    private static Scanner _stat_REG_scanner;
// public.
    public Simulation(Framework objIn, Input _DEFAULT_inputSample, Output _DEFAULT_outputSample) {
        obj = null;
        obj = objIn;

        _SIM_stat_REG_input_Sample = null;
        _SIM_stat_REG_input_Sample = _DEFAULT_inputSample;
        _SIM_stat_REG_input_Sample.dyn_REG_boot2_SUBSTANTIATE_Input();
        _SIM_stat_REG_input_Sample = _DEFAULT_inputSample;

        _SIM_stat_REG_output_Sample = null;
        _SIM_stat_REG_output_Sample = _DEFAULT_outputSample;
        _SIM_stat_REG_output_Sample.dyn_REG_boot2_SUBSTANTIATE_Output();
        _SIM_stat_REG_output_Sample = _DEFAULT_outputSample;

        _stat_REG_scanner = null;
        _stat_REG_scanner = new Scanner(System.in);
        while(_stat_REG_scanner == null) { }
    }
    public static void Thread_Input_Peripheral_Scanner(Framework obj, byte threadId) {
        System.out.printf("thread " + threadId + ": Enter THREAD member function on thread.%n");
        boolean doneOnce = false;
        boolean checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            if (!doneOnce)
            {
                obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(threadId, true);
                System.out.printf("thread " + threadId + ": isThreadInitialised => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(threadId) + ".%n");
                doneOnce = true;
            }
            boolean temp = true;
            for(byte index = 0; index < 3; index++) {
                if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(index)) {
                    temp = false;
                }
            }
            obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Flag_is_SystemInitialised(temp);
            if(obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_ConditionCode.app_FUNCT_write_End(1);
        }
        System.out.printf("thread " + threadId + ": Initialised Thread.%n");
        checkPass = false;
        boolean temp = true;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            while(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                temp = true;
                if(!WriteQue_ConditionCode.app_FUNCT_get_flag_isPGM_INSTNATIATED()) {
                    temp = false;
                    System.out.printf("thread " + threadId + ": PROGRAM NOT INSTANTIATED.%n");
                }
                if(!WriteQue_Simulation_InputSamples.app_FUNCT_get_flag_isPGM_INSTNATIATED()) {
                    temp = false;
                    System.out.printf("thread " + threadId + ": PROGRAM NOT INSTANTIATED.%n");
                }
                if(!WriteQue_Simulation_OutputSamples.app_FUNCT_get_flag_isPGM_INSTNATIATED()) {
                    temp = false;
                    System.out.printf("thread " + threadId + ": PROGRAM NOT INSTANTIATED.%n");
                }
                if(!WriteQue_SimulationIO.app_FUNCT_get_flag_isPGM_INSTNATIATED()) {
                    temp = false;
                    System.out.printf("thread " + threadId + ": PROGRAM NOT INSTANTIATED.%n");
                }
                if(!MyDLL.stat_App_FUNCT_MyLIBS__CLIB_MyDLL__get_flag_isPGM_INSTANTIATED()) {
                    temp = false;
                    System.out.printf("thread " + threadId + ": PROGRAM NOT INSTANTIATED.%n");
                }
            }
            obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Flag_is_SystemInitialised(temp);
            if(obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_ConditionCode.app_FUNCT_write_End(1);
        }
        System.out.printf("thread " + threadId + ": FLAG SystemInitialised() => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised() + ".%n");
        System.out.printf("thread " + threadId + ": System Initialised.%n");
        System.out.printf("thread " + threadId + ": System Instantiated.%n");
        System.out.printf("thread " + threadId + ": Starting THREAD.%n");
        checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            while (obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                WriteQue_ConditionCode.app_FUNCT_write_End(1);
                WriteQue_SimulationIO.app_FUNCT_write_Start(1);

                WriteQue_SimulationIO.app_FUNCT_write_End(1);
            }
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_ConditionCode.app_FUNCT_write_End(1);
        }
    }

    public static void Thread_Output_Draw(Framework obj, byte threadId) {
        System.out.printf("thread " + threadId + ": Enter THREAD member function on thread.%n");
        boolean doneOnce = false;
        boolean checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(2);
            if (!doneOnce)
            {
                obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(threadId, true);
                System.out.printf("thread " + threadId + ": isThreadInitialised => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(threadId) + ".%n");
                doneOnce = true;
            }
            boolean temp = true;
            for(byte index = 0; index < 3; index++) {
                if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(index)) {
                    temp = false;
                }
            }
            obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Flag_is_SystemInitialised(temp);
            if(obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_ConditionCode.app_FUNCT_write_End(2);
        }
        System.out.printf("thread " + threadId + ": Initialised Thread.%n");
        checkPass = false;
        boolean temp = true;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(2);
            while(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                if (obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                    checkPass = true;
                }
                WriteQue_ConditionCode.app_FUNCT_write_End(2);
            }
        }
        System.out.printf("thread " + threadId + ": FLAG SystemInitialised() => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised() + ".%n");
        System.out.printf("thread " + threadId + ": System Initialised.%n");
        System.out.printf("thread " + threadId + ": System Instantiated.%n");
        System.out.printf("thread " + threadId + ": Starting THREAD.%n");
        checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(2);
            while (obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                WriteQue_ConditionCode.app_FUNCT_write_End(2);
                WriteQue_SimulationIO.app_FUNCT_write_Start(2);

                WriteQue_SimulationIO.app_FUNCT_write_End(2);
            }
            WriteQue_ConditionCode.app_FUNCT_write_Start(2);
            if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_ConditionCode.app_FUNCT_write_End(2);
        }
    }
    public void Terminate_stat_REG_scanner()
    {
        _stat_REG_scanner.close();
    }
    public void sim_Get_Praise_Event_Id_And_Data(Input input) {
        while (_stat_REG_scanner.hasNextLine()) {
            System.out.printf("Enter PraiseEventId: ");
            int praiseEventId = _stat_REG_scanner.nextByte(); // Program waits here
            input.dyn_REG_set_Input_praiseId(praiseEventId);
            input.dyn_REG_set_InputSubset(obj, praiseEventId);
            switch(input.dyn_REG_get_Input_praiseId())
            {
                case (int)0:
                    Input_praise0 input_subset0 = (Input_praise0)input.dyn_REG_get_InputSubset();
                    System.out.printf("Enter _stat_REG_scanner Subset0 valueA: ");
                    input_subset0.dyn_REG_set_input_praise0_valueA(_stat_REG_scanner.nextDouble());
                    System.out.printf("Enter _stat_REG_scanner Subset0 valueB: ");
                    input_subset0.dyn_REG_set_input_praise0_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                    break;

                case (int)1:
                    Input_praise1 input_subset1 = (Input_praise1)input.dyn_REG_get_InputSubset();
                    System.out.printf("Enter _stat_REG_scanner Subset1 valueA: ");
                    input_subset1.dyn_REG_set_input_praise1_valueA(_stat_REG_scanner.nextDouble());
                    System.out.printf("Enter _stat_REG_scanner Subset1 valueB: ");
                    input_subset1.dyn_REG_set_input_praise1_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                    break;

                case (int)2:
                    Input_praise2 input_suber2 = (Input_praise2)input.dyn_REG_get_InputSubset();
                    System.out.printf("Enter _stat_REG_scanner Subset2 valueA: ");
                    input_suber2.dyn_REG_set_input_praise2_valueA(_stat_REG_scanner.nextDouble());
                    System.out.printf("Enter _stat_REG_scanner Subset2 valueB: ");
                    input_suber2.dyn_REG_set_input_praise2_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                    break;

                case (int)3:
                    Input_praise3 input_suber3 = (Input_praise3)input.dyn_REG_get_InputSubset();
                    System.out.printf("Enter _stat_REG_scanner Subset3 valueA: ");
                    input_suber3.dyn_REG_set_input_praise3_valueA(_stat_REG_scanner.nextDouble());
                    System.out.printf("Enter _stat_REG_scanner Subset3 valueB: ");
                    input_suber3.dyn_REG_set_input_praise3_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                    break;
            }
        }
        obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewOutputReady(true);
    }
    public void sim_Print_PraiseEvent(Output output) {
        obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewOutputReady(false);
        System.out.printf("PraiseEventId: " + output.dyn_REG_get_Output_praiseId() + ".%n");
        switch(output.dyn_REG_get_Output_praiseId())
        {
            case 0:
                Output_praise0 output_subset0 = (Output_praise0)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset0 value: " + output_subset0.dyn_REG_get_output_praise0_value() + ".%n");
                break;

            case 1:
                Output_praise1 output_subset1 = (Output_praise1)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset1 value: " + output_subset1.dyn_REG_get_output_praise1_value() + ".%n");
                break;

            case 2:
                Output_praise2 output_subset2 = (Output_praise2)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset2 value: " + output_subset2.dyn_REG_get_output_praise2_value() + ".%n");
                break;

            case 3:
                Output_praise3 output_subset3 = (Output_praise3)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset3 value: " + output_subset3.dyn_REG_get_output_praise3_value() + ".%n");
                break;
        }
    }
    public void app_Do_Process_Of_Input(Framework obj) {
        WriteQue_Simulation_InputSamples.app_FUNCT_write_Start(0);
        obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewInputReady(false);
        _SIM_stat_REG_input_Sample = obj.dyn_STRUCT_get_Input();
        //_stat_REG_Buffer_For_Input = new byte[1024]; //todo network capture and write to buffer.
        //app_Decode_NetworkingSteam_At_Server_Input_Recieve(_SIM_stat_REG_input_Sample, _stat_REG_Buffer_For_Input);
        obj.dyn_CLASS_get_SIMULATION().sim_Get_Praise_Event_Id_And_Data(obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Input_Sample());//SIMULATION
        switch (obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Input_Sample().dyn_REG_get_Input_praiseId())
        {
            case (int)0:
                Input_praise0 subset_of_input_for_praise0 = (Input_praise0)obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Input_Sample().dyn_REG_get_InputSubset();
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(subset_of_input_for_praise0.dyn_REG_get_input_praise0_valueA());
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(subset_of_input_for_praise0.dyn_REG_get_input_praise0_valueB());
                MyDLL.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__add_a_b();
                break;

            case (int)1:
                Input_praise1 subset_of_input_for_praise1 = (Input_praise1)obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Input_Sample().dyn_REG_get_InputSubset();
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(subset_of_input_for_praise1.dyn_REG_get_input_praise1_valueA());
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(subset_of_input_for_praise1.dyn_REG_get_input_praise1_valueB());
                MyDLL.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__subtract_a_b();
                break;

            case (int)2:
                Input_praise2 subset_of_input_for_praise2 = (Input_praise2)obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Input_Sample().dyn_REG_get_InputSubset();
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(subset_of_input_for_praise2.dyn_REG_get_input_praise2_valueA());
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(subset_of_input_for_praise2.dyn_REG_get_input_praise2_valueB());
                MyDLL.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__multiply_a_b();
                break;

            case (int)3:
                Input_praise3 subset_of_input_for_praise3 = (Input_praise3)obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Input_Sample().dyn_REG_get_InputSubset();
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(subset_of_input_for_praise3.dyn_REG_get_input_praise3_valueA());
                MyDLL.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(subset_of_input_for_praise3.dyn_REG_get_input_praise3_valueB());
                MyDLL.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__divide_a_b();
                break;
        }
        WriteQue_Simulation_InputSamples.app_FUNCT_write_End(0);
    }
    public void app_Do_Process_Of_Output(Framework obj) {
        WriteQue_Simulation_OutputSamples.app_FUNCT_write_Start(0);
        //_stat_REG_Buffer_For_Ouput = new byte[1024];
        _SIM_stat_REG_output_Sample = obj.dyn_STRUCT_get_Output();
        if(obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_get_flag__isNewOutputReady()) {


            switch (obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_Output_praiseId()) {
                case 0:
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_Output_praiseId(0);
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_OutputSubset(obj, obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_Output_praiseId());
                    Output_praise0 subset_of_output_for_praise0 = (Output_praise0) obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_OutputSubset();
                    subset_of_output_for_praise0.dyn_REG_set_output_praise0_value(MyDLL.stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value());
                    break;

                case 1:
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_Output_praiseId(1);
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_OutputSubset(obj, obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_Output_praiseId());
                    Output_praise1 subset_of_output_for_praise1 = (Output_praise1) obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_OutputSubset();
                    subset_of_output_for_praise1.dyn_REG_set_output_praise1_value(MyDLL.stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value());
                    break;

                case 2:
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_Output_praiseId(2);
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_OutputSubset(obj, obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_Output_praiseId());
                    Output_praise2 subset_of_output_for_praise2 = (Output_praise2) obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_OutputSubset();
                    subset_of_output_for_praise2.dyn_REG_set_output_praise2_value(MyDLL.stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value());
                    break;

                case 3:
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_Output_praiseId(3);
                    obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_set_OutputSubset(obj, obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_Output_praiseId());
                    Output_praise3 subset_of_output_for_praise3 = (Output_praise3) obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample().dyn_REG_get_OutputSubset();
                    subset_of_output_for_praise3.dyn_REG_set_output_praise3_value(MyDLL.stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value());
                    break;
            }
            //app_Encode_NetworkingSteam_At_Server_Output_Send(obj, _SIM_stat_REG_output_Sample, _stat_REG_Buffer_For_Ouput);
            obj.dyn_CLASS_get_SIMULATION().sim_Print_PraiseEvent(obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_Output_Sample());
            //todo send.
            obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewOutputReady(true);
            WriteQue_Simulation_OutputSamples.app_FUNCT_write_End(0);
        }
    }
    public void dyn_REG_boot1_DEFINE__SIMULATION() {
        stat_REG_boot1_DEFINE__SIMULATION();
    }
    public void dyn_REG_boot2_SUBSTANTIATE__SIMULATION(Input sample) {
        stat_REG_boot2_SUBSTANTIATE__SIMULATION(sample);
    }
    public void dyn_REG_boot3_INITIALISE__SIMULATION(Input sample) {
        stat_REG_boot3_INITIALISE__SIMULATION(sample);
    }
    private Input dyn_REG_get_Input_Sample() {
        return stat_REG_get_flag_Input_Sample();
    }
    private Output dyn_REG_get_Output_Sample() {
        return stat_REG_get_Output_Sample();
    }
// private.
    public void stat_REG_boot1_DEFINE__SIMULATION() {
        stat_CLASS_boot1_DEFINE_SIMULATION__stat_REG_input_Sample();
    }
    private static void stat_CLASS_boot1_DEFINE_SIMULATION__stat_REG_input_Sample() {
        _SIM_stat_REG_input_Sample = null;
    }
    public void stat_REG_boot2_SUBSTANTIATE__SIMULATION(Input sample) {
        stat_REG_boot2_SUBSTANTIATE__SIMULATION__SIM_stat_REG_input_Sample(sample);
    }
    private static void stat_REG_boot2_SUBSTANTIATE__SIMULATION__SIM_stat_REG_input_Sample(Input sample) {
        sample.dyn_REG_boot2_SUBSTANTIATE_Input();
        _SIM_stat_REG_input_Sample = sample;
    }
    public void stat_REG_boot3_INITIALISE__SIMULATION(Input sample) {
        stat_REG_boot3_INITIALISE__SIMULATION__SIM_stat_REG_input_Sample(sample);
    }
    private static void stat_REG_boot3_INITIALISE__SIMULATION__SIM_stat_REG_input_Sample(Input sample) {
        _SIM_stat_REG_input_Sample = sample;
    }
    private static Input stat_REG_get_flag_Input_Sample() {
        return _SIM_stat_REG_input_Sample;
    }
    private static Output stat_REG_get_Output_Sample() {
        return _SIM_stat_REG_output_Sample;
    }
}