#pragma once
#include "CoreMinimal.h"
#include "ActionDefForUI.generated.h"

USTRUCT(BlueprintType)
struct FActionDefForUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GamepadInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionLabel;
    
    FORTNITEGAME_API FActionDefForUI();
};

