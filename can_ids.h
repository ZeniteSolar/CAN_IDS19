// CODE GENERATED USING MAKOTEMPLATES.ORG, DO NOT EDIT.
// FILE_VERSION: {db["version"]}


// MIC19 - Modulo de Interface de Controle
#define CAN_SIGNATURE_MIC19 240
// MIC19 - STATE - Module state report
#define CAN_MSG_MIC19_STATE_ID 8
#define CAN_MSG_MIC19_STATE_LENGTH 3
#define CAN_MSG_MIC19_STATE_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MIC19_STATE_SIGNATURE_TYPE "u8"
#define CAN_MSG_MIC19_STATE_SIGNATURE_UNITS ""
#define CAN_MSG_MIC19_STATE_STATE_BYTE 1 //<!" State code
#define CAN_MSG_MIC19_STATE_STATE_TYPE "u8"
#define CAN_MSG_MIC19_STATE_STATE_UNITS ""
#define CAN_MSG_MIC19_STATE_ERROR_BYTE 2 //<!" Error code
#define CAN_MSG_MIC19_STATE_ERROR_TYPE "u8"
#define CAN_MSG_MIC19_STATE_ERROR_UNITS ""
// MIC19 - MOTOR - Motor controller parameters
#define CAN_MSG_MIC19_MOTOR_ID 9
#define CAN_MSG_MIC19_MOTOR_LENGTH 4
#define CAN_MSG_MIC19_MOTOR_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MIC19_MOTOR_SIGNATURE_TYPE "u8"
#define CAN_MSG_MIC19_MOTOR_SIGNATURE_UNITS ""
#define CAN_MSG_MIC19_MOTOR_MOTOR_BYTE 1 //<!" Motor state
#define CAN_MSG_MIC19_MOTOR_MOTOR_TYPE "bitfield"
#define CAN_MSG_MIC19_MOTOR_MOTOR_UNITS ""
#define CAN_MSG_MIC19_MOTOR_MOTOR_MOTOR_ON_BIT 0
#define CAN_MSG_MIC19_MOTOR_MOTOR_DMS_ON_BIT 1
#define CAN_MSG_MIC19_MOTOR_D_BYTE 2 //<!" Motor Duty Cycle
#define CAN_MSG_MIC19_MOTOR_D_TYPE "u8"
#define CAN_MSG_MIC19_MOTOR_D_UNITS "%"
#define CAN_MSG_MIC19_MOTOR_I_BYTE 3 //<!" Motor Soft Start
#define CAN_MSG_MIC19_MOTOR_I_TYPE "u8"
#define CAN_MSG_MIC19_MOTOR_I_UNITS "%"
// MIC19 - PUMPS - Pumps controller parameters
#define CAN_MSG_MIC19_PUMPS_ID 10
#define CAN_MSG_MIC19_PUMPS_LENGTH 2
#define CAN_MSG_MIC19_PUMPS_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MIC19_PUMPS_SIGNATURE_TYPE "u8"
#define CAN_MSG_MIC19_PUMPS_SIGNATURE_UNITS ""
#define CAN_MSG_MIC19_PUMPS_PUMPS_BYTE 1 //<!" Pumps state
#define CAN_MSG_MIC19_PUMPS_PUMPS_TYPE "bitfield"
#define CAN_MSG_MIC19_PUMPS_PUMPS_UNITS ""
#define CAN_MSG_MIC19_PUMPS_PUMPS_PUMP1_BIT 0
#define CAN_MSG_MIC19_PUMPS_PUMPS_PUMP2_BIT 1
#define CAN_MSG_MIC19_PUMPS_PUMPS_PUMP3_BIT 2
// MIC19 - MPTTS - Mppts controller parameters
#define CAN_MSG_MIC19_MPTTS_ID 11
#define CAN_MSG_MIC19_MPTTS_LENGTH 3
#define CAN_MSG_MIC19_MPTTS_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MIC19_MPTTS_SIGNATURE_TYPE "u8"
#define CAN_MSG_MIC19_MPTTS_SIGNATURE_UNITS ""
#define CAN_MSG_MIC19_MPTTS_MPPTS_ON_BYTE 1 //<!" MPPTs state
#define CAN_MSG_MIC19_MPTTS_MPPTS_ON_TYPE "bitfield"
#define CAN_MSG_MIC19_MPTTS_MPPTS_ON_UNITS ""
#define CAN_MSG_MIC19_MPTTS_MPPTS_ON_MPPTS_ON_BIT 0
#define CAN_MSG_MIC19_MPTTS_POT_BYTE 2 //<!" MPPTs maximum power limitation
#define CAN_MSG_MIC19_MPTTS_POT_TYPE "u8"
#define CAN_MSG_MIC19_MPTTS_POT_UNITS "%"
// MIC19 - MCS - MCS controller parameters
#define CAN_MSG_MIC19_MCS_ID 12
#define CAN_MSG_MIC19_MCS_LENGTH 2
#define CAN_MSG_MIC19_MCS_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MIC19_MCS_SIGNATURE_TYPE "u8"
#define CAN_MSG_MIC19_MCS_SIGNATURE_UNITS ""
#define CAN_MSG_MIC19_MCS_BOAT_ON_BYTE 1 //<!" Boat state
#define CAN_MSG_MIC19_MCS_BOAT_ON_TYPE "bitfield"
#define CAN_MSG_MIC19_MCS_BOAT_ON_UNITS ""
#define CAN_MSG_MIC19_MCS_BOAT_ON_BOAT_ON_BIT 0


