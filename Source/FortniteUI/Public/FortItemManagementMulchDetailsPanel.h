#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemManagementMulchDetailsPanel.generated.h"

class IFortItemManagementMulchPanel;
class UFortItemManagementMulchPanel;
class UFortInventoryContext;
class UFortItem;
class UFortItemQuantityListBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementMulchDetailsPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemQuantityListBase* ResourceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemManagementMulchPanel> HostItemManagementMulchPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInventoryContext* InventoryContext;
    
public:
    UFortItemManagementMulchDetailsPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpaceAvailableForMulch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetOfItemsToMulchChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHostSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortItem*> GetItemsToMulch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetItemCountsToMulch() const;
    
    UFUNCTION(BlueprintCallable)
    void CommitMulch();
    
};

