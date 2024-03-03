#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortMangBotInfo.h"
#include "FortMangBotInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFortMangBotInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMangBotInfo> Items;
    
    FORTNITEGAME_API FFortMangBotInfoArray();
};

