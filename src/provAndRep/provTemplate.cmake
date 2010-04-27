message ( STATUS "" )
message ( STATUS " _..::: Configuring ${ProviderName} :::.._ " )
message ( STATUS "" )


#___________________________________________________________________
# If the user modules are build statically linked autogenerated code
# will register them into the providers factory. This solve the 
# issue in which the linker will not copy any not used symbol
# into the executable and thus not the global variable that 
# registers normally the provider.


if ( "${ModuleBuildType}" STREQUAL "STATIC" )


# Check that the name of the Provider is the same with the header file 

file ( READ ${ProviderName}.h FileData )

if ( NOT FileData )
   message ( "Warning: ${CMAKE_CURRENT_SOURCE_DIR}/${ProviderName}.h does not exist!" )
   message ( "Warning: The ProviderName, the directory, the filename of the header file and the class name" )
   message ( "         must have the same name. The name IS case sensitive! " )
endif ( NOT FileData )


# The read file has to declare a class with the same name as the Provider's Name 

string ( REGEX MATCH "class ${ProviderName} " ClassFound ${FileData} )

if ( "A${ClassFound}A" STREQUAL "AA" )
    message ( "Warning: Cound not find class ${ProviderName} in ${ProviderName}.h ")
endif ( "A${ClassFound}A" STREQUAL "AA" )


# Autogenerate the cpp code that needed to register the new provider into the factory

file ( APPEND ../providerRegistry.h "\n" )
file ( APPEND ../providerRegistry.h "#include \"${ProviderName}/${ProviderName}.h\" \n" )
file ( APPEND ../providerRegistry.h "namespace { \n" )
file ( APPEND ../providerRegistry.h "   ProviderRegistrar<${ProviderName}>::Type temp_${ProviderName}\(\"${ProviderName}\"\); \n")
file ( APPEND ../providerRegistry.h "}\n" )
file ( APPEND ../providerRegistry.h "\n" )


endif ( "${ModuleBuildType}" STREQUAL "STATIC" )



#___________________________________________________________________
# If the user module is not built as "MODULE" ( run-time dynamically 
# linked library ), the library has to be linked with the executable.
# Thus the library name is appended to the appropriate variable.

if ( NOT "${ModuleBuildType}" STREQUAL "MODULE" )
set ( ModuleLibraries ${ModuleLibraries} ${ProviderName} PARENT_SCOPE )
endif ( NOT "${ModuleBuildType}" STREQUAL "MODULE" )



add_library ( ${ProviderName} ${ModuleBuildType} ${ProviderSrcs} )
    
install ( TARGETS ${ProviderName} 
            RUNTIME DESTINATION   bin
            LIBRARY DESTINATION   lib
            ARCHIVE DESTINATION   lib/static )