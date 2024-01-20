#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ECommonGamepadType.h"
#include "ECommonInputType.h"
#include "CommonInputSubsystem.generated.h"

UCLASS(Blueprintable)
class COMMONINPUT_API UCommonInputSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputMethodChangedDelegate, ECommonInputType, bNewInputType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMethodChangedDelegate OnInputMethodChanged;
    
private:
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
    ECommonInputType GetDefaultInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonInputType GetCurrentInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonGamepadType GetCurrentGamepadType() const;
    
};

