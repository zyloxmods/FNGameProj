#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "BacchusHUDElement.h"
#include "EComboSlotType.h"
#include "BacchusQuickbarComboSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBacchusQuickbarComboSlot : public UBacchusHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlotTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlotIndexName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlotSizeName;
    
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

