#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "FortQuickBarSlotBase.h"
#include "BacchusQuickbarSlotBase.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBacchusQuickbarSlotBase : public UFortQuickBarSlotBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOngoingUseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTapToLockEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsDragAndDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDragDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDragOpStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractionStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TouchedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor UntouchedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectionHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LockIcon;
    
public:
    UBacchusQuickbarSlotBase();
    UFUNCTION(BlueprintCallable)
    void StopUseSlot(int32 PointerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOngoingUse(int32 PointerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SlotSelected(int32 PointerIndex, bool bStopUseImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndInteraction(int32 PointerIndex);
    
};

