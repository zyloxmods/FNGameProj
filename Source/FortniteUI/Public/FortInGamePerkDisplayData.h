#pragma once
#include "CoreMinimal.h"
#include "EFortHeroPerkDisplayType.h"
#include "FortInGamePerkDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FFortInGamePerkDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHeroPerkDisplayType PerkDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    FORTNITEUI_API FFortInGamePerkDisplayData();
};

