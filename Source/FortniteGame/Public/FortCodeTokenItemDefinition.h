#pragma once
#include "CoreMinimal.h"
#include "ECodeTokenPlatform.h"
#include "EItemProfileType.h"
#include "FortAccountItemDefinition.h"
#include "FortCodeTokenItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortCodeTokenItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RedemptionCodeRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RedemptionCodeGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECodeTokenPlatform> AllowedPlatforms;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemProfileType ProfileType;
    
public:
    UFortCodeTokenItemDefinition(const FObjectInitializer& ObjectInitializer);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("CodeToken", GetFName());
    }
};

