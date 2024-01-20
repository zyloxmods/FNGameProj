#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryCustomFilter.h"
#include "FortActivatablePanel.h"
#include "FortItemManagementCustomFilterModalWidget.generated.h"

class UFortItemManagementScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementCustomFilterModalWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemManagementScreen> HostItemManagementScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortInventoryCustomFilter> AvailableFilters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<EFortInventoryCustomFilter> LocalCustomFilterSet;
    
public:
    UFortItemManagementCustomFilterModalWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleFilter(EFortInventoryCustomFilter Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCommitCustomFilter(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomFilterSetUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCommitCustomFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomFilterEnabled(EFortInventoryCustomFilter Filter) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAllFilters();
    
    UFUNCTION(BlueprintCallable)
    void DisableAllFilters();
    
    UFUNCTION(BlueprintCallable)
    void CommitCustomFilters();
    
};

