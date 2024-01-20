#pragma once
#include "CoreMinimal.h"
#include "FortSprayDecalRepPayload.generated.h"

class UAthenaSprayItemDefinition;

USTRUCT(BlueprintType)
struct FFortSprayDecalRepPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UAthenaSprayItemDefinition* SprayAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BannerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BannerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedStatValue;
    
    FORTNITEGAME_API FFortSprayDecalRepPayload();
};

