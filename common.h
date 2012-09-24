#ifndef _COMMON_H_
#define _COMMON_H_

#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/wdt.h>
#include <util/delay.h>
#include <inttypes.h>
#include <string.h>

#include "uart0_PC.h"
#include "uart1_PM.h"
#include "uart2_PSU.h"
#include "uart3_PLC.h"
#include "timer0.h"
#include "timer2.h"
#include "proc_PSU.h"
#include "proc_PLC.h"
#include "eeprom.h"
#include "eeprom_data.h"
#include "queue.h"
#include "op.h"
#include "util.h"
#include "outdoor_luminair.h"
#include "io.h"
#include "proc_pc.h"
#include "proc_pm.h"

//#include "proc_send_task.h"

#define CPU_CLK			8000000L		// Clock 8Mhz

#define TICK_PER_SEC		(100UL)
#define TM_MSEC(x)			((x) / 10UL)
#define TM_SEC(x)			((x) * TICK_PER_SEC)
#define TM_MIN(x)			(TM_SEC(60UL) * (x))
#define TM_HOUR(x)			(TM_MIN(60) * (x))

//#define _DBG_RESET_
void set_start_program(void);
int get_start_program(void);
#endif
