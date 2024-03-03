#pragma once
#include "CoreMinimal.h"
#include "AdditionalLevelStreamed.generated.h"

USTRUCT(BlueprintType)
struct FAdditionalLevelStreamed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServerOnly;
    
    FORTNITEGAME_API FAdditionalLevelStreamed();
};

