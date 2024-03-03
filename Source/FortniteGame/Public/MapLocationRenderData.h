#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "MapLocationRenderData.generated.h"

USTRUCT(BlueprintType)
struct FMapLocationRenderData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font[3];
    
public:
    FORTNITEGAME_API FMapLocationRenderData();
};

