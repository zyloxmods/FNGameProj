#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonGamepadType -FallbackName=ECommonGamepadType
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CommonUISubsystem.generated.h"

class UCommonInputManager;

UCLASS(Blueprintable)
class COMMONUI_API UCommonUISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputSuspensionChanged, bool, bInputSuspended);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputMethodChangedDelegate, bool, bUsingGamepad);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMethodChangedDelegate OnInputMethodChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSuspensionChanged OnInputSuspensionChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonInputManager* CommonInputManager;
    
public:
    UCommonUISubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonInputManager* GetInputManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, ECommonGamepadType GamepadType) const;
    
};