// MAM19 - Modulo de Acionamento do Motor
#define CAN_SIGNATURE_MAM19 190
// MAM19 - STATE - Module state report
#define CAN_MSG_MAM19_STATE_ID 16
#define CAN_MSG_MAM19_STATE_LENGTH 3
#define CAN_MSG_MAM19_STATE_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MAM19_STATE_SIGNATURE_TYPE "u8"
#define CAN_MSG_MAM19_STATE_SIGNATURE_UNITS ""
#define CAN_MSG_MAM19_STATE_STATE_BYTE 1 //<!" State code
#define CAN_MSG_MAM19_STATE_STATE_TYPE "u8"
#define CAN_MSG_MAM19_STATE_STATE_UNITS ""
#define CAN_MSG_MAM19_STATE_ERROR_BYTE 2 //<!" Error code
#define CAN_MSG_MAM19_STATE_ERROR_TYPE "u8"
#define CAN_MSG_MAM19_STATE_ERROR_UNITS ""
// MAM19 - MOTOR - Motor controller parameters
#define CAN_MSG_MAM19_MOTOR_ID 17
#define CAN_MSG_MAM19_MOTOR_LENGTH 3
#define CAN_MSG_MAM19_MOTOR_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MAM19_MOTOR_SIGNATURE_TYPE "u8"
#define CAN_MSG_MAM19_MOTOR_SIGNATURE_UNITS ""
#define CAN_MSG_MAM19_MOTOR_D_BYTE 1 //<!" Motor Duty Cycle
#define CAN_MSG_MAM19_MOTOR_D_TYPE "u8"
#define CAN_MSG_MAM19_MOTOR_D_UNITS "%"
#define CAN_MSG_MAM19_MOTOR_I_BYTE 2 //<!" Motor Soft Start
#define CAN_MSG_MAM19_MOTOR_I_TYPE "u8"
#define CAN_MSG_MAM19_MOTOR_I_UNITS "%"


