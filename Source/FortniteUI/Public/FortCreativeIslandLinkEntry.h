#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortCreativeIslandLinkEntry.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandLinkEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UFortCreativeIslandLinkEntry();
    
    // Fix for true pure virtual functions not being implemented
};

