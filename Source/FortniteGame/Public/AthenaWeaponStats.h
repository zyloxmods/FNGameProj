#pragma once
#include "CoreMinimal.h"
#include "AthenaWeaponStats.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaWeaponStats {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stats[17];
    
public:
    FAthenaWeaponStats();
};

