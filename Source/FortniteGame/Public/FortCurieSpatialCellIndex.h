#pragma once
#include "CoreMinimal.h"
#include "FortCurieSpatialCellIndex.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieSpatialCellIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    FORTNITEGAME_API FFortCurieSpatialCellIndex();
};

