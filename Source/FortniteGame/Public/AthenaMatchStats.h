#pragma once
#include "CoreMinimal.h"
#include "AthenaWeaponStats.h"
#include "AthenaMatchStats.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaMatchStats {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatBucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchPlatform;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stats[20];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaWeaponStats> WeaponStats;
    
public:
    FAthenaMatchStats();
};

