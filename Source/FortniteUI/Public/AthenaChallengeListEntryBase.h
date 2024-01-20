#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "AthenaChallengeListEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeListEntryBase : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
    UAthenaChallengeListEntryBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndHighlight();
    
    
    // Fix for true pure virtual functions not being implemented
};

