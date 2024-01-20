#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "EFortIntensityCurveSequenceType.h"
#include "FortIntensityCurveSequence.generated.h"

UCLASS(Blueprintable)
class UFortIntensityCurveSequence : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> IntensityCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortIntensityCurveSequenceType::Type> SequenceType;
    
    UFortIntensityCurveSequence();
};

