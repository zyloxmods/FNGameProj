#pragma once
#include "CoreMinimal.h"
#include "FortGiftBoxFortmatData.generated.h"

USTRUCT(BlueprintType)
struct FFortGiftBoxFortmatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringAssetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringData;
    
    FORTNITEGAME_API FFortGiftBoxFortmatData();
};

