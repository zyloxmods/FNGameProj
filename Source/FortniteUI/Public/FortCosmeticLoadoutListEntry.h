#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortCosmeticLoadoutCardButton.h"
#include "FortCosmeticLoadoutListEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticLoadoutListEntry : public UFortCosmeticLoadoutCardButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UFortCosmeticLoadoutListEntry();
    
    // Fix for true pure virtual functions not being implemented
};

