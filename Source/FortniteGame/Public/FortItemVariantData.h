#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortVariantData.h"
#include "FortItemVariantData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemVariantData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortVariantData> Variants;
    
public:
    UFortItemVariantData();
};

