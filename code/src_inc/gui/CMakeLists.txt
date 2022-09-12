
link_directories(
        ${GTKMM_LIBRARY_DIRS}
)

# Defines the base filename of the library
set( LIB_NAME gareth_gui )

add_library( ${LIB_NAME} STATIC
        main_window.cpp
        )

add_library(Gareth::${LIB_NAME} ALIAS ${LIB_NAME})

message( STATUS "GTKMM_INCLUDE_DIRS is ${GTKMM_INCLUDE_DIRS}" )

target_link_libraries( ${LIB_NAME}
       ${GTKMM_LIBRARIES} 
)

target_include_directories(${LIB_NAME} PUBLIC
        ${GTKMM_INCLUDE_DIRS}
        PRIVATE
#       $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src_inc/common>
        )
target_compile_features(${LIB_NAME} PUBLIC cxx_std_17)

add_executable( tic_tac_toe
   main.cpp
)

target_include_directories(tic_tac_toe PUBLIC
	${GTKMM_INCLUDE_DIRS}
)
	   
target_link_libraries( tic_tac_toe
	${GTKMM_LIBRARIES} 
)