// MAB19 - Modulo de Acionamento das Bombas de Porao
#define CAN_SIGNATURE_MAB19 230
// MAB19 - STATE - Module state report
#define CAN_MSG_MAB19_STATE_ID 64
#define CAN_MSG_MAB19_STATE_LENGTH 3
#define CAN_MSG_MAB19_STATE_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MAB19_STATE_SIGNATURE_TYPE "u8"
#define CAN_MSG_MAB19_STATE_SIGNATURE_UNITS ""
#define CAN_MSG_MAB19_STATE_STATE_BYTE 1 //<!" State code
#define CAN_MSG_MAB19_STATE_STATE_TYPE "u8"
#define CAN_MSG_MAB19_STATE_STATE_UNITS ""
#define CAN_MSG_MAB19_STATE_ERROR_BYTE 2 //<!" Error code
#define CAN_MSG_MAB19_STATE_ERROR_TYPE "u8"
#define CAN_MSG_MAB19_STATE_ERROR_UNITS ""
// MAB19 - PUMPS - Pumps state
#define CAN_MSG_MAB19_PUMPS_ID 65
#define CAN_MSG_MAB19_PUMPS_LENGTH 2
#define CAN_MSG_MAB19_PUMPS_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MAB19_PUMPS_SIGNATURE_TYPE "u8"
#define CAN_MSG_MAB19_PUMPS_SIGNATURE_UNITS ""
#define CAN_MSG_MAB19_PUMPS_PUMPS_BYTE 1 //<!" Pumps state
#define CAN_MSG_MAB19_PUMPS_PUMPS_TYPE "bitfield"
#define CAN_MSG_MAB19_PUMPS_PUMPS_UNITS ""
#define CAN_MSG_MAB19_PUMPS_PUMPS_PUMP1_BIT 0
#define CAN_MSG_MAB19_PUMPS_PUMPS_PUMP2_BIT 1
#define CAN_MSG_MAB19_PUMPS_PUMPS_PUMP3_BIT 2


// MSC19 - Modulo de Sensores CAN
#define CAN_SIGNATURE_MSC19 250
// MSC19 - STATE - Module state report
#define CAN_MSG_MSC19_STATE_ID 32
#define CAN_MSG_MSC19_STATE_LENGTH 3
#define CAN_MSG_MSC19_STATE_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MSC19_STATE_SIGNATURE_TYPE "u8"
#define CAN_MSG_MSC19_STATE_SIGNATURE_UNITS ""
#define CAN_MSG_MSC19_STATE_STATE_BYTE 1 //<!" State code
#define CAN_MSG_MSC19_STATE_STATE_TYPE "u8"
#define CAN_MSG_MSC19_STATE_STATE_UNITS ""
#define CAN_MSG_MSC19_STATE_ERROR_BYTE 2 //<!" Error code
#define CAN_MSG_MSC19_STATE_ERROR_TYPE "u8"
#define CAN_MSG_MSC19_STATE_ERROR_UNITS ""
// MSC19 - ADC - ADC values
#define CAN_MSG_MSC19_ADC_ID 33
#define CAN_MSG_MSC19_ADC_LENGTH 7
#define CAN_MSG_MSC19_ADC_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MSC19_ADC_SIGNATURE_TYPE "u8"
#define CAN_MSG_MSC19_ADC_SIGNATURE_UNITS ""
#define CAN_MSG_MSC19_ADC_AVG_L_BYTE 1 //<!" Avg byte low
#define CAN_MSG_MSC19_ADC_AVG_L_TYPE "u16"
#define CAN_MSG_MSC19_ADC_AVG_L_UNITS ""
#define CAN_MSG_MSC19_ADC_AVG_H_BYTE 2 //<!" Avg byte high
#define CAN_MSG_MSC19_ADC_AVG_H_TYPE "u16"
#define CAN_MSG_MSC19_ADC_AVG_H_UNITS ""
#define CAN_MSG_MSC19_ADC_MIN_L_BYTE 3 //<!" Min byte low
#define CAN_MSG_MSC19_ADC_MIN_L_TYPE "u16"
#define CAN_MSG_MSC19_ADC_MIN_L_UNITS ""
#define CAN_MSG_MSC19_ADC_MIN_H_BYTE 4 //<!" Min byte high
#define CAN_MSG_MSC19_ADC_MIN_H_TYPE "u16"
#define CAN_MSG_MSC19_ADC_MIN_H_UNITS ""
#define CAN_MSG_MSC19_ADC_MAX_L_BYTE 5 //<!" Max byte low
#define CAN_MSG_MSC19_ADC_MAX_L_TYPE "u16"
#define CAN_MSG_MSC19_ADC_MAX_L_UNITS ""
#define CAN_MSG_MSC19_ADC_MAX_H_BYTE 6 //<!" Max byte low
#define CAN_MSG_MSC19_ADC_MAX_H_TYPE "u16"
#define CAN_MSG_MSC19_ADC_MAX_H_UNITS ""


