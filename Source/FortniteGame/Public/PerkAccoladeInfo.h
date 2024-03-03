#pragma once
#include "CoreMinimal.h"
#include "PerkAccoladeInfo.generated.h"

class UFortAccoladeItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPerkAccoladeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccoladeItemDefinition* AccoladeDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PipCount;
    
    FPerkAccoladeInfo();
};

