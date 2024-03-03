#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortCuriePackedGrassData.h"
#include "FortCuriePackedGrassDataArray.generated.h"

USTRUCT(BlueprintType)
struct FFortCuriePackedGrassDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCuriePackedGrassData> Items;
    
public:
    FORTNITEGAME_API FFortCuriePackedGrassDataArray();
};

