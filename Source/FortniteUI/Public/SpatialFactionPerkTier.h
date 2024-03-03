#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SpatialFactionPerkTier.generated.h"

class USpatialFactionPerkProgress;
class USpatialFactionPerkReward;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionPerkTier : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpatialFactionPerkReward* Reward_Faction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpatialFactionPerkProgress* Progress_Faction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpatialFactionPerkReward* Reward_Faction2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpatialFactionPerkProgress* Progress_Faction2;
    
public:
    USpatialFactionPerkTier();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializePerkTier(int32 PerkLevel, bool bIsRevealed, int32 PerkIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFactionSet(bool bIsCurrentFactionEarned, bool bIsRevealed, int32 FactionNumber);
    
};

