#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "SpatialFactionPerkReward.generated.h"

class UFortPlayerPerksItemDefinition;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionPerkReward : public UCommonButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTopRow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerPerksItemDefinition* Faction1PerksItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerPerksItemDefinition* Faction2PerksItemDef;
    
public:
    USpatialFactionPerkReward();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializePerkReward(int32 FactionNumber, int32 PerkLevel, const TSoftObjectPtr<UTexture2D>& RewardTexture, bool bIsRevealed, bool bIsEarned, bool bIsCurrentFaction, bool bShowBang);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFactionSet(bool bIsCurrentFaction);
    
};

