#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleStatSource.h"
#include "CrucibleStatValue.generated.h"

USTRUCT(BlueprintType)
struct FCrucibleStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BestTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RawBestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCrucibleStatSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackendStatName;
    
    FORTNITEGAME_API FCrucibleStatValue();
};

