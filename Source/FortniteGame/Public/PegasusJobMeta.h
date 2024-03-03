#pragma once
#include "CoreMinimal.h"
#include "PegasusJobMeta.generated.h"

USTRUCT(BlueprintType)
struct FPegasusJobMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_VideoJobId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PGS_AdditionalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_RenderJobId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PGS_RenderJobCreationEpoch;
    
    FORTNITEGAME_API FPegasusJobMeta();
};

