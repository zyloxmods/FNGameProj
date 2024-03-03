#pragma once
#include "CoreMinimal.h"
#include "DevHeroClassInfo.generated.h"

USTRUCT(BlueprintType)
struct FDevHeroClassInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FORTNITEGAME_API FDevHeroClassInfo();
};

