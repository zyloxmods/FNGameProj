#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariant.h"
#include "FortCosmeticFloatSliderVariant.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticFloatSliderVariant : public UFortCosmeticVariant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultStartingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinParamValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxParamValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;
    
public:
    UFortCosmeticFloatSliderVariant();
};

