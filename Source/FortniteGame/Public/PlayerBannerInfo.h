#pragma once
#include "CoreMinimal.h"
#include "PlayerBannerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerBannerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FORTNITEGAME_API FPlayerBannerInfo();
};

