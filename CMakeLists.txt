cmake_minimum_required(VERSION 2.8.11)


set(CMAKE_BUILD_TYPE RELEASE)

set(CMAKE_CXX_FLAGS_DEBUG "-g3")
set(CMAKE_CXX_FLAGS_RELEASE "-g3 -O3")

set(Qt5 "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5")
set(Qt5Designer_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Designer")
set(Qt5Scxml_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Scxml")
set(Qt53DAnimation_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DAnimation")
set(Qt5Gamepad_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Gamepad")
set(Qt5Sensors_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Sensors")
set(Qt53DCore_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DCore")
set(Qt5Gui_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Gui")
set(Qt5SerialBus_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5SerialBus")
set(Qt53DExtras_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DExtras")
set(Qt5Help_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Help")
set(Qt5SerialPort_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5SerialPort")
set(Qt53DInput_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DInput")
set(Qt5LinguistTools_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5LinguistTools")
set(Qt5Sql_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Sql")
set(Qt53DLogic_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DLogic")
set(Qt5Location_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Location")
set(Qt5Svg_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Svg")
set(Qt53DQuick_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DQuick")
set(Qt5Multimedia_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Multimedia")
set(Qt5Test_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Test")
set(Qt53DQuickAnimation_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DQuickAnimation")
set(Qt5MultimediaWidgets_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5MultimediaWidgets")
set(Qt5TextToSpeech_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5TextToSpeech")
set(Qt53DQuickExtras_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DQuickExtras")
set(Qt5Network_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Network")
set(Qt5UiPlugin_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5UiPlugin")
set(Qt53DQuickInput_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DQuickInput")
set(Qt5Nfc_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Nfc")
set(Qt5UiTools_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5UiTools")
set(Qt53DQuickRender_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DQuickRender")
set(Qt5OpenGL_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5OpenGL")
set(Qt5WebChannel_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5WebChannel")
set(Qt53DQuickScene2D_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DQuickScene2D")
set(Qt5OpenGLExtensions_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5OpenGLExtensions")
set(Qt5WebSockets_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5WebSockets")
set(Qt53DRender_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt53DRender")
set(Qt5Positioning_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Positioning")
set(Qt5WebView_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5WebView")
set(Qt5Bluetooth_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Bluetooth")
set(Qt5PrintSupport_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5PrintSupport")
set(Qt5Widgets_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Widgets")
set(Qt5Charts_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Charts")
set(Qt5Qml_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Qml")
set(Qt5X11Extras_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5X11Extras")
set(Qt5Concurrent_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Concurrent")
set(Qt5Quick_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Quick")
set(Qt5Xml_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Xml")
set(Qt5Core_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5Core")
set(Qt5QuickControls2_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5QuickControls2")
set(Qt5XmlPatterns_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5XmlPatterns")
set(Qt5DataVisualization_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5DataVisualization")
set(Qt5QuickTest_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5QuickTest")
set(Qt5DBus_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5DBus")
set(Qt5QuickWidgets_DIR "/opt/Qt5.10.1/5.10.1/gcc_64/lib/cmake/Qt5QuickWidgets")


set(CMAKE_CXX_STANDARD 14)


set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON) # For meta object compiler
set(CMAKE_AUTORCC ON) # Resource files
set(CMAKE_AUTOUIC ON) # UI files


find_package(Qt5 COMPONENTS Widgets QuickWidgets Qml Quick QuickWidgets QuickControls2 REQUIRED)


add_executable(wow_exe main.cpp
        todomodel.cpp
        todolist.cpp
        todomodel.h
        todolist.h
        mainwindow.cpp
        mainwindow.h
        qml.qrc
        )

target_link_libraries(wow_exe
        Qt5::Quick
        Qt5::Widgets
        Qt5::QuickWidgets
        )
























