message ( STATUS "" )
message ( STATUS " _..::: Configuring Statechart Engine :::.._ " )
message ( STATUS "" )

# TODO
include_directories ( AFTER ../narukom/
                            ../narukom/message_definitions/
                            ../narukom/messages/
                            ../narukom/network/
                            ../narukom/pub_sub/
                            ../narukom/system/ )

add_library ( statechartEngine  ${LibBuildType}
                                AndState.cpp
                                BasicState.cpp
                                EndState.cpp
                                IAction.cpp
                                ICondition.cpp
                                IEvent.cpp
                                IParameter.cpp
                                OrState.cpp
                                StartState.cpp
                                State.cpp
                                Statechart.cpp
                                Transitions/ConditionConnector.cpp
                                Transitions/TransitionConnector.cpp 
)

install ( TARGETS statechartEngine
        RUNTIME DESTINATION   bin
        LIBRARY DESTINATION   lib
        ARCHIVE DESTINATION   lib/static )

set ( TargetLinkLibraries ${TargetLinkLibraries} statechartEngine PARENT_SCOPE )

