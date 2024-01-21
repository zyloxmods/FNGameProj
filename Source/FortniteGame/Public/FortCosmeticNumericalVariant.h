#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariant.h"
#include "FortCosmeticNumericalVariant.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticNumericalVariant : public UFortCosmeticVariant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultStartingNumeric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumericalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumbericalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZerosDigitParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TensDigitParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;
    
public:
    UFortCosmeticNumericalVariant();
};

