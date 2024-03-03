#pragma once
#include "CoreMinimal.h"
#include "FortItemDetailsHostPanel.h"
#include "FortItemManagementItemDetailsPanel.generated.h"

class UFortAmmoItemDefinition;
class UFortInventoryContext;
class UFortItemManagementScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementItemDetailsPanel : public UFortItemDetailsHostPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasItemMarkedForMulching;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemManagementScreen> HostItemManagementScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInventoryContext* InventoryContext;
    
public:
    UFortItemManagementItemDetailsPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHostSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHasItemMarkedForMulchingChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UFortAmmoItemDefinition*> GetAmmoTypeItemDefinitions();
    
};

