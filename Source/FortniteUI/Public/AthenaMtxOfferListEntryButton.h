#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaStaticMtxOfferButton.h"
#include "AthenaMtxOfferListEntryButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMtxOfferListEntryButton : public UAthenaStaticMtxOfferButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UAthenaMtxOfferListEntryButton();
    
    // Fix for true pure virtual functions not being implemented
};

