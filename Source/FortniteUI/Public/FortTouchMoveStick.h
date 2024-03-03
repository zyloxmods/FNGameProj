#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BacchusHUDElement.h"
#include "FortTouchMoveStick.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortTouchMoveStick : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMoveStickIsLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowWhenTouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTouchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TouchStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveStickPos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AlwaysShowPropertyTag;
    
public:
    UFortTouchMoveStick();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStickPositionBP(FVector2D NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetStickPosition(FVector2D NewPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMovementLockStatus(bool MovementIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTouched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTouchStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTouchEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetStickPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHalfHeight() const;
    
};

