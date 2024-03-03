#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FilledGadgetSlot.h"
#include "FortProfileItem.h"
#include "FortCampaignHeroLoadoutItem.generated.h"

class UFortGadgetItemDefinition;
class UFortHero;
class UFortTeamPerkItem;
class UFortTeamPerkItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UFortCampaignHeroLoadoutItem : public UFortProfileItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString loadout_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 loadout_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> crew_members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFilledGadgetSlot> Gadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString team_perk;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> CrewMembers;
    
public:
    UFortCampaignHeroLoadoutItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamPerkProgressive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamPerkActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamPerkMaxActivationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortTeamPerkItemDefinition* GetTeamPerkItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamPerkActivationLevelAndSatisfyingSlotIndices(TArray<int32>& OutSatisfyingSlotIndices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamPerkActivationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortTeamPerkItem* GetTeamPerk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSupportHeroesAndSupportSlotIndices(TArray<UFortHero*>& OutHeroes, TArray<int32>& OutSupportSlotIndices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSupportHeroes(TArray<UFortHero*>& OutHeroes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSlotNameByHero(const UFortHero* Hero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutOrdinal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHeroesBySlotTag(const FGameplayTagQuery& TagQuery, TArray<UFortHero*>& OutHeroes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHeroes(TArray<UFortHero*>& OutHeroes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHero* GetHeroBySlotName(const FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGadgetItemDefinition* GetGadgetDefinitionBySlotIndex(const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHero* GetCommanderHero() const;
    
};

