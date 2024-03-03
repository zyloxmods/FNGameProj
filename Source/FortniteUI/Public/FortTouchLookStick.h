#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BacchusHUDElement.h"
#include "FortTouchLookStick.generated.h"

class UBacchusActionButton;
class UImage;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortTouchLookStick : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MainSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UImage> FireImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FireImageAbsoluteOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusActionButton* Button_DBNOCarryThrow;
    
public:
    UFortTouchLookStick();
    UFUNCTION(BlueprintCallable)
    void SetTouchStickPositionLocal(FVector2D TouchPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchStickPositionAbsolute(FVector2D TouchPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(float NewSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFiringState(bool IsFiring);
    
    UFUNCTION(BlueprintCallable)
    void OnFireFromIndexStopped(const int32 StopFireIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFireButtonUnderTouch(FVector2D TouchPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowAllTimeTime() const;
    
};

