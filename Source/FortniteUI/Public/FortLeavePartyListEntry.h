#pragma once
#include "CoreMinimal.h"
#include "SocialListInteractableEntryBase.h"
#include "FortLeavePartyListEntry.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLeavePartyListEntry : public USocialListInteractableEntryBase {
    GENERATED_BODY()
public:
    UFortLeavePartyListEntry();
};

