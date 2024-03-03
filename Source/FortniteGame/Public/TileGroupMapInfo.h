#pragma once
#include "CoreMinimal.h"
#include "TileGroupMapInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FTileGroupMapInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> GroupWorld;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuotaCategory;
    
    FORTNITEGAME_API FTileGroupMapInfo();
};

