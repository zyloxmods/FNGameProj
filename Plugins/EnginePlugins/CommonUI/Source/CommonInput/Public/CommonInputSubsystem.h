#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ECommonGamepadType.h"
#include "ECommonInputType.h"
#include "InputMethodChangedDelegateDelegate.h"
#include "CommonInputSubsystem.generated.h"

UCLASS(Blueprintable)
class COMMONINPUT_API UCommonInputSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMethodChangedDelegate OnInputMethodChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfInputMethodChangesRecently;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double LastInputMethodChangeTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double LastTimeInputMethodThrashingBegan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommonInputType LastInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommonInputType CurrentInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommonGamepadType GamepadInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ECommonInputType> CurrentInputLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGamepadSimulatedClick;
    
public:
    UCommonInputSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowInputKeys() const;
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadInputType(ECommonGamepadType InGamepadInputType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInputType(ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPointerInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputMethodActive(ECommonInputType InputMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonInputType GetDefaultInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonInputType GetCurrentInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonGamepadType GetCurrentGamepadType() const;
    
};

