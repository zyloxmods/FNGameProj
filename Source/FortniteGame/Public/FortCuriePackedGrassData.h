#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortCuriePackedGrassData.generated.h"

USTRUCT(BlueprintType)
struct FFortCuriePackedGrassData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Data;
    
    FORTNITEGAME_API FFortCuriePackedGrassData();
};

