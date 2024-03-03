#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "GameplayTagContainer.h"
#include "BacchusQuickbarBase.h"
#include "EComboSlotType.h"
#include "BacchusQuickbarComboSlot.generated.h"

class UBacchusQuickbarSlotBase;

UCLASS(Blueprintable, EditInlineNew)
class UBacchusQuickbarComboSlot : public UBacchusQuickbarBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusQuickbarSlotBase* PrimarySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusQuickbarSlotBase* SecondarySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusQuickbarSlotBase* CreativeSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTypePropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotLockPropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotNumberPropertyTag;
    
public:
    UBacchusQuickbarComboSlot();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSize(float NewButtonSize);
    
    UFUNCTION(BlueprintCallable)
    void SetQuickbarType(int32 NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortQuickBars GetQuickbarType() const;
    
};

