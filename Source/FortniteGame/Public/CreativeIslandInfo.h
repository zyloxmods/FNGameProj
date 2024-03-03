#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCreativeIslandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IslandTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IslandIntroduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserLocale;
    
    FCreativeIslandInfo();
};

