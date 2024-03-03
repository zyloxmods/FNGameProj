#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMinigameItemContainerComponent.h"
#include "FortPickupInstigator.h"
#include "FortPropertyOverrideReplProvider.h"
#include "MinigameItemData.h"
#include "MinigameSpawnerSpawnParams.h"
#include "PickupInstigatorData.h"
#include "FortMinigameItemListComponent.generated.h"

class AFortPlayerController;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMinigameItemListComponent : public UFortMinigameItemContainerComponent, public IFortPickupInstigator, public IFortPropertyOverrideReplProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupInstigatorData BaseInstigatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowItemTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowItemCustomization;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ItemListData, meta=(AllowPrivateAccess=true))
    TArray<FMinigameItemData> ItemListData;
    
public:
    UFortMinigameItemListComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetPropertyOverridesForItem(const TMap<FString, FString>& NewOptions, int32 ItemIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetBaseInstigatorData(const FPickupInstigatorData& InstigatorData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveItem(int32 ItemIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemListData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMinigameSpawnerSpawnParams> MakeSpawnParamsList(const FTransform& SpawnTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMinigameSpawnerSpawnParams MakeSpawnParams(const int32 Index, const FTransform& SpawnTransform) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_NotifyItemListChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyOverridesForItem(TMap<FString, FString>& CurrentOptions, int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortWorldItemDefinition*> GetContainedItems() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditItemListComponent(AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddItemsFromSpawnParams(const TArray<FMinigameSpawnerSpawnParams>& ItemSpawnParams);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddItem(UFortWorldItemDefinition* ItemDefinition, int32 ItemQuantity);
    
    
    // Fix for true pure virtual functions not being implemented
};

