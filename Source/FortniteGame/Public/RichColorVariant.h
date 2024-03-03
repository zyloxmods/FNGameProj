#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RichColorVariant.generated.h"

class UCustomDynamicColorSwatch;
class UFXSystemAsset;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FRichColorVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultStartingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomDynamicColorSwatch> ColorSwatchForChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVariantPickerShouldShowHSV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFXSystemAsset>> ParticlesToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorParamName;
    
    FORTNITEGAME_API FRichColorVariant();
};

