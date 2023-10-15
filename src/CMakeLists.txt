find_package(SDL2 REQUIRED)
find_package(SDL2_mixer REQUIRED)

set(APP_BUNDLE_CONTENTS_DIR "${CMAKE_CURRENT_BINARY_DIR}/rap.app/Contents")
set(APP_BUNDLE_FRAMEWORKS_DIR "${APP_BUNDLE_CONTENTS_DIR}/Frameworks")

add_definitions( -Wall )

add_library(rapcore STATIC
    rap.c
    tile.c
    tile_a.c
    shots.c
    eshot.c
    shadows.c
    enemy.c
    flame.c
    objects.c
    bonus.c
    fx.c
    input.c
    anims.c
    movie.c
    store.c
    intro.c
    loadsave.c
    help.c
    windows.c
    shadows.c

    gfx/exitapi.c
    gfx/imsapi.c
    gfx/glbapi.c
    gfx/gfxapi.c
    gfx/gfxapi_a.c
    gfx/kbdapi.c
    gfx/prefapi.c
    gfx/ptrapi.c
    gfx/ptrapi_a.c
    gfx/swdapi.c
    gfx/tsmapi.c
    gfx/vmemapi.c

    apodmx/dmx.c
    apodmx/mus2mid.c
)
target_include_directories(rapcore PUBLIC dos gfx apodmx)
target_compile_definitions(rapcore PUBLIC -D_loadds= -Dfar= -D_far= -D_interrupt= -D__cdecl= -Dcdecl= )
target_compile_definitions(rapcore PRIVATE -Dstricmp=strcmpi -Dmain=_dos_main -Dopen=_dos_open -Daccess=_dos_access -Dfopen=_dos_fopen)
target_link_libraries(rapcore PRIVATE -lm)

add_executable(rap MACOSX_BUNDLE
    dos/dos.c
)

target_link_libraries(rap PRIVATE rapcore SDL2_mixer::SDL2_mixer SDL2::SDL2)

set_target_properties(${CUR_TARGET} PROPERTIES
    BUNDLE TRUE
    MACOSX_BUNDLE_GUI_IDENTIFIER com.github.whoozle.raptor
    MACOSX_BUNDLE_BUNDLE_NAME Raptor
    MACOSX_BUNDLE_BUNDLE_VERSION "1.2"
    MACOSX_BUNDLE_SHORT_VERSION_STRING "1.2"
)

install(TARGETS rap DESTINATION bin)

if (APPLE)
    add_custom_command(TARGET rap
        POST_BUILD COMMAND
        install_name_tool -add_rpath "@executable_path/../Frameworks/"
        "${APP_BUNDLE_CONTENTS_DIR}/MacOS/rap")
endif()