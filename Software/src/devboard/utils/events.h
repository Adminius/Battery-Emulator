#ifndef __EVENTS_H__
#define __EVENTS_H__

#ifndef UNIT_TEST
#include <Arduino.h>
#endif

#include <stdint.h>

typedef enum {
  EVENT_CAN_FAILURE = 0u,
  EVENT_CAN_WARNING,
  EVENT_WATER_INGRESS,
  EVENT_12V_LOW,
  EVENT_SOC_PLAUSIBILITY_ERROR,
  EVENT_KWH_PLAUSIBILITY_ERROR,
  EVENT_BATTERY_CHG_STOP_REQ,
  EVENT_BATTERY_DISCHG_STOP_REQ,
  EVENT_BATTERY_CHG_DISCHG_STOP_REQ,
  EVENT_LOW_SOH,
  EVENT_HVIL_FAILURE,
  EVENT_INTERNAL_OPEN_FAULT,
  EVENT_CELL_UNDER_VOLTAGE,
  EVENT_CELL_OVER_VOLTAGE,
  EVENT_CELL_DEVIATION_HIGH,
  EVENT_UNKNOWN_EVENT_SET,
  EVENT_DUMMY,
  EVENT_NOF_EVENTS
} EVENTS_ENUM_TYPE;

void init_events(void);
void set_event(EVENTS_ENUM_TYPE event, uint8_t data);
void run_event_handling(void);

#endif  // __MYTIMER_H__
