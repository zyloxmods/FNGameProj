#include "AthenaEventTokenItemDefinition.h"

UAthenaEventTokenItemDefinition::UAthenaEventTokenItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    TokenType = EEventTokenType::Invite;
}

