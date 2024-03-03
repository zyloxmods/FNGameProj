#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PerkSelectionEntryWidget.generated.h"

class UFortSpyTechItemDefinition;
class UPerkSelectionEntryWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPerkSelectionEntryWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPerkSelected, UPerkSelectionEntryWidget*, Widget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerkSelected OnPerkSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSpyTechItemDefinition* ItemA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSpyTechItemDefinition* ItemB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> AllSelectableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> AllSelectablePassives;
    
public:
    UPerkSelectionEntryWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItems_BP(UFortSpyTechItemDefinition* FirstItem, UFortSpyTechItemDefinition* SecondItem);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionMade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTechSelectVerboseModeEnabled() const;
    
};

