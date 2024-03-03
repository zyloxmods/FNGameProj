#pragma once
#include "CoreMinimal.h"
#include "CommonBoundActionButton.h"
#include "Templates/SubclassOf.h"
#include "FortBoundActionButton.generated.h"

class UCommonButtonStyle;

UCLASS(Blueprintable, EditInlineNew)
class UFortBoundActionButton : public UCommonBoundActionButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> KeyboardStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> LargeKeyboardStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> GamepadStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> LargeGamepadStyle;
    
public:
    UFortBoundActionButton();
};

