/*
 * clock.c
 *
 *  Created on: Oct 24, 2013
 *      Author: C15William.Parks
 */
#include <msp430.h>


void setClock16MegHz(){
	DCOCTL &= 0;
	DCOCTL = CALDCO_16MHZ;
	BCSCTL1 = CALBC1_16MHZ;
}

void setClock12MegHz(){
	DCOCTL &= 0;
	DCOCTL = CALDCO_12MHZ;
	BCSCTL1 = CALBC1_12MHZ;
}

void setClock8MegHz(){
	DCOCTL &= 0;
	DCOCTL = CALDCO_8MHZ;
	BCSCTL1 = CALBC1_8MHZ;
}

void setClock1MegHz(){
	DCOCTL &= 0;
	DCOCTL = CALDCO_1MHZ;
	BCSCTL1 = CALBC1_1MHZ;
}


