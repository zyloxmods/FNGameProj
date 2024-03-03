#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "FortMultiSizeBrush.h"
#include "GameplayTagContainer.h"
#include "FortAttributeModifierDisplayData.h"
#include "FortHomebaseUIContext.generated.h"

class UDataTable;
class UFortCampaignHeroLoadoutItem;
class UFortCollectionBookData;
class UFortGadgetItemDefinition;
class UFortHero;
class UFortItem;
class UFortMcpProfileCampaign;
class UFortQuestItemDefinition;
class UFortWorldItem;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortHomebaseUIContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSurvivorSquadsAutoSlotted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSquadSlotChanged, FName, SquadName, int32, SlotIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSlottedPrimaryHeroChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShouldAutoSlotSurvivorSquadsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNodesPurchased, FName, NodeId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDifferentHeroLoadoutViewed, const UFortCampaignHeroLoadoutItem*, PreviousLoadout, const UFortCampaignHeroLoadoutItem*, NewLoadout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDifferentHeroLoadoutSlotFocused, FName, SlotName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShouldAutoSlotSurvivorSquadsChanged OnShouldAutoSlotSurvivorSquadsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadSlotChanged OnSquadSlotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSurvivorSquadsAutoSlotted OnSurvivorSquadsAutoSlotted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNodesPurchased OnNodePurchased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlottedPrimaryHeroChanged OnSlottedPrimaryHeroChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDifferentHeroLoadoutViewed OnDifferentHeroLoadoutViewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDifferentHeroLoadoutSlotFocused OnDifferentHeroLoadoutSlotFocused;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SquadIconDataTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortGadgetItemDefinition*, UFortWorldItem*> GadgetDefinitionToInstanceMap;
    
public:
    UFortHomebaseUIContext();
    UFUNCTION(BlueprintCallable)
    void SetShouldAutoSlotSurvivorSquads(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentlyViewedHeroLoadout(const UFortCampaignHeroLoadoutItem* Loadout);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentlyFocusedHeroLoadoutSlotName(const FName SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroLoadoutSlotUnlocked(const FName SlotName, const UFortCampaignHeroLoadoutItem* Loadout) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySquadSlotUnlocked(const FName SquadId) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDifferentHeroLoadoutActivated(UFortMcpProfileCampaign* Profile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorkerSetBonusEffectModifiers(const FGameplayTag& SetBonusTag, TArray<FFortAttributeModifierDisplayData>& OutModifiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItemDefinition* GetUnlockingQuestDefinitionForSquadSlot(const FName SquadName, const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItemDefinition* GetUnlockingQuestDefinitionForHeroLoadoutSlot(const FName SlotName, const UFortCampaignHeroLoadoutItem* Loadout) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnlockedGadgets(TArray<UFortItem*>& UnlockedGadgets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortMultiSizeBrush GetSquadIcon(const FName SquadId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHero* GetSlottedPrimaryHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldAutoSlotSurvivorSquads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortItem*> GetItemsInSquad(const FName SquadId, bool bRemoveEmptySquadSlots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInSquadSlot(FName SquadName, int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCampaignHeroLoadoutItem* GetCurrentlyViewedHeroLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentlyFocusedHeroLoadoutSlotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCollectionBookData* GetCollectionBookData() const;
    
    UFUNCTION(BlueprintCallable)
    void AutoSlotAllSurvivorSquads();
    
};

