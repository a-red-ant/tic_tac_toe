
# Defines the base filename of the library
set( LIB_NAME gareth_common )

add_library( ${LIB_NAME} STATIC
        board.cpp
        )

add_library(Gareth::${LIB_NAME} ALIAS ${LIB_NAME})

target_link_libraries( ${LIB_NAME}
)

target_include_directories(${LIB_NAME} PUBLIC
        PRIVATE
#       $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src_inc/common>
        )
target_compile_features(${LIB_NAME} PUBLIC cxx_std_17)
