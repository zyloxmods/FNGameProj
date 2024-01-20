#pragma once
#include "CoreMinimal.h"
#include "BuildingSupportCellIndex.generated.h"

USTRUCT(BlueprintType)
struct FBuildingSupportCellIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    FORTNITEGAME_API FBuildingSupportCellIndex();
};

