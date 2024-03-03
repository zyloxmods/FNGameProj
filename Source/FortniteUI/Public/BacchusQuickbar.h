#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "GameplayTagContainer.h"
#include "BacchusQuickbarBase.h"
#include "EComboSlotType.h"
#include "BacchusQuickbar.generated.h"

class UCommonVisibilitySwitcher;
class UFortQuickbarBase;

UCLASS(Blueprintable, EditInlineNew)
class UBacchusQuickbar : public UBacchusQuickbarBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBackwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuickbarBase* BacchusQuickbarPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuickbarBase* BacchusQuickbarSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuickbarBase* BacchusQuickbarCreative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* BarSwitcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotLocksPropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReversePropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTypePropertyTag;
    
public:
    UBacchusQuickbar();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickbarChanged(UFortQuickbarBase* NewBar, UFortQuickbarBase* OldBar);
    
    UFUNCTION(BlueprintCallable)
    void OnModeChanged(EFortQuickBars NewQuickbar, const int32 FocusedSlot);
    
};