// MCS19 - Modulo de Carregamento do Sistema
#define CAN_SIGNATURE_MCS19 200
// MCS19 - STATE - Module state report
#define CAN_MSG_MCS19_STATE_ID 256
#define CAN_MSG_MCS19_STATE_LENGTH 3
#define CAN_MSG_MCS19_STATE_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MCS19_STATE_SIGNATURE_TYPE "u8"
#define CAN_MSG_MCS19_STATE_SIGNATURE_UNITS ""
#define CAN_MSG_MCS19_STATE_STATE_BYTE 1 //<!" State code
#define CAN_MSG_MCS19_STATE_STATE_TYPE "u8"
#define CAN_MSG_MCS19_STATE_STATE_UNITS ""
#define CAN_MSG_MCS19_STATE_ERROR_BYTE 2 //<!" Error code
#define CAN_MSG_MCS19_STATE_ERROR_TYPE "u8"
#define CAN_MSG_MCS19_STATE_ERROR_UNITS ""
// MCS19 - START_STAGES - Boat charging // Boat on
#define CAN_MSG_MCS19_START_STAGES_ID 516
#define CAN_MSG_MCS19_START_STAGES_LENGTH 3
#define CAN_MSG_MCS19_START_STAGES_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MCS19_START_STAGES_SIGNATURE_TYPE "u8"
#define CAN_MSG_MCS19_START_STAGES_SIGNATURE_UNITS ""
#define CAN_MSG_MCS19_START_STAGES_MAIN_RELAY_BYTE 1 //<!" Boat on/off
#define CAN_MSG_MCS19_START_STAGES_MAIN_RELAY_TYPE "bitfield"
#define CAN_MSG_MCS19_START_STAGES_MAIN_RELAY_UNITS ""
#define CAN_MSG_MCS19_START_STAGES_MAIN_RELAY_MAIN_RELAY_BIT 0
#define CAN_MSG_MCS19_START_STAGES_CHARGE_RELAY_BYTE 2 //<!" Boat Charging
#define CAN_MSG_MCS19_START_STAGES_CHARGE_RELAY_TYPE "bitfield"
#define CAN_MSG_MCS19_START_STAGES_CHARGE_RELAY_UNITS ""
#define CAN_MSG_MCS19_START_STAGES_CHARGE_RELAY_CHARGE_RELAY_BIT 0
// MCS19 - BAT - battery voltage values
#define CAN_MSG_MCS19_BAT_ID 258
#define CAN_MSG_MCS19_BAT_LENGTH 7
#define CAN_MSG_MCS19_BAT_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MCS19_BAT_SIGNATURE_TYPE "u8"
#define CAN_MSG_MCS19_BAT_SIGNATURE_UNITS ""
#define CAN_MSG_MCS19_BAT_AVG_L_BYTE 1 //<!" Avg byte low
#define CAN_MSG_MCS19_BAT_AVG_L_TYPE "u16"
#define CAN_MSG_MCS19_BAT_AVG_L_UNITS ""
#define CAN_MSG_MCS19_BAT_AVG_H_BYTE 2 //<!" Avg byte high
#define CAN_MSG_MCS19_BAT_AVG_H_TYPE "u16"
#define CAN_MSG_MCS19_BAT_AVG_H_UNITS ""
#define CAN_MSG_MCS19_BAT_MIN_L_BYTE 3 //<!" Min byte low
#define CAN_MSG_MCS19_BAT_MIN_L_TYPE "u16"
#define CAN_MSG_MCS19_BAT_MIN_L_UNITS ""
#define CAN_MSG_MCS19_BAT_MIN_H_BYTE 4 //<!" Min byte high
#define CAN_MSG_MCS19_BAT_MIN_H_TYPE "u16"
#define CAN_MSG_MCS19_BAT_MIN_H_UNITS ""
#define CAN_MSG_MCS19_BAT_MAX_L_BYTE 5 //<!" Max byte low
#define CAN_MSG_MCS19_BAT_MAX_L_TYPE "u16"
#define CAN_MSG_MCS19_BAT_MAX_L_UNITS ""
#define CAN_MSG_MCS19_BAT_MAX_H_BYTE 6 //<!" Max byte low
#define CAN_MSG_MCS19_BAT_MAX_H_TYPE "u16"
#define CAN_MSG_MCS19_BAT_MAX_H_UNITS ""
// MCS19 - CAP - capacitor bank voltage values
#define CAN_MSG_MCS19_CAP_ID 259
#define CAN_MSG_MCS19_CAP_LENGTH 7
#define CAN_MSG_MCS19_CAP_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MCS19_CAP_SIGNATURE_TYPE "u8"
#define CAN_MSG_MCS19_CAP_SIGNATURE_UNITS ""
#define CAN_MSG_MCS19_CAP_AVG_L_BYTE 1 //<!" Avg byte low
#define CAN_MSG_MCS19_CAP_AVG_L_TYPE "u16"
#define CAN_MSG_MCS19_CAP_AVG_L_UNITS ""
#define CAN_MSG_MCS19_CAP_AVG_H_BYTE 2 //<!" Avg byte high
#define CAN_MSG_MCS19_CAP_AVG_H_TYPE "u16"
#define CAN_MSG_MCS19_CAP_AVG_H_UNITS ""
#define CAN_MSG_MCS19_CAP_MIN_L_BYTE 3 //<!" Min byte low
#define CAN_MSG_MCS19_CAP_MIN_L_TYPE "u16"
#define CAN_MSG_MCS19_CAP_MIN_L_UNITS ""
#define CAN_MSG_MCS19_CAP_MIN_H_BYTE 4 //<!" Min byte high
#define CAN_MSG_MCS19_CAP_MIN_H_TYPE "u16"
#define CAN_MSG_MCS19_CAP_MIN_H_UNITS ""
#define CAN_MSG_MCS19_CAP_MAX_L_BYTE 5 //<!" Max byte low
#define CAN_MSG_MCS19_CAP_MAX_L_TYPE "u16"
#define CAN_MSG_MCS19_CAP_MAX_L_UNITS ""
#define CAN_MSG_MCS19_CAP_MAX_H_BYTE 6 //<!" Max byte low
#define CAN_MSG_MCS19_CAP_MAX_H_TYPE "u16"
#define CAN_MSG_MCS19_CAP_MAX_H_UNITS ""


