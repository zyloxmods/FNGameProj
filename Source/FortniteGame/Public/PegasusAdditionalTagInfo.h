#pragma once
#include "CoreMinimal.h"
#include "PegasusAdditionalTagInfo.generated.h"

USTRUCT(BlueprintType)
struct FPegasusAdditionalTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PGS_ScalarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_StringValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_TagKeyContext;
    
    FORTNITEGAME_API FPegasusAdditionalTagInfo();
};

