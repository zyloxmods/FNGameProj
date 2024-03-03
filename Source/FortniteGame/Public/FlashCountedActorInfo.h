#pragma once
#include "CoreMinimal.h"
#include "CreativeSelectedActorInfo.h"
#include "FlashCountedActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FFlashCountedActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeSelectedActorInfo> Actors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FlashCounter;
    
    FORTNITEGAME_API FFlashCountedActorInfo();
};