// MT19 - Modulo Tacometro
#define CAN_SIGNATURE_MT19 255
// MT19 - STATE - Module state report
#define CAN_MSG_MT19_STATE_ID 32
#define CAN_MSG_MT19_STATE_LENGTH 3
#define CAN_MSG_MT19_STATE_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MT19_STATE_SIGNATURE_TYPE "u8"
#define CAN_MSG_MT19_STATE_SIGNATURE_UNITS ""
#define CAN_MSG_MT19_STATE_STATE_BYTE 1 //<!" State code
#define CAN_MSG_MT19_STATE_STATE_TYPE "u8"
#define CAN_MSG_MT19_STATE_STATE_UNITS ""
#define CAN_MSG_MT19_STATE_ERROR_BYTE 2 //<!" Error code
#define CAN_MSG_MT19_STATE_ERROR_TYPE "u8"
#define CAN_MSG_MT19_STATE_ERROR_UNITS ""
// MT19 - RPM - RPM motor values
#define CAN_MSG_MT19_RPM_ID 33
#define CAN_MSG_MT19_RPM_LENGTH 3
#define CAN_MSG_MT19_RPM_SIGNATURE_BYTE 0 //<!" Senders signature
#define CAN_MSG_MT19_RPM_SIGNATURE_TYPE "u8"
#define CAN_MSG_MT19_RPM_SIGNATURE_UNITS ""
#define CAN_MSG_MT19_RPM_AVG_L_BYTE 1 //<!" RPM Avg byte low
#define CAN_MSG_MT19_RPM_AVG_L_TYPE "u16"
#define CAN_MSG_MT19_RPM_AVG_L_UNITS ""
#define CAN_MSG_MT19_RPM_AVG_H_BYTE 2 //<!" RPM Avg byte high
#define CAN_MSG_MT19_RPM_AVG_H_TYPE "u16"
#define CAN_MSG_MT19_RPM_AVG_H_UNITS ""


