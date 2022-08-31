#ifndef LEDVIEW_HPP
#define LEDVIEW_HPP

#include <gui_generated/led_screen/LEDViewBase.hpp>
#include <gui/led_screen/LEDPresenter.hpp>

class LEDView : public LEDViewBase
{
public:
    LEDView();
    virtual ~LEDView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void Toggle();
    virtual void Slider_Moved(int value);
protected:
};

#endif // LEDVIEW_HPP
