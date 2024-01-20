#pragma once
#include "CoreMinimal.h"
#include "WeaponHudData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponHudData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GamepadActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionDescription;
    
    FORTNITEGAME_API FWeaponHudData();
};

