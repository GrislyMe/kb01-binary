idf_component_register(SRCS "kb01.cpp"
                    INCLUDE_DIRS "../include/")
target_compile_options(${COMPONENT_LIB} PRIVATE -std=gnu++20)
