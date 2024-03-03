#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortItemQuantityPair.h"
#include "EFortItemInspectionMode.h"
#include "Templates/SubclassOf.h"
#include "FortItemQuantityListBase.generated.h"

class UFortItemDefinition;
class UFortItemQuantityListEntryBase;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemQuantityListBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemInspectionMode CurrentInspectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListenToInventoryChanges;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemQuantityListEntryBase> ListEntryWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ItemObjectsToKeepAlive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> FortItemDefinitions;
    
public:
    UFortItemQuantityListBase();
    UFUNCTION(BlueprintCallable)
    void SetItemToCompareDefinitionsAndQuantities(const TArray<FFortItemQuantityPair>& ItemToCompareQuantityPairs);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInstancesAndQuantities(const TArray<FFortItemInstanceQuantityPair>& ItemQuantityPairs, const bool ShouldResetWidgets);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInspectMode(EFortItemInspectionMode InspectMode);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDefinitionsAndQuantities(const TArray<FFortItemQuantityPair>& ItemQuantityPairs, const bool ShouldResetWidgets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemInspectModeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyList() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UFortItemDefinition*> GetItemDefinitions();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddListEntry(UFortItemQuantityListEntryBase* ListEntry);
    
};

