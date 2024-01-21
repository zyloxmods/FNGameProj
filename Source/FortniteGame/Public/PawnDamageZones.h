#pragma once
#include "CoreMinimal.h"
#include "PawnDamageZones.generated.h"

USTRUCT(BlueprintType)
struct FPawnDamageZones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Bones;
    
    FORTNITEGAME_API FPawnDamageZones();
};

