#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "EFortIntensityCurveSequenceType.h"
#include "FortSpawnPointsPercentageCurveSequence.generated.h"

UCLASS(Blueprintable)
class UFortSpawnPointsPercentageCurveSequence : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> SpawnPointsPercentageCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortIntensityCurveSequenceType::Type> SequenceType;
    
    UFortSpawnPointsPercentageCurveSequence();
};

