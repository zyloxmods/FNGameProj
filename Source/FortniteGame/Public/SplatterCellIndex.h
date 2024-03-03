#pragma once
#include "CoreMinimal.h"
#include "SplatterCellIndex.generated.h"

USTRUCT(BlueprintType)
struct FSplatterCellIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    FORTNITEGAME_API FSplatterCellIndex();
};

