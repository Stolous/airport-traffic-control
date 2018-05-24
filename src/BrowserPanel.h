#pragma once

#include <FL/Fl_Box.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Browser.H>


namespace AirportControl {

class BrowserPanel : public Fl_Double_Window {
public:
	BrowserPanel(int x, int y, int width, int height, const char* title);
	~BrowserPanel();

	Fl_Box* box;
	Fl_Browser* browser;

	virtual void UpdateBrowser();
};

class TakeoffPanel : public BrowserPanel {
public:
	TakeoffPanel(int x, int y, int width, int height, const char* title);
	void UpdateBrowser() override;
};

class LandingPanel : public BrowserPanel {
public:
	LandingPanel(int x, int y, int width, int height, const char* title);
	void UpdateBrowser() override;
};

}