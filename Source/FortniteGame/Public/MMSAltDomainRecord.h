#pragma once
#include "CoreMinimal.h"
#include "MMSAltDomainRecord.generated.h"

USTRUCT(BlueprintType)
struct FMMSAltDomainRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AltDomain;
    
    FORTNITEGAME_API FMMSAltDomainRecord();
};

