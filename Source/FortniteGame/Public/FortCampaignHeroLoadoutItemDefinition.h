#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCrewSlotInformation.h"
#include "FortProfileItemDefinition.h"
#include "FortCampaignHeroLoadoutItemDefinition.generated.h"

class UFortHomebaseNodeItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UFortCampaignHeroLoadoutItemDefinition : public UFortProfileItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCrewSlotInformation> CrewSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery CommanderSlotQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery SupportHeroSlotQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetSlotsAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotUnlockSquadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortHomebaseNodeItemDefinition> TeamPerkUnlockNode;
    
public:
    UFortCampaignHeroLoadoutItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCrewSlotInformation> GetSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndexByName(const FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortCrewSlotInformation GetCommanderSlot() const;
    
};

