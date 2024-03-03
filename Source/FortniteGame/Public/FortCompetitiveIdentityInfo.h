#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCompetitiveIdentityInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFortCompetitiveIdentityInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FlagAsset;
    
    FORTNITEGAME_API FFortCompetitiveIdentityInfo();
};

