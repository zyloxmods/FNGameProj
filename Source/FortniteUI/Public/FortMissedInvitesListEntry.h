#pragma once
#include "CoreMinimal.h"
#include "SocialListInteractableEntryBase.h"
#include "FortMissedInvitesListEntry.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissedInvitesListEntry : public USocialListInteractableEntryBase {
    GENERATED_BODY()
public:
    UFortMissedInvitesListEntry();
};

