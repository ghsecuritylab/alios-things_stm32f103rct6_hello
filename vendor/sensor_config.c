#include "sensor_hal.h"

extern int __sensor_drv_acc_mir3_da217_init_func__(void);
extern int __sensor_drv_als_liteon_ltr553_init_func__(void);
extern int __sensor_drv_ps_liteon_ltr553_init_func__(void);

const int g_sensor_drv_num = 4;

const SENSOR_INIT_FUN g_sensor_func[] = {
NULL,
__sensor_drv_acc_mir3_da217_init_func__,
__sensor_drv_als_liteon_ltr553_init_func__,
__sensor_drv_ps_liteon_ltr553_init_func__,
};
