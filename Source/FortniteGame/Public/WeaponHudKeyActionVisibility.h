#pragma once
#include "CoreMinimal.h"
#include "WeaponHudKeyActionVisibility.generated.h"

USTRUCT(BlueprintType)
struct FWeaponHudKeyActionVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibility;
    
    FORTNITEGAME_API FWeaponHudKeyActionVisibility();
};

