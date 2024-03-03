#pragma once
#include "CoreMinimal.h"
#include "ECommonGamepadType.h"
#include "ECommonInputType.h"
#include "Engine/DataTable.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Styling/SlateBrush.h"
#include "CommonUISubsystem.generated.h"

class UCommonInputManager;

UCLASS(Blueprintable)
class COMMONUI_API UCommonUISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputSuspensionChanged, bool, bInputSuspended);
    
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

