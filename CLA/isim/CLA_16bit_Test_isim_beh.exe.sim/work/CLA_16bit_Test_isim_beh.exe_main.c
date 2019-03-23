/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003105290696_0199059056_init();
    work_m_00000000000407934653_2282677175_init();
    work_m_00000000001059075070_4135418334_init();
    work_m_00000000000966929472_0727072866_init();
    work_m_00000000001135830656_3036125898_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001135830656_3036125898");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
