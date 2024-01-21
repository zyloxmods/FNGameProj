#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortResurrectionData.generated.h"

USTRUCT(BlueprintType)
struct FFortResurrectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResurrectionChipAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResurrectionExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResurrectionExpirationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    FORTNITEGAME_API FFortResurrectionData();
};

