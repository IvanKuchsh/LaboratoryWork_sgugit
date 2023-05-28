cmake_minimum_required(VERSION 3.5)

project(Project VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/icon.rc")
set(APP_ICON_RESOURCE_MACOS "${CMAKE_CURRENT_SOURCE_DIR}/icon.icns")
set(APP_ICON_RESOURCE_LINUX "${CMAKE_CURRENT_SOURCE_DIR}/icon.png")

if (WIN32)
  set(APP_ICON_RESOURCE "${APP_ICON_RESOURCE_WINDOWS}")
elseif (APPLE)
  set(APP_ICON_RESOURCE "${APP_ICON_RESOURCE_MACOS}")
else()
  set(APP_ICON_RESOURCE "${APP_ICON_RESOURCE_LINUX}")
endif()

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        calculationthird.cpp
        calculationSecond.cpp
        chooseoption.cpp
        option.cpp
        information.cpp
        mainwindow.h
        calculationsecond.h
        calculationthird.h
        chooseoption.h
        option.h
        information.h
        mainwindow.ui
        calculationsecond.ui
        calculationthird.ui
        chooseoption.ui
        information.ui
        ${APP_ICON_RESOURCE}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Project
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Project APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Project SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Project
            ${PROJECT_SOURCES}
        )
    endif()
endif()


target_link_libraries(Project PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(Project PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)



install(TARGETS Project
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Project)
endif()
