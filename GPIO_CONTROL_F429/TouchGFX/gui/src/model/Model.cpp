#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f4xx_hal.h"

extern int Toggle_Freq;
int Tick_Count;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	Tick_Count++;

	if(Tick_Count % Toggle_Freq == 0)
	{
		HAL_GPIO_TogglePin(GPIOG, GPIO_PIN_14);
		Tick_Count = 0;
	}
}
