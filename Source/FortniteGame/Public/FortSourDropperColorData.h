#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortSourDropperColorType.h"
#include "FortSourDropperColorData.generated.h"

USTRUCT(BlueprintType)
struct FFortSourDropperColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortSourDropperColorType, FLinearColor> TypeColors;
    
    FORTNITEGAME_API FFortSourDropperColorData();
};

