#pragma once
#include "CoreMinimal.h"
#include "CreativePlotSessionData.generated.h"

USTRUCT(BlueprintType)
struct FCreativePlotSessionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesInventoryOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesIslandMenuOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesGameStarted;
    
    FORTNITEGAME_API FCreativePlotSessionData();
};

