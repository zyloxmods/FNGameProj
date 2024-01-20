#include "FortDecoTool_ContextTrap.h"
#include "Net/UnrealNetwork.h"

void AFortDecoTool_ContextTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDecoTool_ContextTrap, ContextTrapItemDefinition);
}

AFortDecoTool_ContextTrap::AFortDecoTool_ContextTrap() {
    this->ContextTrapItemDefinition = NULL;
}

