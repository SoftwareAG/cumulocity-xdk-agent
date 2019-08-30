/******************************************************************************
 **	COPYRIGHT (c) 2019		Software AG
 **
 **	The use of this software is subject to the XDK SDK EULA
 **
 *******************************************************************************
 **
 **	OBJECT NAME:	MQTTOperation.h
 **
 **	DESCRIPTION:	Source Code for the Cumulocity MQTT Client for the Bosch XDK
 **
 **	AUTHOR(S):		Christof Strack, Software AG
 **
 **
 *******************************************************************************/

#include "XDK_MQTT_Z.h"

/* header definition ******************************************************** */
#ifndef MQTTREGISTRATION_H_
#define MQTTREGISTRATION_H_

/* Paho Client interface declaration ********************************************** */

//TODO Check of this can be replaced with template topic
#define TOPIC_REGISTRATION    	 "s/ucr"
#define TOPIC_CREDENTIAL    	 "s/dcr"


#define MQTT_REGISTRATION_PORT			8883
#define MQTT_REGISTRATION_BROKERNAME	"mqtt.cumulocity.com"
#define MQTT_REGISTRATION_USERNAME		"management/devicebootstrap"
#define MQTT_REGISTRATION_PASSWORD		"Fhdt1bb1f"
#define MQTT_REGISTRATION_TICKRATE		10000

#define MILLISECONDS(x) ((portTickType) x / portTICK_RATE_MS)
#define SECONDS(x) ((portTickType) (x * 1000) / portTICK_RATE_MS)

/* global function prototype declarations */
void MQTTRegistration_Init(MQTT_Setup_TZ, MQTT_Connect_TZ);
void MQTTRegistration_DeInit(void);
void MQTTRegistration_StartTimer(void);
void MQTTRegistration_StopTimer(void);


/* global variable declarations */

/* global inline function definitions */

#endif /* MQTTREGISTRATION_H_ */