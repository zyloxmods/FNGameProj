#pragma once
#include "CoreMinimal.h"
#include "EFortMtxPlatform.h"
#include "FortMtxPlatformList.generated.h"

USTRUCT(BlueprintType)
struct FFortMtxPlatformList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortMtxPlatform> MtxPlatformList;
    
    FORTNITEGAME_API FFortMtxPlatformList();
};

