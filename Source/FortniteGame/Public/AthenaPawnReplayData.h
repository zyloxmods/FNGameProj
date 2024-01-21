#pragma once
#include "CoreMinimal.h"
#include "AthenaPawnReplayData.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FAthenaPawnReplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldRatio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CipherText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    FORTNITEGAME_API FAthenaPawnReplayData();
};

