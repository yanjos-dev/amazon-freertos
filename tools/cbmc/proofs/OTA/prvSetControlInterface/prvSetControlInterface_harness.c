/* Standard library includes. */
#include <string.h>

/* OTA inteface includes. */
#include "aws_iot_ota_interface.h"


void prvSetControlInterface( OTA_ControlInterface_t * pxControlInterface );

void harness() {
  OTA_ControlInterface_t proof_control_interface;
  prvSetControlInterface(&proof_control_interface);
}
