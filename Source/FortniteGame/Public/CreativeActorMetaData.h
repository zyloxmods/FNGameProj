#pragma once
#include "CoreMinimal.h"
#include "CreativeActorMetaData.generated.h"

USTRUCT(BlueprintType)
struct FCreativeActorMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceSize;
    
    FORTNITEGAME_API FCreativeActorMetaData();
};

