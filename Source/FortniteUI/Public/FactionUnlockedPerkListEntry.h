#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FactionUnlockedPerkListEntry.generated.h"

class UFactionUnlockedPerkData;

UCLASS(Blueprintable, EditInlineNew)
class UFactionUnlockedPerkListEntry : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFactionUnlockedPerkData* Perk;
    
public:
    UFactionUnlockedPerkListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStaggerTimeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStaggerTimeElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSetup(UFactionUnlockedPerkData* InPerk);
    
    
    // Fix for true pure virtual functions not being implemented
};

