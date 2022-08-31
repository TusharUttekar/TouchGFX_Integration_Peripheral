#include <gui/led_screen/LEDView.hpp>
#include "stm32f4xx_hal.h"

int Toggle_Freq;

LEDView::LEDView()
{

}

void LEDView::setupScreen()
{
    LEDViewBase::setupScreen();
}

void LEDView::tearDownScreen()
{
    LEDViewBase::tearDownScreen();
}

void LEDView::Toggle()
{
	if(ToggleButton.getState())
	{
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_SET);
	}
	else
	{
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_RESET);
	}
}

void LEDView::Slider_Moved(int value)
{
	Toggle_Freq = Toggle_Frequency.getValue();
}
