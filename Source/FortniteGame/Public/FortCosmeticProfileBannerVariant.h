#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariant.h"
#include "FortCosmeticProfileBannerVariant.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticProfileBannerVariant : public UFortCosmeticVariant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BannerIconParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BannerPrimaryColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BannerSecondaryColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CC_PrimaryColorParamName;
    
public:
    UFortCosmeticProfileBannerVariant();
};

