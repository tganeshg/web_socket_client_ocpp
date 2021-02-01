#ifndef _MAIN_H
#define _MAIN_H
//C++ guard
#ifdef __cplusplus
extern "C" {
#endif

//Dependencies
#include <stdlib.h>
#include "stm32h7xx.h"
#include "stm32h7xx_hal.h"
#include "stm32h7xx_nucleo.h"
#include "core/net.h"
#include "drivers/mac/stm32h7xx_eth_driver.h"
#include "drivers/phy/lan8742_driver.h"
#include "dhcp/dhcp_client.h"
#include "ipv6/slaac.h"
#include "web_socket/web_socket.h"
#include "rng/yarrow.h"
#include "debug.h"


//C++ guard
#ifdef __cplusplus
}
#endif

#endif
