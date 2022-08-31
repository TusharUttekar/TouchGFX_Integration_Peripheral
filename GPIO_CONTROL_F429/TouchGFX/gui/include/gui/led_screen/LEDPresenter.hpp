#ifndef LEDPRESENTER_HPP
#define LEDPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class LEDView;

class LEDPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    LEDPresenter(LEDView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~LEDPresenter() {};

private:
    LEDPresenter();

    LEDView& view;
};

#endif // LEDPRESENTER_HPP
