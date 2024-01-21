#pragma once
#include "CoreMinimal.h"
#include "PermaniteBoundariesInfo.generated.h"

USTRUCT(BlueprintType)
struct FPermaniteBoundariesInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPermaniteStructures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPermaniteStructures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AveragePermaniteStructureLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPermaniteStructureLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPermaniteStructureLevel;
    
    FORTNITEGAME_API FPermaniteBoundariesInfo();
};

