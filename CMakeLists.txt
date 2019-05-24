cmake_minimum_required(VERSION 3.5)

project(CppDesignPatterns)

set(PATTERNS
    abstract-factory
    adapter
    bridge
    builder
    chain-of-responsibility
    command
    composite
    decorator
    facade
    factory-method
    flyweight
    interpreter
    iterator
    mediator
    memento
    observer
    prototype
    proxy
    singleton
    state
    strategy
    template-method
    visitor
)

foreach(_dir IN ITEMS ${PATTERNS})
    file(GLOB _files "${_dir}/*.cpp")
    message(STATUS "Pattern `${_dir}':")

    foreach(_file IN ITEMS ${_files})

        get_filename_component(_file_name
                                ${_file} NAME
        )

        set(_project_name "${_file_name}")
        message(STATUS "  ${_dir}/${_file_name} is going to be built")
        
        add_executable(${_project_name} "${_dir}/${_file_name}")
    endforeach()
    
endforeach()
