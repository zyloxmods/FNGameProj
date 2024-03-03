#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortBulletPatternEntry.generated.h"

USTRUCT(BlueprintType)
struct FFortBulletPatternEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeRotation;
    
    FORTNITEGAME_API FFortBulletPatternEntry();
};

