/*
 * EXI.c
 *
 *  Created on: Apr 12, 2025
 *      Author: DELL
 */

#include "std_types.h"
#include "mem_map.h"
#include "utils.h"
#include "EXI_interface.h"

void EXI_INIT(uint8 EXI_NO,uint8 EXI_SC){
	switch(EXI_NO){
	case INT2:
		switch(EXI_SC){
		case Low_Level:
			break;
		case Any_Logical_Level:
			break;
		case Falling_Edge:
			CLEAR_BIT(MCUCSR,6);
			break;
		case RISING_Edge:
			SET_BIT(MCUCSR,6);
			break;
		}
		break;
		case INT1:
			switch(EXI_SC){
			case Low_Level:
				CLEAR_BIT(MCUCR,2);
				CLEAR_BIT(MCUCR,3);
				break;
			case Any_Logical_Level:
				CLEAR_BIT(MCUCR,2);
				SET_BIT(MCUCR,3);
				break;
			case Falling_Edge:
				SET_BIT(MCUCR,2);
				CLEAR_BIT(MCUCR,3);
				break;
			case RISING_Edge:
				SET_BIT(MCUCR,2);
				SET_BIT(MCUCR,3);
				break;
			}
			break;
			case INT0:
				switch(EXI_SC){
				case Low_Level:
					CLEAR_BIT(MCUCR,0);
					CLEAR_BIT(MCUCR,1);
					break;
				case Any_Logical_Level:
					CLEAR_BIT(MCUCR,1);
					SET_BIT(MCUCR,0);
					break;
				case Falling_Edge:
					SET_BIT(MCUCR,0);
					CLEAR_BIT(MCUCR,1);
					break;
				case RISING_Edge:
					SET_BIT(MCUCR,0);
					SET_BIT(MCUCR,1);
					break;
				}
				break;
				default:
					break;
	}
}

void EXI_ENABLE(uint8 EXI_NO){
	switch(EXI_NO){
	case INT2:
		SET_BIT(GICR,5);
		break;
	case INT1:
		SET_BIT(GICR,7);
		break;
	case INT0:
		SET_BIT(GICR,6);
		break;
	default:
		break;
	}
}

void EXI_DISABLE(uint8 EXI_NO){
	switch(EXI_NO){
	case INT2:
		CLEAR_BIT(GICR,5);
		break;
	case INT1:
		CLEAR_BIT(GICR,5);
		break;
	case INT0:
		CLEAR_BIT(GICR,5);
		break;
	default:
		break;
	}
}
