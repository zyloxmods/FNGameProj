#pragma once
#include "CoreMinimal.h"
#include "FortPublicAccountInfo.h"
#include "FortPrivateAccountInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortPrivateAccountInfo : public FFortPublicAccountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MtxBalance;
    
    FORTNITEGAME_API FFortPrivateAccountInfo();
};

