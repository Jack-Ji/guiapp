// my_app.cpp
#include <Mahi/Gui.hpp>
#include <Mahi/Util.hpp>

using namespace mahi::gui;
using namespace mahi::util;

// Inherit from Application
class MyApp : public Application {
public:
  // 1280x800 px window
  MyApp() : Application(1280,800,"My App") { }

  // Override update (called once per frame)
  void update() override {
    // App logic and/or ImGui code goes here
    ImGui::ShowDemoWindow();
    ImPlot::ShowDemoWindow();
  }
};

int main() {
  MyApp app;
  app.run();
  return 0;
}
